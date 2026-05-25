# ch32v203_clock.s
.text
.align 2

# Speed constants to pass into register a0
.equ CLK_8MHZ,   0
.equ CLK_24MHZ,  1
.equ CLK_48MHZ,  2
.equ CLK_72MHZ,  3
.equ CLK_144MHZ, 4

# Hardware Register Base Addresses (CH32V203 mapping)
.equ RCC_BASE,      0x40021000
.equ RCC_CTLR,      (RCC_BASE + 0x00)
.equ RCC_CFGR0,     (RCC_BASE + 0x04)

.equ FLASH_BASE,    0x40022000
.equ FLASH_ACTR,    (FLASH_BASE + 0x00)

.global set_clock
set_clock:
    # Save ra if needed, but since we don't call anything else, we can just use registers t0-t3

    # Step 1: Ensure HSI is enabled and ready
    la t0, RCC_CTLR
    lw t1, 0(t0)
    ori t1, t1, 0x01        # Set HSION (Bit 0)
    sw t1, 0(t0)

wait_hsi_ready:
    lw t1, 0(t0)
    andi t1, t1, 0x02       # Check HSIRDY (Bit 1)
    beqz t1, wait_hsi_ready

    # Step 2: Switch System Clock to pure HSI first so we can safely change PLL settings
    la t2, RCC_CFGR0
    lw t3, 0(t2)
    li t1, ~0x00000003
    and t3, t3, t1          # Clear SW bits [1:0] to select HSI
    sw t3, 0(t2)

wait_sw_hsi:
    lw t3, 0(t2)
    andi t3, t3, 0x0C       # Check SWS bits [3:2] 
    bnez t3, wait_sw_hsi    # Loop until SWS is 00 (HSI)

    # Step 3: Turn off the PLL to configure it
    lw t1, 0(t0)
    li t3, ~0x01000000      # Clear PLLON (Bit 24)
    and t1, t1, t3
    sw t1, 0(t0)

    # Step 4: Clear existing PLL configurations in CFGR0
    lw t3, 0(t2)
    li t1, ~0x003C0000      # Clear PLLMUL bits [21:18]
    and t3, t3, t1

    # Step 5: Process speed target from a0
    li t1, CLK_8MHZ
    beq a0, t1, config_done  # If 8MHz requested, leave PLL disabled

    li t1, CLK_24MHZ
    beq a0, t1, set_24mhz

    li t1, CLK_48MHZ
    beq a0, t1, set_48mhz

    li t1, CLK_72MHZ
    beq a0, t1, set_72mhz

    li t1, CLK_144MHZ
    beq a0, t1, set_144mhz
    j config_done            # Fallback for unknown configurations

set_24mhz:
    # 4MHz * 6 = 24MHz (PLLMUL bits = 0100)
    ori t3, t3, (4 << 18)
    j enable_pll

set_48mhz:
    # 4MHz * 12 = 48MHz (PLLMUL bits = 1010)
    ori t3, t3, (10 << 18)
    j enable_pll

set_72mhz:
    # 4MHz * 18 = 72MHz (PLLMUL bits = 1111 max standard multiplier)
    ori t3, t3, (15 << 18)
    j enable_pll

set_144mhz:
    # Add Flash wait states first so memory can operate at 144MHz
    la t1, FLASH_ACTR
    lw t4, 0(t1)
    ori t4, t4, 0x02        # 2 wait states for speeds over 72MHz
    sw t4, 0(t1)

    # Configure PLL for 144MHz. Requires using HSI directly instead of HSI/2.
    # Set PLLMUL to 18x (15 << 18) and modify the HSI source parameters.
    ori t3, t3, (15 << 18)  
    
    # Enable the PLL source setting
    sw t3, 0(t2)            # Save CFGR0 parameters

    # Activate Extended Overclock Mode in CTLR
    lw t1, 0(t0)
    ori t1, t1, 0x02000000  # Set PLL_EXTEN bit to handle top-end frequencies
    sw t1, 0(t0)
    j enable_pll

enable_pll:
    # Write the calculated configuration to CFGR0
    sw t3, 0(t2)

    # Turn the Main PLL back on
    lw t1, 0(t0)
    ori t1, t1, 0x01000000  # Set PLLON (Bit 24)
    sw t1, 0(t0)

wait_pll_ready:
    lw t1, 0(t0)
    andi t1, t1, 0x02000000 # Check PLLRDY (Bit 25)
    beqz t1, wait_pll_ready

    # Switch the system core input clock to the PLL
    lw t3, 0(t2)
    andi t3, t3, ~0x00000003
    ori t3, t3, 0x00000002  # Set SW to 10 (Select PLL as system clock)
    sw t3, 0(t2)

wait_sw_pll:
    lw t3, 0(t2)
    andi t3, t3, 0x0000000C
    li t1, 0x00000008       # Expect SWS to be 10 (PLL)
    bne t3, t1, wait_sw_pll

config_done:
    ret