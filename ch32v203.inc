.equ SRAM_start, 0x20000000
.equ SRAM_end,  0x20000800
.equ STACK, 0x20000800 

.equ R32_PWR_CTLR ,0x40007000 
.equ R32_PWR_CSR ,0x40007004 
.equ R32_RCC_CTLR ,0x40021000 
.equ R32_RCC_CFGR0,0x40021004 
.equ R32_RCC_INTR ,0x40021008 
.equ R32_RCC_APB2PRSTR ,0x4002100C 
.equ .equ R32_RCC_APB1PRSTR ,0x40021010 
.equ R32_RCC_AHBPCENR ,0x40021014  
.equ R32_RCC_APB2PCENR ,0x40021018  
.equ R32_RCC_APB1PCENR ,0x4002101C  
.equ R32_RCC_BDCTLR ,0x40021020  
.equ R32_RCC_RSTSCKR ,0x40021024  
.equ R32_RCC_AHBRSTR ,0x40021028  
.equ R32_RCC_CFGR2 ,0x4002102C 
.equ R32_HSE_CAL_CTRL ,0x4002202C 
.equ R16_LSI32K_TUNE ,0x40022036  
.equ R8_LSI32K_CAL_CFG ,0x40022049  
.equ R16_LSI32K_CAL_STATR ,0x4002204C  
.equ R8_LSI32K_CAL_OV_CNT, 0x4002204E 
.equ R8_LSI32K_CAL_CTRL,0x4002204F 
.equ R16_BKP_DATAR1, 0x40006C04  
.equ R16_BKP_DATAR2, 0x40006C08  
.equ R16_BKP_DATAR3, 0x40006C0C 
.equ R16_BKP_DATAR4, 0x40006C10  
.equ R16_BKP_DATAR5, 0x40006C14 
.equ R16_BKP_DATAR6, 0x40006C18 
.equ R16_BKP_DATAR7, 0x40006C1C  
.equ R16_BKP_DATAR8, 0x40006C20 
.equ R16_BKP_DATAR9, 0x40006C24  
.equ R16_BKP_DATAR10, 0x40006C28 
.equ R16_BKP_OCTLR, 0x40006C2C 
.equ R16_BKP_TPCTLR, 0x40006C30  
.equ R16_BKP_TPCSR, 0x40006C34  
.equ R16_BKP_DATAR11, 0x40006C40  
.equ R16_BKP_DATAR12, 0x40006C44 
.equ R16_BKP_DATAR13, 0x40006C48  
.equ R16_BKP_DATAR14, 0x40006C4C  
.equ R16_BKP_DATAR15, 0x40006C50  
.equ R16_BKP_DATAR16, 0x40006C54  
.equ R16_BKP_DATAR17, 0x40006C58  
.equ R16_BKP_DATAR18, 0x40006C5C  
.equ R16_BKP_DATAR19, 0x40006C60  
.equ R16_BKP_DATAR20, 0x40006C64  
.equ R16_BKP_DATAR21, 0x40006C68  
.equ R16_BKP_DATAR22, 0x40006C6C  
.equ R16_BKP_DATAR23, 0x40006C70  
.equ R16_BKP_DATAR24, 0x40006C74  
.equ R16_BKP_DATAR25, 0x40006C78  
.equ R16_BKP_DATAR26, 0x40006C7C  
.equ R16_BKP_DATAR27, 0x40006C80  
.equ R16_BKP_DATAR28, 0x40006C84  
.equ R16_BKP_DATAR29, 0x40006C88  
.equ R16_BKP_DATAR30, 0x40006C8C  
.equ R16_BKP_DATAR31, 0x40006C90  
.equ R16_BKP_DATAR32, 0x40006C94  
.equ R16_BKP_DATAR33, 0x40006C98  
.equ R16_BKP_DATAR34, 0x40006C9C  
.equ R16_BKP_DATAR35, 0x40006CA0  
.equ R16_BKP_DATAR36, 0x40006CA4  
.equ R16_BKP_DATAR37, 0x40006CA8  
.equ R16_BKP_DATAR38, 0x40006CAC  
.equ R16_BKP_DATAR39, 0x40006CB0  
.equ R16_BKP_DATAR40, 0x40006CB4  
.equ R16_BKP_DATAR41, 0x40006CB8  
.equ R16_BKP_DATAR42, 0x40006CBC 
.equ R16_RTC_CTLRH,0x40002800 
.equ R16_RTC_CTLRL ,0x40002804 
.equ R16_RTC_PSCRH ,0x40002808 
.equ .equ R16_RTC_PSCRL ,0x4000280C 
.equ R16_RTC_DIVH,0x40002810 
.equ R16_RTC_DIVL,0x40002814 
.equ R16_RTC_CNTH,0x40002818 
.equ R16_RTC_CNTL ,0x4000281C 
.equ R16_RTC_ALRMH ,0x40002820 
.equ R16_RTC_ALRML,0x40002824 
.equ R16_IWDG_CTLR ,0x40003000 
.equ R16_IWDG_PSCR,0x40003004 
.equ R16_IWDG_RLDR,0x40003008 
.equ R16_IWDG_STATR,0x4000300C 





.equ R16_WWDG_CTLR, 0x40002C00  
.equ R16_WWDG_CFGR, 0x40002C04  
.equ R16_WWDG_STATR, 0x40002C08 


.equ R32_EXTI_INTENR, 0x40010400  
.equ R32_EXTI_EVENR, 0x40010404  
.equ R32_EXTI_RTENR, 0x40010408  
.equ R32_EXTI_FTENR, 0x4001040C  
.equ R32_EXTI_SWIEVR, 0x40010410 
.equ R32_EXTI_INTFR, 0x40010414 



.equ R32_PFIC_ISR1, 0xE000E000  
.equ R32_PFIC_ISR2, 0xE000E004  
.equ R32_PFIC_ISR3, 0xE000E008  
.equ R32_PFIC_ISR4, 0xE000E00C  
.equ R32_PFIC_IPR1, 0xE000E020  
.equ R32_PFIC_IPR2, 0xE000E024 
.equ R32_PFIC_IPR3, 0xE000E028 
.equ R32_PFIC_IPR4, 0xE000E02C 
.equ R32_PFIC_ITHRESDR, 0xE000E040 
.equ R32_PFIC_CFGR, 0xE000E048  
.equ R32_PFIC_GISR, 0xE000E04C  
.equ R32_PFIC_VTFIDR, 0xE000E050 
.equ R32_PFIC_VTFADDRR0, 0xE000E060 
.equ R32_PFIC_VTFADDRR1, 0xE000E064 
.equ R32_PFIC_VTFADDRR2, 0xE000E068 
.equ R32_PFIC_VTFADDRR3, 0xE000E06C 
.equ R32_PFIC_IENR1, 0xE000E100  
.equ R32_PFIC_IENR2, 0xE000E104  
.equ R32_PFIC_IENR3, 0xE000E108  
.equ R32_PFIC_IENR4, 0xE000E10C  
.equ R32_PFIC_IRER1, 0xE000E180  
.equ R32_PFIC_IRER2, 0xE000E184  
.equ R32_PFIC_IRER3, 0xE000E188  
.equ R32_PFIC_IRER4, 0xE000E18C  
.equ R32_PFIC_IPSR1, 0xE000E200  
.equ R32_PFIC_IPSR2, 0xE000E204  
.equ R32_PFIC_IPSR3, 0xE000E208  
.equ R32_PFIC_IPSR4, 0xE000E20C  
.equ R32_PFIC_IPRR1, 0xE000E280  
.equ R32_PFIC_IPRR2, 0xE000E284  
.equ R32_PFIC_IPRR3, 0xE000E288 
.equ R32_PFIC_IPRR4, 0xE000E28C 
.equ R32_PFIC_IACTR1, 0xE000E300  
.equ R32_PFIC_IACTR2, 0xE000E304  
.equ R32_PFIC_IACTR3, 0xE000E308  
.equ R32_PFIC_IACTR4, 0xE000E30C  
.equ R32_PFIC_IPRIOR, 0xE000E400 
.equ R32_PFIC_SCTLR, 0xE000ED10 
.equ R32_STK_CTLR, 0xE000F000  
.equ R32_STK_SR, 0xE000F004  
.equ R32_STK_CNTL, 0xE000F008 
.equ R32_STK_CNTH, 0xE000F00C 
.equ R32_STK_CMPLR, 0xE000F010 
.equ R32_STK_CMPHR, 0xE000F014 


.equ R32_GPIOA_CFGLR, 0x40010800  
.equ R32_GPIOB_CFGLR, 0x40010C00  
.equ R32_GPIOC_CFGLR, 0x40011000  
.equ R32_GPIOD_CFGLR, 0x40011400  
.equ R32_GPIOE_CFGLR, 0x40011800  
.equ R32_GPIOA_CFGHR, 0x40010804  
.equ R32_GPIOB_CFGHR, 0x40010C04 
.equ R32_GPIOC_CFGHR, 0x40011004  
.equ R32_GPIOD_CFGHR, 0x40011404  
.equ R32_GPIOE_CFGHR, 0x40011804  
.equ R32_GPIOA_INDR, 0x40010808  
.equ R32_GPIOB_INDR, 0x40010C08  
.equ R32_GPIOC_INDR, 0x40011008  
.equ R32_GPIOD_INDR, 0x40011408  
.equ R32_GPIOE_INDR, 0x40011808  
.equ R32_GPIOA_OUTDR, 0x4001080C 
.equ R32_GPIOB_OUTDR, 0x40010C0C 
.equ R32_GPIOC_OUTDR, 0x4001100C 
.equ R32_GPIOD_OUTDR, 0x4001140C 
.equ R32_GPIOE_OUTDR, 0x4001180C
.equ R32_GPIOA_BSHR, 0x40010810  
.equ R32_GPIOB_BSHR, 0x40010C10  
.equ R32_GPIOC_BSHR, 0x40011010  
.equ R32_GPIOD_BSHR, 0x40011410 
.equ R32_GPIOE_BSHR, 0x40011810  
.equ R32_GPIOA_BCR, 0x40010814  
.equ R32_GPIOB_BCR, 0x40010C14  
.equ R32_GPIOC_BCR, 0x40011014  
.equ R32_GPIOD_BCR, 0x40011414 
.equ R32_GPIOE_BCR, 0x40011814  
.equ R32_GPIOA_LCKR, 0x40010818 
.equ R32_GPIOB_LCKR, 0x40010C18 
.equ R32_GPIOC_LCKR, 0x40011018 
.equ R32_GPIOD_LCKR, 0x40011418 
.equ R32_GPIOE_LCKR, 0x40011818 

.equ R32_DMA1_INTFR 
0x40020000 DMA1 interrupt flag register 
Reset value 
.equ R32_DMA1_INTFCR 
0x00000000 
0x40020004 DMA1 interrupt flag clear register 
.equ R32_DMA1_CFGR1 
0x00000000 
0x40020008 DMA1 channel1 configuration register 
.equ R32_DMA1_CNTR1 
0x00000000 
0x4002000C DMA1 channel1 transferred data register 
.equ R32_DMA1_PADDR1 
0x00000000 
0x40020010 DMA1 channel1 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR1 
.equ R32_DMA1_CFGR2 
0x40020014 DMA1 channel1 memory address register 
0x4002001C DMA1 channel2 configuration register 
0x00000000 
.equ R32_DMA1_CNTR2 
0x00000000 
0x40020020 DMA1 channel2 transferred data register 
.equ R32_DMA1_PADDR2 
0x00000000 
0x40020024 DMA1 channel2 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR2 
.equ R32_DMA1_CFGR3 
0x40020028 DMA1 channel2 memory address register 
0x40020030 DMA1 channel3 configuration register 
0x00000000 
.equ R32_DMA1_CNTR3 
0x00000000 
0x40020034 DMA1 channel3 transferred data register 
.equ R32_DMA1_PADDR3 
0x00000000 
0x40020038 DMA1 channel3 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR3 
.equ R32_DMA1_CFGR4 
0x4002003C DMA1 channel3 memory address register 
0x40020044 DMA1 channel4 configuration register 
0x00000000 
.equ R32_DMA1_CNTR4 
0x00000000 
0x40020048 DMA1 channel4 transferred data register 
.equ R32_DMA1_PADDR4 
0x00000000 
0x4002004C DMA1 channel4 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR4 
.equ R32_DMA1_CFGR5 
0x40020050 DMA1 channel4 memory address register 
0x40020058 DMA1 channel5 configuration register 
0x00000000 
.equ R32_DMA1_CNTR5 
0x00000000 
0x4002005C DMA1 channel5 transferred data register 
.equ R32_DMA1_PADDR5 
0x00000000 
0x40020060 DMA1 channel5 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR5 
.equ R32_DMA1_CFGR6 
0x40020064 DMA1 channel5 memory address register 
0x4002006C DMA1 channel6 configuration register 
0x00000000 
.equ R32_DMA1_CNTR6 
0x00000000 
0x40020070 DMA1 channel6 transferred data register 
.equ R32_DMA1_PADDR6 
0x00000000 
0x40020074 DMA1 channel6 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR6 
.equ R32_DMA1_CFGR7 
0x40020078 DMA1 channel6 memory address register 
0x40020080 DMA1 channel7 configuration register 
0x00000000 
.equ R32_DMA1_CNTR7 
0x00000000 
0x40020084 DMA1 channel7 transferred data register 
.equ R32_DMA1_PADDR7 
0x00000000 
0x40020088 DMA1 channel7 peripheral address register 0x00000000 


.equ R32_DMA1_MADDR7 
0x4002008C DMA1 channel7 memory address register 
.equ R32_DMA1_CFGR8 
0x00000000 
0x40020094 DMA1 channel8 configuration register 
.equ R32_DMA1_CNTR8 
0x00000000 
0x40020098 DMA1 channel8 transferred data register 
.equ R32_DMA1_PADDR8 
0x00000000 
0x4002009C DMA1 channel8 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR8 
0x400200A0 DMA1 channel8 memory address register 
Table 11-6 DMA2 registers 
Name 
Access address 
Description 
0x00000000 
.equ R32_DMA2_INTFR 
Reset value 
0x40020400 DMA2 interrupt flag register 
.equ R32_DMA2_INTFCR 
0x00000000 
0x40020404 DMA2 interrupt flag clear register 
.equ R32_DMA2_CFGR1 
0x00000000 
0x40020408 DMA2 channel1 configuration register 
.equ R32_DMA2_CNTR1 
0x00000000 
0x4002040C DMA2 channel1 transferred data register 0x00000000 
.equ R32_DMA2_PADDR1 
.equ R32_DMA2_MADDR1 
0x40020410 DMA2 channel1 peripheral address register 0x00000000 
0x40020414 DMA2 channel1 memory address register 0x00000000 
.equ R32_DMA2_CFGR2 
.equ R32_DMA2_CNTR2 
0x4002041C DMA2 channel2 configuration register 
0x00000000 
0x40020420 DMA2 channel2 transferred data register 0x00000000 
.equ R32_DMA2_PADDR2 
.equ R32_DMA2_MADDR2 
0x40020424 DMA2 channel2 peripheral address register 0x00000000 
0x40020428 DMA2 channel2 memory address register 0x00000000 
.equ R32_DMA2_CFGR3 
.equ R32_DMA2_CNTR3 
0x40020430 DMA2 channel3 configuration register 
0x00000000 
0x40020434 DMA2 channel3 transferred data register 0x00000000 
.equ R32_DMA2_PADDR3 
.equ R32_DMA2_MADDR3 
0x40020438 DMA2 channel3 peripheral address register 0x00000000 
0x4002043C DMA2 channel3 memory address register 0x00000000 
.equ R32_DMA2_CFGR4 
.equ R32_DMA2_CNTR4 
0x40020444 DMA2 channel4 configuration register 
0x00000000 
0x40020448 DMA2 channel4 transferred data register 0x00000000 
.equ R32_DMA2_PADDR4 
.equ R32_DMA2_MADDR4 
0x4002044C DMA2 channel4 peripheral address register 0x00000000 
0x40020450 DMA2 channel4 memory address register 0x00000000 
.equ R32_DMA2_CFGR5 
.equ R32_DMA2_CNTR5 
0x40020458 DMA2 channel5 configuration register 
0x00000000 
0x4002045C DMA2 channel5 transferred data register 0x00000000 
.equ R32_DMA2_PADDR5 
.equ R32_DMA2_MADDR5 
0x40020460 DMA2 channel5 peripheral address register 0x00000000 
0x40020464 DMA2 channel5 memory address register 0x00000000 
.equ R32_DMA2_CFGR6 
.equ R32_DMA2_CNTR6 
0x4002046C DMA2 channel6 configuration register 
0x00000000 
0x40020470 DMA2 channel6 transferred data register 0x00000000 
.equ R32_DMA2_PADDR6 
.equ R32_DMA2_MADDR6 
0x40020474 DMA2 channel6 peripheral address register 0x00000000 
0x40020478 DMA2 channel6 memory address register 0x00000000 
.equ R32_DMA2_CFGR7 
.equ R32_DMA2_CNTR7 
0x40020480 DMA2 channel7 configuration register 
0x00000000 
0x40020484 DMA2 channel7 transferred data register 0x00000000 
.equ R32_DMA2_PADDR7 
.equ R32_DMA2_MADDR7 
0x40020488 DMA2 channel7 peripheral address register 0x00000000 
0x4002048C DMA2 channel7 memory address register 0x00000000 
.equ R32_DMA2_CFGR8 
.equ R32_DMA2_CNTR8 
0x40020490 DMA2 channel8 configuration register 
0x00000000 
0x40020494 DMA2 channel8 transferred data register 0x00000000 
.equ R32_DMA2_PADDR8 
.equ R32_DMA2_MADDR8 
0x40020498 DMA2 channel8 peripheral address register 0x00000000 
0x4002049C DMA2 channel8 memory address register 0x00000000 
.equ R32_DMA2_CFGR9 
.equ R32_DMA2_CNTR9 
0x400204A0 DMA2 channel9 configuration register 
0x00000000 
0x400204A4 DMA2 channel9 transferred data register 0x00000000 
.equ R32_DMA2_PADDR9 
0x400204A8 DMA2 channel9 peripheral address register 0x00000000 


.equ R32_DMA1_MADDR7 
0x4002008C DMA1 channel7 memory address register 
.equ R32_DMA1_CFGR8 
0x00000000 
0x40020094 DMA1 channel8 configuration register 
.equ R32_DMA1_CNTR8 
0x00000000 
0x40020098 DMA1 channel8 transferred data register 
.equ R32_DMA1_PADDR8 
0x00000000 
0x4002009C DMA1 channel8 peripheral address register 0x00000000 
.equ R32_DMA1_MADDR8 
0x400200A0 DMA1 channel8 memory address register 
Table 11-6 DMA2 registers 
Name 
Access address 
Description 
0x00000000 
.equ R32_DMA2_INTFR 
Reset value 
0x40020400 DMA2 interrupt flag register 
.equ R32_DMA2_INTFCR 
0x00000000 
0x40020404 DMA2 interrupt flag clear register 
.equ R32_DMA2_CFGR1 
0x00000000 
0x40020408 DMA2 channel1 configuration register 
.equ R32_DMA2_CNTR1 
0x00000000 
0x4002040C DMA2 channel1 transferred data register 0x00000000 
.equ R32_DMA2_PADDR1 
.equ R32_DMA2_MADDR1 
0x40020410 DMA2 channel1 peripheral address register 0x00000000 
0x40020414 DMA2 channel1 memory address register 0x00000000 
.equ R32_DMA2_CFGR2 
.equ R32_DMA2_CNTR2 
0x4002041C DMA2 channel2 configuration register 
0x00000000 
0x40020420 DMA2 channel2 transferred data register 0x00000000 
.equ R32_DMA2_PADDR2 
.equ R32_DMA2_MADDR2 
0x40020424 DMA2 channel2 peripheral address register 0x00000000 
0x40020428 DMA2 channel2 memory address register 0x00000000 
.equ R32_DMA2_CFGR3 
.equ R32_DMA2_CNTR3 
0x40020430 DMA2 channel3 configuration register 
0x00000000 
0x40020434 DMA2 channel3 transferred data register 0x00000000 
.equ R32_DMA2_PADDR3 
.equ R32_DMA2_MADDR3 
0x40020438 DMA2 channel3 peripheral address register 0x00000000 
0x4002043C DMA2 channel3 memory address register 0x00000000 
.equ R32_DMA2_CFGR4 
.equ R32_DMA2_CNTR4 
0x40020444 DMA2 channel4 configuration register 
0x00000000 
0x40020448 DMA2 channel4 transferred data register 0x00000000 
.equ R32_DMA2_PADDR4 
.equ R32_DMA2_MADDR4 
0x4002044C DMA2 channel4 peripheral address register 0x00000000 
0x40020450 DMA2 channel4 memory address register 0x00000000 
.equ R32_DMA2_CFGR5 
.equ R32_DMA2_CNTR5 
0x40020458 DMA2 channel5 configuration register 
0x00000000 
0x4002045C DMA2 channel5 transferred data register 0x00000000 
.equ R32_DMA2_PADDR5 
.equ R32_DMA2_MADDR5 
0x40020460 DMA2 channel5 peripheral address register 0x00000000 
0x40020464 DMA2 channel5 memory address register 0x00000000 
.equ R32_DMA2_CFGR6 
.equ R32_DMA2_CNTR6 
0x4002046C DMA2 channel6 configuration register 
0x00000000 
0x40020470 DMA2 channel6 transferred data register 0x00000000 
.equ R32_DMA2_PADDR6 
.equ R32_DMA2_MADDR6 
0x40020474 DMA2 channel6 peripheral address register 0x00000000 
0x40020478 DMA2 channel6 memory address register 0x00000000 
.equ R32_DMA2_CFGR7 
.equ R32_DMA2_CNTR7 
0x40020480 DMA2 channel7 configuration register 
0x00000000 
0x40020484 DMA2 channel7 transferred data register 0x00000000 
.equ R32_DMA2_PADDR7 
.equ R32_DMA2_MADDR7 
0x40020488 DMA2 channel7 peripheral address register 0x00000000 
0x4002048C DMA2 channel7 memory address register 0x00000000 
R32_DMA2_CFGR8 
R32_DMA2_CNTR8 
0x40020490 DMA2 channel8 configuration register 
0x00000000 
0x40020494 DMA2 channel8 transferred data register 0x00000000 
.equ R32_DMA2_PADDR8 
.equ R32_DMA2_MADDR8 
0x40020498 DMA2 channel8 peripheral address register 0x00000000 
0x4002049C DMA2 channel8 memory address register 0x00000000 
.equ R32_DMA2_CFGR9 
.equ R32_DMA2_CNTR9 
0x400204A0 DMA2 channel9 configuration register 
0x00000000 
0x400204A4 DMA2 channel9 transferred data register 0x00000000 
.equ R32_DMA2_PADDR9 
0x400204A8 DMA2 channel9 peripheral address register 0x00000000 

.equ R32_ADC1_STATR 0x40012400 ADC1 status register 0x00000000 
.equ R32_ADC1_CTLR1 0x40012404 ADC1 control register1 0x00000000 
.equ R32_ADC1_CTLR2 0x40012408 ADC1 control register 2 0x00000000 
.equ R32_ADC1_SAMPTR1 0x4001240C ADC1 sample time configuration register1 0x00000000 
.equ R32_ADC1_SAMPTR2 0x40012410 ADC1 sample time configuration register2 0x00000000 
.equ R32_ADC1_IOFR1 0x40012414 ADC1 injected channel data offset register1 0x00000000 
.equ R32_ADC1_IOFR2 0x40012418 ADC1 injected channel data offset register2 0x00000000 
.equ R32_ADC1_IOFR3 0x4001241C ADC1 injected channel data offset register3 0x00000000 
.equ R32_ADC1_IOFR4 0x40012420 ADC1 injected channel data offset register4 0x00000000 
.equ R32_ADC1_WDHTR 0x40012424 ADC1 watchdog high threshold register 0x00000000 
.equ R32_ADC1_WDLTR 0x40012428 ADC1 watchdog low threshold register 0x00000000 
.equ R32_ADC1_RSQR1 0x4001242C ADC1 regular channel sequence register1 0x00000000 
.equ R32_ADC1_RSQR2 0x40012430 ADC1 regular channel sequence register2 0x00000000 
.equ R32_ADC1_RSQR3 0x40012434 ADC1 regular channel sequence register3 0x00000000 
.equ R32_ADC1_ISQR 0x40012438 ADC1 injected channel sequence register 0x00000000 
.equ R32_ADC1_IDATAR1 0x4001243C ADC1 injected data register1 0x00000000 
.equ R32_ADC1_IDATAR2 0x40012440 ADC1 injected data register2 0x00000000 
.equ R32_ADC1_IDATAR3 0x40012444 ADC1 injected data register3 0x00000000 
.equ R32_ADC1_IDATAR4 0x40012448 ADC1 injected data register4 0x00000000 
.equ R32_ADC1_RDATAR 0x4001244C ADC1 regular data register 0x00000000 
Table 12-6 ADC2 registers 
Name Access address Description Reset value 
.equ R32_ADC2_STATR 0x40012800 ADC2 status register 0x00000000 
.equ R32_ADC2_CTLR1 0x40012804 ADC2 control register1 0x00000000 
.equ R32_ADC2_CTLR2 0x40012808 ADC2 control register 2 0x00000000 
.equ R32_ADC2_SAMPTR1 0x4001280C ADC2 sample time configuration register1 0x00000000 
.equ R32_ADC2_SAMPTR2 0x40012810 ADC2 sample time configuration register2 0x00000000 
.equ R32_ADC2_IOFR1 0x40012814 ADC2 injected channel data offset register1 0x00000000 
.equ R32_ADC2_IOFR2 0x40012818 ADC2 injected channel data offset register2 0x00000000 
.equ R32_ADC2_IOFR3 0x4001281C ADC2 injected channel data offset register3 0x00000000 
.equ R32_ADC2_IOFR4 0x40012820 ADC2 injected channel data offset register4 0x00000000 
.equ R32_ADC2_WDHTR 0x40012824 ADC2 watchdog high threshold register 0x00000000 
.equ R32_ADC2_WDLTR 0x40012828 ADC2 watchdog low threshold register 0x00000000 
.equ R32_ADC2_RSQR1 0x4001282C ADC2 regular channel sequence register1 0x00000000 
.equ R32_ADC2_RSQR2 0x40012830 ADC2 regular channel sequence register2 0x00000000 
.equ R32_ADC2_RSQR3 0x40012834 ADC2 regular channel sequence register3 0x00000000 
.equ R32_ADC2_ISQR 0x40012838 ADC2 injected channel sequence register 0x00000000 
.equ R32_ADC2_IDATAR1 0x4001283C ADC2 injected data register1 0x00000000 
.equ R32_ADC2_IDATAR2 0x40012840 ADC2 injected data register2 0x00000000 

.equ R32_ADC2_IDATAR3 0x40012844 ADC2 injected data register3 0x00000000 
.equ R32_ADC2_IDATAR4 0x40012848 ADC2 injected data register4 0x00000000 
.equ R32_ADC2_RDATAR 0x4001284C ADC2 regular data register 0x00000000 


.equ R32_TKEY1_CHARGE1 
0x4001240C 
TKEY charge sample time register1 
Reset value 
.equ R32_TKEY1_CHARGE2 
0x00000000 
0x40012410 
TKEY charge sample time register2 
.equ R32_TKEY1_CHGOFFSET 0x4001243C TKEY charge time offset register 
.equ R32_TKEY1_ACT_DCG 
0x4001244C 
0x00000000 
0x00000000 
TKEY activate and discharge time 
register 
.equ R32_TKEY1_DR 
X 
0x4001244C 
TKEY data register 
Table 13-2 TKEY2 registers 
Name 
Access address 
Description 
X 
.equ R32_TKEY2_CHARGE1 
Reset value 
0x4001280C 
TKEY charge sample time register1 
.equ R32_TKEY2_CHARGE2 
0x00000000 
0x40012810 
TKEY charge sample time register2 
.equ R32_TKEY2_CHGOFFSET 0x4001283C TKEY charge time offset register 
.equ R32_TKEY2_ACT_DCG 
0x4001284C 
0x00000000 
0x00000000 
TKEY activate and discharge time 
register 
.equ R32_TKEY2_DR 
X 
0x4001284C 
TKEY data register 

.equ R16_TIM1_CTLR1 0x40012C00 Control register1 0x0000 
.equ R16_TIM1_CTLR2 0x40012C04 Control register2 0x0000 
.equ R16_TIM1_SMCFGR 0x40012C08 Slave mode configuration register 0x0000 
.equ R16_TIM1_DMAINTENR 0x40012C0C DMA/interrupt enable register 0x0000 
.equ R16_TIM1_INTFR 0x40012C10 Interrupt flag register 0x0000 
.equ R16_TIM1_SWEVGR 0x40012C14 Event generation register 0x0000 
.equ R16_TIM1_CHCTLR1 0x40012C18 Compare/capture control register1 0x0000 
.equ R16_TIM1_CHCTLR2 0x40012C1C Compare/capture control register2 0x0000 
.equ R16_TIM1_CCER 0x40012C20 Compare/capture enable register 0x0000 
.equ R16_TIM1_CNT 0x40012C24 Counter 0x0000 
.equ R16_TIM1_PSC 0x40012C28 Prescaler 0x0000 
.equ R16_TIM1_ATRLR 0x40012C2C Auto-reload register 0x0000 
.equ R16_TIM1_RPTCR 0x40012C30 Repeat count register 0x0000 


.equ R16_TIM1_CH1CVR 0x40012C34 Compare/capture register1 0x0000 
.equ R16_TIM1_CH2CVR 0x40012C38 Compare/capture register2 0x0000 
.equ R16_TIM1_CH3CVR 0x40012C3C Compare/capture register3 0x0000 
.equ R16_TIM1_CH4CVR 0x40012C40 Compare/capture register4 0x0000 
.equ R16_TIM1_BDTR 0x40012C44 Break and dead zone register 0x0000 
.equ R16_TIM1_DMACFGR 0x40012C48 DMA configuration register 0x0000 
.equ R16_TIM1_DMAADR 0x40012C4C DMA address register in continuous mode 0x0000 
Table 14-4 TIM8 registers 
Name Access address Description Reset value 
.equ R16_TIM8_CTLR1 0x40013400 Control register1 0x0000 
.equ R16_TIM8_CTLR2 0x40013404 Control register2 0x0000 
.equ R16_TIM8_SMCFGR 0x40013408 Slave mode configuration register 0x0000 
.equ R16_TIM8_DMAINTENR 0x4001340C DMA/interrupt enable register 0x0000 
.equ R16_TIM8_INTFR 0x40013410 Interrupt flag register 0x0000 
.equ R16_TIM8_SWEVGR 0x40013414 Event generation register 0x0000 
.equ R16_TIM8_CHCTLR1 0x40013418 Compare/capture control register1 0x0000 
.equ R16_TIM8_CHCTLR2 0x4001341C Compare/capture control register2 0x0000 
.equ R16_TIM8_CCER 0x40013420 Compare/capture enable register 0x0000 
.equ R16_TIM8_CNT 0x40013424 Counter 0x0000 
.equ R16_TIM8_PSC 0x40013428 Prescaler 0x0000 
.equ R16_TIM8_ATRLR 0x4001342C Auto-reload register 0x0000 
.equ R16_TIM8_RPTCR 0x40013430 Repeat count register 0x0000 
.equ R16_TIM8_CH1CVR 0x40013434 Compare/capture register1 0x0000 
.equ R16_TIM8_CH2CVR 0x40013438 Compare/capture register2 0x0000 
.equ R16_TIM8_CH3CVR 0x4001343C Compare/capture register3 0x0000 
.equ R16_TIM8_CH4CVR 0x40013440 Compare/capture register4 0x0000 
.equ R16_TIM8_BDTR 0x40013444 Break and dead zone register 0x0000 
.equ R16_TIM8_DMACFGR 0x40013448 DMA configuration register 0x0000 
.equ R16_TIM8_DMAADR 0x4001344C DMA address register in continuous 
mode 0x0000 
Table 14-5 TIM9 registers 
Name Access address Description Reset value 
.equ R16_TIM9_CTLR1 0x40014C00 Control register1 0x0000 
.equ R16_TIM9_CTLR2 0x40014C04 Control register2 0x0000 
.equ R16_TIM9_SMCFGR 0x40014C08 Slave mode configuration register 0x0000 
.equ R16_TIM9_DMAINTENR 0x40014C0C DMA/interrupt enable register 0x0000 
.equ R16_TIM9_INTFR 0x40014C10 Interrupt flag register 0x0000 
.equ R16_TIM9_SWEVGR 0x40014C14 Event generation register 0x0000 
.equ R16_TIM9_CHCTLR1 0x40014C18 Compare/capture control register1 0x0000 
.equ R16_TIM9_CHCTLR2 0x40014C1C Compare/capture control register2 0x0000 
.equ R16_TIM9_CCER 0x40014C20 Compare/capture enable register 0x0000 
.equ R16_TIM9_CNT 0x40014C24 Counter 0x0000 


.equ R16_TIM9_PSC 0x40014C28 Prescaler 0x0000 
.equ R16_TIM9_ATRLR 0x40014C2C Auto-reload register 0x0000 
.equ R16_TIM9_RPTCR 0x40014C30 Repeat count register 0x0000 
.equ R16_TIM9_CH1CVR 0x40014C34 Compare/capture register1 0x0000 
.equ R16_TIM9_CH2CVR 0x40014C38 Compare/capture register2 0x0000 
.equ R16_TIM9_CH3CVR 0x40014C3C Compare/capture register3 0x0000 
.equ R16_TIM9_CH4CVR 0x40014C40 Compare/capture register4 0x0000 
.equ R16_TIM9_BDTR 0x40014C44 Break and dead zone register 0x0000 
.equ R16_TIM9_DMACFGR 0x40014C48 DMA configuration register 0x0000 
.equ R16_TIM9_DMAADR 0x40014C4C DMA address register in continuous 
mode 0x0000 
Table 14-6 TIM10 registers 
Name Access address Description Reset value 
.equ R16_TIM10_CTLR1 0x40015000 Control register1 0x0000 
.equ R16_TIM10_CTLR2 0x40015004 Control register2 0x0000 
.equ R16_TIM10_SMCFGR 0x40015008 Slave mode configuration register 0x0000 
.equ R16_TIM10_DMAINTENR 0x4001500C DMA/interrupt enable register 0x0000 
.equ R16_TIM10_INTFR 0x40015010 Interrupt flag register 0x0000 
.equ R16_TIM10_SWEVGR 0x40015014 Event generation register 0x0000 
.equ R16_TIM10_CHCTLR1 0x40015018 Compare/capture control register1 0x0000 
.equ R16_TIM10_CHCTLR2 0x4001501C Compare/capture control register2 0x0000 
.equ R16_TIM10_CCER 0x40015020 Compare/capture enable register 0x0000 
.equ R16_TIM10_CNT 0x40015024 Counter 0x0000 
.equ R16_TIM10_PSC 0x40015028 Prescaler 0x0000 
.equ R16_TIM10_ATRLR 0x4001502C Auto-reload register 0x0000 
.equ R16_TIM10_RPTCR 0x40015030 Repeat count register 0x0000 
.equ R16_TIM10_CH1CVR 0x40015034 Compare/capture register1 0x0000 
.equ R16_TIM10_CH2CVR 0x40015038 Compare/capture register2 0x0000 
.equ R16_TIM10_CH3CVR 0x4001503C Compare/capture register3 0x0000 
.equ R16_TIM10_CH4CVR 0x40015040 Compare/capture register4 0x0000 
.equ R16_TIM10_BDTR 0x40015044 Break and dead zone register 0x0000 
.equ R16_TIM10_DMACFGR 0x40015048 DMA configuration register 0x0000 
.equ R16_TIM10_DMAADR 0x4001504C DMA address register in continuous mode 0x0000



.equ R16_TIM2_CTLR1 0x40000000 TIM2 control register1 0x0000 
.equ R16_TIM2_CTLR2 0x40000004 TIM2 control register2 0x0000 
.equ R16_TIM2_SMCFGR 0x40000008 TIM2 slave mode configuration 
register 0x0000 
.equ R16_TIM2_DMAINTENR 0x4000000C TIM2 DMA/interrupt enable 
register  0x0000 
.equ R16_TIM2_INTFR 0x40000010 TIM2 interrupt flag register 0x0000 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 225     
.equ R16_TIM2_SWEVGR 0x40000014 TIM2 event generation register 0x0000 
.equ R16_TIM2_CHCTLR1 0x40000018 TIM2 compare/capture control 
register1 0x0000 
.equ R16_TIM2_CHCTLR2 0x4000001C TIM2 compare/capture control 
register2 0x0000 
.equ R16_TIM2_CCER 0x40000020 TIM2 compare/capture enable register 0x0000 
.equ R16_TIM2_CNT 0x40000024 TIM2 counter 0x0000 
.equ R16_TIM2_PSC 0x40000028 TIM2 prescaler 0x0000 
.equ R16_TIM2_ATRLR 0x4000002C TIM2 auto-reload register 0x0000 
.equ R16_TIM2_CH1CVR 0x40000034 TIM2 compare/capture register1 0x0000 
.equ R16_TIM2_CH2CVR 0x40000038 TIM2 compare/capture register2 0x0000 
.equ R16_TIM2_CH3CVR 0x4000003C TIM2 compare/capture register3 0x0000 
.equ R16_TIM2_CH4CVR 0x40000040 TIM2 compare/capture register4 0x0000 
.equ R16_TIM2_DMACFGR 0x40000048 TIM2 DMA configuration register 0x0000 
.equ R16_TIM2_DMAADR 0x4000004C TIM2 DMA address register in 
continuous mode 0x0000 
Table 15-4 TIM3 registers 
Name Offset address Description Reset value 
.equ R16_TIM3_CTLR1 0x40000400 TIM3 control register1 0x0000 
.equ R16_TIM3_CTLR2 0x40000404 TIM3 control register2 0x0000 
.equ R16_TIM3_SMCFGR 0x40000408 TIM3 slave mode configuration 
register 0x0000 
.equ R16_TIM3_DMAINTENR 0x4000040C TIM3 DMA/interrupt enable 
register  0x0000 
.equ R16_TIM3_INTFR 0x40000410 TIM3 interrupt flag register 0x0000 
.equ R16_TIM3_SWEVGR 0x40000414 TIM3 event generation register 0x0000 
.equ R16_TIM3_CHCTLR1 0x40000418 TIM3 compare/capture control 
register1 0x0000 
.equ R16_TIM3_CHCTLR2 0x4000041C TIM3 compare/capture control 
register2 0x0000 
.equ R16_TIM3_CCER 0x40000420 TIM3 compare/capture enable register 0x0000 
.equ R16_TIM3_CNT 0x40000424 TIM3 counter 0x0000 
.equ R16_TIM3_PSC 0x40000428 TIM3 prescaler 0x0000 
.equ R16_TIM3_ATRLR 0x4000042C TIM3 auto reload register 0x0000 
.equ R16_TIM3_CH1CVR 0x40000434 TIM3 compare/capture register1 0x0000 
.equ R16_TIM3_CH2CVR 0x40000438 TIM3 compare/capture register2 0x0000 
.equ R16_TIM3_CH3CVR 0x4000043C TIM3 compare/capture register3 0x0000 
.equ R16_TIM3_CH4CVR 0x40000440 TIM3 compare/capture register4 0x0000 
.equ R16_TIM3_DMACFGR 0x40000448 TIM3 DMA configuration register 0x0000 
.equ R16_TIM3_DMAADR 0x4000044C TIM3 DMA address register in 
continuous mode 0x0000 


.equ R16_TIM4_CTLR1 0x40000800 TIM4 control register1 0x0000 
.equ R16_TIM4_CTLR2 0x40000804 TIM4 control register2 0x0000 
.equ R16_TIM4_SMCFGR 0x40000808 TIM4 slave mode configuration 
register 0x0000 
.equ R16_TIM4_DMAINTENR 0x4000080C TIM4 DMA/interrupt enable 
register  0x0000 
.equ R16_TIM4_INTFR 0x40000810 TIM4 interrupt flag register 0x0000 
.equ R16_TIM4_SWEVGR 0x40000814 TIM4 event generation register 0x0000 
.equ R16_TIM4_CHCTLR1 0x40000818 TIM4 compare/capture control 
register1 0x0000 
.equ R16_TIM4_CHCTLR2 0x4000081C TIM4 compare/capture control 
register2 0x0000 
.equ R16_TIM4_CCER 0x40000820 TIM4 compare/capture enable register 0x0000 
.equ R16_TIM4_CNT 0x40000824 TIM4 counter 0x0000 
.equ R16_TIM4_PSC 0x40000828 TIM4 prescaler 0x0000 
.equ R16_TIM4_ATRLR 0x4000082C TIM4 auto-reload register 0x0000 
.equ R16_TIM4_CH1CVR 0x40000834 TIM4 compare/capture register1 0x0000 
.equ R16_TIM4_CH2CVR 0x40000838 TIM4 compare/capture register2 0x0000 
.equ R16_TIM4_CH3CVR 0x4000083C TIM4 compare/capture register3 0x0000 
.equ R16_TIM4_CH4CVR 0x40000840 TIM4 compare/capture register4 0x0000 
.equ R16_TIM4_DMACFGR 0x40000848 TIM4 DMA configuration register 0x0000 
.equ R16_TIM4_DMAADR 0x4000084C TIM4 DMA address register in 
continuous mode 0x0000 
 
Table 15-6 TIM5 registers 
Name Offset address Description Reset value 
.equ R16_TIM5_CTLR1 0x40000C00 TIM5 control register 1 0x0000 
.equ R16_TIM5_CTLR2 0x40000C04 TIM5 control register 2 0x0000 
.equ R16_TIM5_SMCFGR 0x40000C08 TIM5 slave mode configuration 
register 0x0000 
.equ R16_TIM5_DMAINTENR 0x40000C0C TIM5 DMA/interrupt enable 
register 0x0000 
.equ R16_TIM5_INTFR 0x40000C10 TIM5 interrupt flag register 0x0000 
.equ R16_TIM5_SWEVGR 0x40000C14 TIM5 event generation register 0x0000 
.equ R16_TIM5_CHCTLR1 0x40000C18 TIM5 compare/capture register 1 0x0000 
.equ R16_TIM5_CHCTLR2 0x40000C1C TIM5 compare/capture control register2 0x0000 
.equ R16_TIM5_CCER 0x40000C20 TIM5 compare/capture enable register 0x0000 
.equ R16_TIM5_CNT 0x40000C24 TIM5 counter 0x0000 
.equ R16_TIM5_PSC 0x40000C28 TIM5 prescaler 0x0000 
.equ R16_TIM5_ATRLR 0x40000C2C TIM5 auto-reload register 0x0000 
.equ R16_TIM5_CH1CVR 0x40000C34 TIM5 compare/capture register1 0x0000 
.equ R16_TIM5_CH2CVR 0x40000C38 TIM5 compare/capture register2 0x0000 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 227     
.equ R16_TIM5_CH3CVR 0x40000C3C TIM5 compare/capture register3 0x0000 
.equ R16_TIM5_CH4CVR 0x40000C40 TIM5 compare/capture register4 0x0000 
.equ R16_TIM5_DMACFGR 0x40000C48 TIM5 DMA configuration register 0x0000 
.equ R16_TIM5_DMAADR 0x40000C4C TIM5 DMA address register in 
continuous mode 0x0000



.equ R16_TIM4_CTLR1 0x40000800 TIM4 control register1 0x0000 
.equ R16_TIM4_CTLR2 0x40000804 TIM4 control register2 0x0000 
.equ R16_TIM4_SMCFGR 0x40000808 TIM4 slave mode configuration 
register 0x0000 
.equ R16_TIM4_DMAINTENR 0x4000080C TIM4 DMA/interrupt enable 
register  0x0000 
.equ R16_TIM4_INTFR 0x40000810 TIM4 interrupt flag register 0x0000 
.equ R16_TIM4_SWEVGR 0x40000814 TIM4 event generation register 0x0000 
.equ R16_TIM4_CHCTLR1 0x40000818 TIM4 compare/capture control 
register1 0x0000 
.equ R16_TIM4_CHCTLR2 0x4000081C TIM4 compare/capture control 
register2 0x0000 
.equ R16_TIM4_CCER 0x40000820 TIM4 compare/capture enable register 0x0000 
.equ R16_TIM4_CNT 0x40000824 TIM4 counter 0x0000 
.equ R16_TIM4_PSC 0x40000828 TIM4 prescaler 0x0000 
.equ R16_TIM4_ATRLR 0x4000082C TIM4 auto-reload register 0x0000 
.equ R16_TIM4_CH1CVR 0x40000834 TIM4 compare/capture register1 0x0000 
.equ R16_TIM4_CH2CVR 0x40000838 TIM4 compare/capture register2 0x0000 
.equ R16_TIM4_CH3CVR 0x4000083C TIM4 compare/capture register3 0x0000 
.equ R16_TIM4_CH4CVR 0x40000840 TIM4 compare/capture register4 0x0000 
.equ R16_TIM4_DMACFGR 0x40000848 TIM4 DMA configuration register 0x0000 
.equ R16_TIM4_DMAADR 0x4000084C TIM4 DMA address register in 
continuous mode 0x0000 
 
Table 15-6 TIM5 registers 
Name Offset address Description Reset value 
.equ R16_TIM5_CTLR1 0x40000C00 TIM5 control register 1 0x0000 
.equ R16_TIM5_CTLR2 0x40000C04 TIM5 control register 2 0x0000 
.equ R16_TIM5_SMCFGR 0x40000C08 TIM5 slave mode configuration 
register 0x0000 
.equ R16_TIM5_DMAINTENR 0x40000C0C TIM5 DMA/interrupt enable 
register 0x0000 
.equ R16_TIM5_INTFR 0x40000C10 TIM5 interrupt flag register 0x0000 
.equ R16_TIM5_SWEVGR 0x40000C14 TIM5 event generation register 0x0000 
.equ R16_TIM5_CHCTLR1 0x40000C18 TIM5 compare/capture register 1 0x0000 
.equ R16_TIM5_CHCTLR2 0x40000C1C TIM5 compare/capture control register2 0x0000 
.equ R16_TIM5_CCER 0x40000C20 TIM5 compare/capture enable register 0x0000 
.equ R16_TIM5_CNT 0x40000C24 TIM5 counter 0x0000 
.equ R16_TIM5_PSC 0x40000C28 TIM5 prescaler 0x0000 
.equ R16_TIM5_ATRLR 0x40000C2C TIM5 auto-reload register 0x0000 
.equ R16_TIM5_CH1CVR 0x40000C34 TIM5 compare/capture register1 0x0000 
.equ R16_TIM5_CH2CVR 0x40000C38 TIM5 compare/capture register2 0x0000 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 227     
.equ R16_TIM5_CH3CVR 0x40000C3C TIM5 compare/capture register3 0x0000 
.equ R16_TIM5_CH4CVR 0x40000C40 TIM5 compare/capture register4 0x0000 
.equ R16_TIM5_DMACFGR 0x40000C48 TIM5 DMA configuration register 0x0000 
.equ R16_TIM5_DMAADR 0x40000C4C TIM5 DMA address register in 
continuous mode 0x0000



.equ R16_TIM6_CTLR1 
0x40001000 
TIM6 control register1 
Reset value 
.equ R16_TIM6_CTLR2 
0x0000 
0x40001004 
TIM6 control register2 
.equ R16_TIM6_DMAINTENR 0x4000100C TIM6 DMA/interrupt enable 
0x0000 
register 
.equ R16_TIM6_INTFR 
0x40001010 
.equ TIM6 interrupt flag register 
0x0000 
.equ R16_TIM6_SWEVGR 
0x0000 
0x40001014 
TIM6 event generation register 
.equ R16_TIM6_CNT 
0x0000 
0x40001024 
TIM6 counter 
.equ R16_TIM6_PSC 
0x0000 
0x40001028 
TIM6 prescaler 
.equ R16_TIM6_ATRLR 
0x0000 
0x4000102C 
TIM6 auto-reload register 
Table 16-2 TIM7 registers 
Name 
Offset address 
Description 
0x0000 
.equ R16_TIM7_CTLR1 
Reset value 
TIM7 control register1 
.equ R16_TIM7_CTLR2 
0x40001400 
0x40001404 
0x0000 
TIM7 control register2 
.equ R16_TIM7_DMAINTENR 0x4000140C TIM7 DMA/interrupt enable 
0x0000 
register 
.equ R16_TIM7_INTFR 
0x40001410 
0x0000 
TIM7 interrupt flag register 
0x0000 
245     
V1.7 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 246     
.equ R16_TIM7_CNT 0x40001424 TIM7 counter 0x0000 
.equ R16_TIM7_PSC 0x40001428 TIM7 prescaler 0x0000 
.equ R16_TIM7_ATRLR 0x4000142C TIM7 auto-reload register 0x0000



.equ R32_DAC_CTLR 0x40007400 DAC control register 0x00000000 
.equ 0x40007404 DAC software trigger register 0x00000000 
.equ R32_DAC_R12BDHR1 0x40007408 DAC channel1 right-aligned 12-bit data 
hold register 0x00000000 
.equ R32_DAC_L12BDHR1 0x4000740C DAC channel1 left-aligned 12-bit data 
hold register 0x00000000 
.equ R32_DAC_R8BDHR1 0x40007410 DAC channel1 right-aligned 8-bit data 
hold register 0x00000000 
.equ R32_DAC_R12BDHR2 0x40007414 DAC channel2 right-aligned 12-bit data 
hold register 0x00000000 
.equ R32_DAC_L12BDHR2 0x40007418 DAC channel2 left-aligned 12-bit data 
hold register 0x00000000 
.equ R32_DAC_R8BDHR2 0x4000741C DAC channel2 right-aligned 8-bit data 
hold register 0x00000000 
.equ R32_DAC_RD12BDHR 0x40007420 Dual channel right-aligned 12-bit data 
hold register 0x00000000 
.equ R32_DAC_LD12BDHR 0x40007424 Dual channel left-aligned 12-bit data hold 
register 0x00000000 
.equ R32_DAC_RD8BDHR 0x40007428 Dual channel right-aligned 8-bit data hold 
register 0x00000000 
.equ R32_DAC_DOR1 0x4000742C DAC channel1 data output register 0x00000000 
R32_DAC_DOR2 0x40007430 DAC channel2 data output register 0x00000000



.equ R32_USART1_STATR 
0x40013800 
UASRT1 status register 
Reset value 
.equ R32_USART1_DATAR 0x40013804 UASRT1 data register 
0x40013808 
0x000000C0 
0x000000XX 
.equ R32_USART1_BRR 
.equ R32_USART1_CTLR1 
UASRT1 baud rate register 
0x4001380C 
UASRT1 control register1 
0x00000000 
.equ R32_USART1_CTLR2 
0x00000000 
0x40013810 
UASRT1 control register2 
.equ R32_USART1_CTLR3 
0x00000000 
0x40013814 
UASRT1 control register3 
.equ R32_USART1_GPR 
0x00000000 
0x40013818 
UASRT1 guard time and prescaler register 
0x00000000 


.equ R32_USART2_STATR 0x40004400 UASRT2 status register 0x000000C0 
.equ R32_USART2_DATAR 0x40004404 UASRT2 data register 0x000000XX 
.equ R32_USART2_BRR 0x40004408 UASRT2 baud rate register 0x00000000 
.equ R32_USART2_CTLR1 0x4000440C UASRT2 control register1 0x00000000 
.equ R32_USART2_CTLR2 0x40004410 UASRT2 control register2 0x00000000 
.equ R32_USART2_CTLR3 0x40004414 UASRT2 control register3 0x00000000 
.equ R32_USART2_GPR 0x40004418 UASRT2 guard time and prescaler 
register 0x00000000 
Table 18-4 USART3 registers 
Name Access address Description Reset value 
.equ R32_USART3_STATR 0x40004800 UASRT3 status register 0x000000C0 
.equ R32_USART3_DATAR 0x40004804 UASRT3 data register 0x000000XX 
.equ R32_USART3_BRR 0x40004808 UASRT3 baud rate register 0x00000000 
.equ R32_USART3_CTLR1 0x4000480C UASRT3 control register1 0x00000000 
.equ R32_USART3_CTLR2 0x40004810 UASRT3 control register2 0x00000000 
.equ R32_USART3_CTLR3 0x40004814 UASRT3 control register3 0x00000000 
.equ R32_USART3_GPR 0x40004818 UASRT3 guard time and prescaler 
register 0x00000000 
Table 18-5 UART4 registers 
Name Access address Description Reset value 
.equ R32_UART4_STATR 0x40004C00 UART4 status register 0x000000C0 
.equ R32_UART4_DATAR 0x40004C04 UART4 data register 0x000000XX 
.equ R32_UART4_BRR 0x40004C08 UART4 baud rate register 0x00000000 
.equ R32_UART4_CTLR1 0x40004C0C UART4 control register1 0x00000000 
.equ R32_UART4_CTLR2 0x40004C10 UART4 control register2 0x00000000 
.equ R32_UART4_CTLR3 0x40004C14 UART4 control register3 0x00000000 
.equ R32_UART4_GPR 0x40004C18 UART4 guard time and prescaler register 0x00000000 
Table 18-6 UART5 registers 
Name Access address Description Reset value 
.equ R32_UART5_STATR 0x40005000 UART5 status register 0x000000C0 
.equ R32_UART5_DATAR 0x40005004 UART5 data register 0x000000XX 
.equ R32_UART5_BRR 0x40005008 UART5 baud rate register 0x00000000 
.equ R32_UART5_CTLR1 0x4000500C UART5 control register1 0x00000000 
.equ R32_UART5_CTLR2 0x40005010 UART5 control register2 0x00000000 
.equ R32_UART5_CTLR3 0x40005014 UART5 control register3 0x00000000 
.equ R32_UART5_GPR 0x40005018 UART5 guard time and prescaler register 0x00000000 
Table 18-7 UART6 registers 
Name Access address Description Reset value 
.equ R32_UART6_STATR 0x40001800 UART6 status register 0x000000C0 
.equ R32_UART6_DATAR 0x40001804 UART6 data register 0x000000XX 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 270     
.equ R32_UART6_BRR 0x40001808 UART6 baud rate register 0x00000000 
.equ R32_UART6_CTLR1 0x4000180C UART6 control register1 0x00000000 
.equ R32_UART6_CTLR2 0x40001810 UART6 control register2 0x00000000 
.equ R32_UART6_CTLR3 0x40001814 UART6 control register3 0x00000000 
.equ R32_UART6_GPR 0x40001818 UART6 guard time and prescaler register 0x00000000 
Table 18-8 UART7 registers 
Name Access address Description Reset value 
.equ R32_UART7_STATR 0x40001C00 UART7 status register 0x000000C0 
.equ R32_UART7_DATAR 0x40001C04 UART7 data register 0x000000XX 
.equ R32_UART7_BRR 0x40001C08 UART7 baud rate register 0x00000000 
.equ R32_UART7_CTLR1 0x40001C0C UART7 control register1 0x00000000 
.equ R32_UART7_CTLR2 0x40001C10 UART7 control register2 0x00000000 
.equ R32_UART7_CTLR3 0x40001C14 UART7 control register3 0x00000000 
.equ R32_UART7_GPR 0x40001C18 UART7 guard time and prescaler register 0x00000000 
Table 18-9 UART8 registers 
Name Access address Description Reset value 
.equ R32_UART8_STATR 0x40002000 UART8 status register 0x000000C0 
.equ R32_UART8_DATAR 0x40002004 UART8 data register 0x000000XX 
.equ R32_UART8_BRR 0x40002008 UART8 baud rate register 0x00000000 
.equ R32_UART8_CTLR1 0x4000200C UART8 control register1 0x00000000 
.equ R32_UART8_CTLR2 0x40002010 UART8 control register2 0x00000000 
.equ R32_UART8_CTLR3 0x40002014 UART8 control register3 0x00000000 
.equ R32_UART8_GPR 0x40002018 UART8 guard time and prescaler register 0x00000000


.equ R16_I2C1_CTLR1 
0x40005400 
I2C1 control register1 
Reset value 
.equ R16_I2C1_CTLR2 
0x0000 
0x40005404 
I2C1 control register2 
.equ R16_I2C1_OADDR1 
0x0000 
0x40005408 
I2C1 address register1 
.equ R16_I2C1_OADDR2 
0x0000 
0x4000540C 
I2C1 address register2 
.equ R16_I2C1_DATAR 
0x0000 
0x40005410 
I2C1 data register 
.equ R16_I2C1_STAR1 
0x0000 
0x40005414 
I2C1 status register1 
.equ R16_I2C1_STAR2 
0x0000 
0x40005418 
I2C1 status register2 
.equ R16_I2C1_CKCFGR 
0x0000 
0x4000541C 
I2C1 clock register 
.equ R16_I2C1_RTR 
0x0000 
0x40005420 
I2C1 rise time register 
Table 19-2 I2C2 registers 
Name 
Access address 
Description 
0x0002 
.equ R16_I2C2_CTLR1 
Reset value 
0x40005800 
I2C2 control register1 
0x0000 
286     
V1.7 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 287     
.equ R16_I2C2_CTLR2 0x40005804 I2C2 control register2 0x0000 
.equ R16_I2C2_OADDR1 0x40005808 I2C2 address register1 0x0000 
.equ R16_I2C2_OADDR2 0x4000580C I2C2 address register2 0x0000 
.equ R16_I2C2_DATAR 0x40005810 I2C2 data register 0x0000 
.equ R16_I2C2_STAR1 0x40005814 I2C2 status register1 0x0000 
.equ R16_I2C2_STAR2 0x40005818 I2C2 control register2 0x0000 
.equ R16_I2C2_CKCFGR 0x4000581C I2C2 clock register 0x0000 
.equ R16_I2C2_RTR 0x40005820 I2C2 rise time register 0x0002 


.equ R16_SPI1_CTLR1 
Reset value 
0x40013000 
SPI1 control register1 
.equ R16_SPI1_CTLR2 
0x0000 
0x40013004 
SPI1 control register2 
.equ R16_SPI1_STATR 
0x0000 
0x40013008 
SPI1 status register 
.equ R16_SPI1_DATAR 
0x0002 
0x4001300C 
SPI1 data register 
.equ R16_SPI1_CRCR 
0x0000 
0x40013010 
SPI1 polynomial register 
.equ R16_SPI1_RCRCR 
0x0007 
0x40013014 
SPI1 receive CRC register 
0x0000 
312     
V1.7 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 313     
.equ R16_SPI1_TCRCR 0x40013018 SPI1 transmit CRC register 0x0000 
.equ R16_SPI1_I2S_CFGR 0x4001301C SPI1 I2S configuration register 0x00 
.equ R16_SPI1_HSCR 0x40013024 SPI1 high-speed control register 0x00 
Table 20-2 SPI2 registers 
Name Access address Description Reset value 
.equ R16_SPI2_CTLR1 0x40003800 SPI2 control register1 0x0000 
.equ R16_SPI2_CTLR2 0x40003804 SPI2 control register2 0x0000 
.equ R16_SPI2_STATR 0x40003808 SPI2 status register 0x0002 
.equ R16_SPI2_DATAR 0x4000380C SPI2 data register 0x0000 
.equ R16_SPI2_CRCR 0x40003810 SPI2 polynomial register 0x0007 
.equ R16_SPI2_RCRCR 0x40003814 SPI2 receive CRC register 0x0000 
.equ R16_SPI2_TCRCR 0x40003818 SPI2 transmit CRC register 0x0000 
.equ R16_SPI2_I2S_CFGR 0x4000381C SPI2 I2S configuration register 0x00 
.equ R16_SPI2_I2SPR 0x40003820 SPI2 I2S prescaler register 0x00 
.equ R16_SPI2_HSCR 0x40003824 SPI2 high-speed control register 0x00 
Table 20-3 SPI3 registers 
Name Access address Description Reset value 
.equ R16_SPI3_CTLR1 0x40003C00 SPI3 control register1 0x0000 
.equ R16_SPI3_CTLR2 0x40003C04 SPI3 control register2 0x0000 
.equ R16_SPI3_STATR 0x40003C08 SPI3 status register 0x0002 
.equ R16_SPI3_DATAR 0x40003C0C SPI3 data register 0x0000 
.equ R16_SPI3_CRCR 0x40003C10 SPI3 polynomial register 0x0007 
.equ R16_SPI3_RCRCR 0x40003C14 SPI3 receive CRC register 0x0000 
.equ R16_SPI3_TCRCR 0x40003C18 SPI3 transmit CRC register 0x0000 
.equ R16_SPI3_I2S_CFGR 0x40003C1C SPI3 I2S configuration register 0x00 
.equ R16_SPI3_I2SPR 0x40003C20 SPI3 I2S prescaler register 0x00 
.equ R16_SPI3_HSCR 0x40003C24 SPI3 high-speed control register 0x00 



.equ R16_USBD_CNTR 0x40005C40 USB control register 0x0003 
.equ R16_USBD_ISTR 0x40005C44 USB interrupt status register 0x0000 
.equ R16_USBD_FNR 0x40005C48 USB frame number register 0x0XXX 
.equ R16_USBD_DADDR 0x40005C4C USB device address register 0x0000 
.equ R16_USBD_BTABLE 0x40005C50 USB packet buffer description table 
address register 0x0000 
Table 21-6 USBD endpoint-specific registers 
Name Access address Description Reset value 
.equ R16_USBD_EPR0 0x40005C00 USB endpoint configuration register0 0x0000 
.equ R16_USBD_EPR1 0x40005C04 USB endpoint configuration register1 0x0000 
.equ R16_USBD_EPR2 0x40005C08 USB endpoint configuration register2 0x0000 
.equ R16_USBD_EPR3 0x40005C0C USB endpoint configuration register3 0x0000 
.equ R16_USBD_EPR4 0x40005C10 USB endpoint configuration register4 0x0000 
.equ R16_USBD_EPR5 0x40005C14 USB endpoint configuration register5 0x0000 
.equ R16_USBD_EPR6 0x40005C18 USB endpoint configuration register6 0x0000 
.equ R16_USBD_EPR7 0x40005C1C USB endpoint configuration register7 0x0000 
Table 21-7 USBD buffer description registers 
Name Access address Description Reset 
value 
.equ R16_USBD_ADDR0_TX 0x40006000+[USBD_BTABLE] Endpoint transmit buffer address 
register 0 0x0000 
.equ R16_USBD_COUNT0_TX 0x40006004+[USBD_BTABLE] Endpoint transmit byte count 
register0 0x0000 
.equ R16_USBD_ADDR0_RX 0x40006008+[USBD_BTABLE] Endpoint receive buffer address 
register0 0x0000 
.equ R16_USBD_COUNT0_RX 0x4000600C+[USBD_BTABLE] Endpoint Received Data Bytes 
Register 0 0x0000 
.equ R16_USBD_ADDR1_TX 0x40006010+[USBD_BTABLE] Endpoint transmit buffer address 
register1 0x0000 
.equ R16_USBD_COUNT1_TX 0x40006014+[USBD_BTABLE] Endpoint transmit byte count 
register1 0x0000 
.equ R16_USBD_ADDR1_RX 0x40006018+[USBD_BTABLE] Endpoint receive buffer address 
register1 0x0000 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 331     
.equ R16_USBD_COUNT1_RX 0x4000601C+[USBD_BTABLE] Endpoint receive byte count 
register1 0x0000 
.equ R16_USBD_ADDR2_TX 0x40006020+[USBD_BTABLE] Endpoint transmit buffer address 
register2 0x0000 
.equ R16_USBD_COUNT2_TX 0x40006024+[USBD_BTABLE] Endpoint transmit byte count 
register2 0x0000 
.equ R16_USBD_ADDR2_RX 0x40006028+[USBD_BTABLE] Endpoint receive buffer address 
register2 0x0000 
.equ R16_USBD_COUNT2_RX 0x4000602C+[USBD_BTABLE] Endpoint receive byte count 
register2 0x0000 
.equ R16_USBD_ADDR3_TX 0x40006030+[USBD_BTABLE] Endpoint transmit buffer address 
register3 0x0000 
.equ R16_USBD_COUNT3_TX 0x40006034+[USBD_BTABLE] Endpoint transmit byte count 
register3 0x0000 
.equ R16_USBD_ADDR3_RX 0x40006038+[USBD_BTABLE] Endpoint receive buffer address 
register3 0x0000 
.equ R16_USBD_COUNT3_RX 0x4000603C+[USBD_BTABLE] Endpoint receive byte count 
register3 0x0000 
.equ R16_USBD_ADDR4_TX 0x40006040+[USBD_BTABLE] Endpoint transmit buffer address 
register4 0x0000 
.equ R16_USBD_COUNT4_TX 0x40006044+[USBD_BTABLE] Endpoint transmit byte count 
register4 0x0000 
.equ R16_USBD_ADDR4_RX 0x40006048+[USBD_BTABLE] Endpoint receive buffer address 
register4 0x0000 
.equ R16_USBD_COUNT4_RX 0x4000604C+[USBD_BTABLE] Endpoint receive byte count 
register4 0x0000 
.equ R16_USBD_ADDR5_TX 0x40006050+[USBD_BTABLE] Endpoint transmit buffer address 
register5 0x0000 
.equ R16_USBD_COUNT5_TX 0x40006054+[USBD_BTABLE] Endpoint transmit byte count 
register 5 0x0000 
.equ R16_USBD_ADDR5_RX 0x40006058+[USBD_BTABLE] Endpoint receive buffer address 
register5 0x0000 
.equ R16_USBD_COUNT5_RX 0x4000605C+[USBD_BTABLE] Endpoint receive byte count 
register5 0x0000 
.equ R16_USBD_ADDR6_TX 0x40006060+[USBD_BTABLE] Endpoint transmit buffer address 
register6 0x0000 
.equ R16_USBD_COUNT6_TX 0x40006064+[USBD_BTABLE] Endpoint transmit byte count 
register6 0x0000 
.equ R16_USBD_ADDR6_RX 0x40006068+[USBD_BTABLE] Endpoint receive buffer address 
register6 0x0000 
.equ R16_USBD_COUNT6_RX 0x4000606C+[USBD_BTABLE] Endpoint receive byte count 
register6 0x0000 
.equ R16_USBD_ADDR7_TX 0x40006070+[USBD_BTABLE] Endpoint transmit buffer address 
register7 0x0000 
.equ R16_USBD_COUNT7_TX 0x40006074+[USBD_BTABLE] Endpoint transmit byte count 0x0000 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 332     
register7 
.equ R16_USBD_ADDR7_RX 0x40006078+[USBD_BTABLE] Endpoint receive buffer address 
register7 0x0000 
.equ R16_USBD_COUNT7_RX 0x4000607C+[USBD_BTABLE] Endpoint receive byte count 
register7 0x0000


.equ R8_USB_CTRL 
Reset value 
0x40023400 
USB control register 
.equ R8_USB_INT_EN 
0x06 
0x40023402 
USB interrupt enable register 
.equ R8_USB_DEV_AD 
0 
0x40023403 
USB device address register 
.equ R16_USB_FRAME_NO 
0 
0x40023404 
USB frame number register 
.equ R8_USB_SUSPEND 
0 
0x40023406 
USB suspend register 
.equ R8_USB_SPPED_TYPE 
0 
0x40023408 
USB current speed type register 
.equ R8_USB_MIS_ST 
0 
0x40023409 
USB miscellaneous status register 
.equ R8_USB_INT_FG 
xx10_1000b 
0x4002340A 
USB interrupt flag register 
.equ R8_USB_INT_ST 
0 
0x4002340B 
USB interrupt status register 
.equ R16_USB_RX_LEN 
00xx_xxxxb 
0x4002340C 
USB receive length register 
xx 





.equ R32_UEP_CONFIG 0x40023410 Endpoint enable configuration register 00000000h 
.equ R32_UEP_TYPE 0x40023414 Endpoint type configuration register 00000000h 
.equ R32_UEP_BUF_MOD 0x40023418 Endpoint buffer mode register 00000000h 
.equ R32_UEP0_DMA 0x4002341C Endpoint0 buffer start address xxxxh 
.equ R32_UEP1_RX_DMA 0x40023420 Endpoint1 receive buffer start address xxxxh 
.equ R32_UEP2_RX_DMA 0x40023424 Endpoint2 receive buffer start address xxxxh 
.equ R32_UEP3_RX_DMA 0x40023428 Endpoint3 receive buffer start address xxxxh 
.equ R32_UEP4_RX_DMA 0x4002342C Endpoint4 receive buffer start address xxxxh 
.equ R32_UEP5_RX_DMA 0x40023430 Endpoint5 receive buffer start address xxxxh 
.equ R32_UEP6_RX_DMA 0x40023434 Endpoint6 receive buffer start address xxxxh 
.equ R32_UEP7_RX_DMA 0x40023438 Endpoint7 receive buffer start address xxxxh 
.equ R32_UEP8_RX_DMA 0x4002343C Endpoint8 receive buffer start address xxxxh 
.equ R32_UEP9_RX_DMA 0x40023440 Endpoint9 receive buffer start address xxxxh 
.equ R32_UEP10_RX_DMA 0x40023444 Endpoint10 receive buffer start address xxxxh 
.equ R32_UEP11_RX_DMA 0x40023448 Endpoint11 receive buffer start address xxxxh 
.equ R32_UEP12_RX_DMA 0x4002344C Endpoint12 receive buffer start address xxxxh 
.equ R32_UEP13_RX_DMA 0x40023450 Endpoint13 receive buffer start address xxxxh 
.equ R32_UEP14_RX_DMA 0x40023454 Endpoint14 receive buffer start address xxxxh 
.equ R32_UEP15_RX_DMA 0x40023458 Endpoint15 receive buffer start address xxxxh 
.equ R32_UEP1_TX_DMA 0x4002345C Endpoint1 transmit buffer start address xxxxh 
.equ R32_UEP2_TX_DMA 0x40023460 Endpoint2 transmit buffer start address xxxxh 
.equ R32_UEP3_TX_DMA 0x40023464 Endpoint3 transmit buffer start address xxxxh 
.equ R32_UEP4_TX_DMA 0x40023468 Endpoint4 transmit buffer start address xxxxh 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 353     
.equ R32_UEP5_TX_DMA 0x4002346C Endpoint5 transmit buffer start address xxxxh 
.equ R32_UEP6_TX_DMA 0x40023470 Endpoint6 transmit buffer start address xxxxh 
.equ .equ R32_UEP7_TX_DMA 0x40023474 Endpoint7 transmit buffer start address xxxxh 
.equ R32_UEP8_TX_DMA 0x40023478 Endpoint8 transmit buffer start address xxxxh 
.equ R32_UEP9_TX_DMA 0x4002347C Endpoint9 transmit buffer start address xxxxh 
.equ R32_UEP10_TX_DMA 0x40023480 Endpoint10 transmit buffer start address xxxxh 
.equ R32_UEP11_TX_DMA 0x40023484 Endpoint11 transmit buffer start address xxxxh 
.equ R32_UEP12_TX_DMA 0x40023488 Endpoint12 transmit buffer start address xxxxh 
.equ R32_UEP13_TX_DMA 0x4002348C Endpoint13 transmit buffer start address xxxxh 
.equ R32_UEP14_TX_DMA 0x40023490 Endpoint14 transmit buffer start address xxxxh 
.equ R32_UEP15_TX_DMA 0x40023494 Endpoint15 transmit buffer start address xxxxh 
.equ R16_UEP0_MAX_LEN 0x40023498 Endpoint0 maximum length packet 
register xxxxh 
.equ R16_UEP1_MAX_LEN 0x4002349C Endpoint1 maximum length packet 
register xxxxh 
.equ R16_UEP2_MAX_LEN 0x400234A0 Endpoint2 maximum length packet 
register xxxxh 
.equ R16_UEP3_MAX_LEN 0x400234A4 Endpoint3 maximum length packet 
register xxxxh 
.equ R16_UEP4_MAX_LEN 0x400234A8 Endpoint4 maximum length packet 
register xxxxh 
.equ R16_UEP5_MAX_LEN 0x400234AC Endpoint5 maximum length packet 
register xxxxh 
.equ R16_UEP6_MAX_LEN 0x400234B0 Endpoint6 maximum length packet 
register xxxxh 
.equ R16_UEP7_MAX_LEN 0x400234B4 Endpoint7 maximum length packet 
register xxxxh 
.equ R16_UEP8_MAX_LEN 0x400234B8 Endpoint8 maximum length packet 
register xxxxh 
.equ R16_UEP9_MAX_LEN 0x400234BC Endpoint9 maximum length packet 
register xxxxh 
.equ R16_UEP10_MAX_LEN 0x400234C0 Endpoint10 maximum length packet 
register xxxxh 
.equ R16_UEP11_MAX_LEN 0x400234C4 Endpoint11 maximum length packet 
register xxxxh 
.equ R16_UEP12_MAX_LEN 0x400234C8 Endpoint12 maximum length packet 
register xxxxh 
.equ R16_UEP13_MAX_LEN 0x400234CC Endpoint13 maximum length packet 
register xxxxh 
.equ R16_UEP14_MAX_LEN 0x400234D0 Endpoint14 maximum length packet 
register xxxxh 
.equ R16_UEP15_MAX_LEN 0x400234D4 Endpoint15 maximum length packet 
register xxxxh 
.equ R16_UEP0_T_LEN 0x400234D8 Endpoint0 transmit length register xxxxh 
.equ R8_UEP0_TX_CTRL 0x400234DA Endpoint0 transmit control register 00h 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 354     
.equ R8_UEP0_RX_CTRL 0x400234DB Endpoint0 receive control register 00h 
.equ R16_UEP1_T_LEN 0x400234DC Endpoint1 transmit length register xxxxh 
.equ R8_UEP1_TX_CTRL 0x400234DE Endpoint1 transmit control register 00h 
.equ R8_UEP1_RX_CTRL 0x400234DF Endpoint1 receive control register 00h 
.equ R16_UEP2_T_LEN 0x400234E0 Endpoint2 transmit length register xxxxh 
.equ R8_UEP2_TX_CTRL 0x400234E2 Endpoint2 transmit control register 00h 
.equ R8_UEP2_RX_CTRL 0x400234E3 Endpoint2 receive control register 00h 
.equ R16_UEP3_T_LEN 0x400234E4 Endpoint3 transmit length register xxxxh 
.equ R8_UEP3_TX_CTRL 0x400234E6 Endpoint3 transmit control register 00h 
.equ R8_UEP3_RX_CTRL 0x400234E7 Endpoint3 receive control register 00h 
.equ R16_UEP4_T_LEN 0x400234E8 Endpoint4 transmit length register xxxxh 
.equ R8_UEP4_TX_CTRL 0x400234EA Endpoint4 transmit control register 00h 
.equ R8_UEP4_RX_CTRL 0x400234EB Endpoint4 receive control register 00h 
.equ R16_UEP5_T_LEN 0x400234EC Endpoint5 transmit length register xxxxh 
.equ R8_UEP5_TX_CTRL 0x400234EE Endpoint5 transmit control register 00h 
.equ R8_UEP5_RX_CTRL 0x400234EF Endpoint5 receive control register 00h 
.equ R16_UEP6_T_LEN 0x400234F0 Endpoint6 transmit length register xxxxh 
.equ R8_UEP6_TX_CTRL 0x400234F2 Endpoint6 transmit control register 00h 
.equ R8_UEP6_RX_CTRL 0x400234F3 Endpoint6 receive control register 00h 
.equ R16_UEP7_T_LEN 0x400234F4 Endpoint7 transmit length register xxxxh 
.equ R8_UEP7_TX_CTRL 0x400234F6 Endpoint7 transmit control register 00h 
.equ R8_UEP7_RX_CTRL 0x400234F7 Endpoint7 receive control register 00h 
.equ R16_UEP8_T_LEN 0x400234F8 Endpoint8 transmit length register xxxxh 
.equ R8_UEP8_TX_CTRL 0x400234FA Endpoint8 transmit control register 00h 
.equ R8_UEP8_RX_CTRL 0x400234FB Endpoint8 receive control register 00h 
.equ R16_UEP9_T_LEN 0x400234FC Endpoint9 transmit length register xxxxh 
.equ R8_UEP9_TX_CTRL 0x400234FE Endpoint9 transmit control register 00h 
.equ R8_UEP9_RX_CTRL 0x400234FF Endpoint9 receive control register 00h 
.equ R16_UEP10_T_LEN 0x40023500 Endpoint10 transmit length register xxxxh 
.equ R8_UEP10_TX_CTRL 0x40023502 Endpoint10 transmit control register 00h 
.equ R8_UEP10_RX_CTRL 0x40023503 Endpoint10 receive control register 00h 
.equ R16_UEP11_T_LEN 0x40023504 Endpoint11 transmit length register xxxxh 
.equ R8_UEP11_TX_CTRL 0x40023506 Endpoint11 transmit control register 00h 
.equ R8_UEP11_RX_CTRL 0x40023507 Endpoint11 receive control register 00h 
.equ R16_UEP12_T_LEN 0x40023508 Endpoint12 transmit length register xxxxh 
.equ R8_UEP12_TX_CTRL 0x4002350A Endpoint12 transmit control register 00h 
.equ R8_UEP12_RX_CTRL 0x4002350B Endpoint12 receive control register 00h 
.equ R16_UEP13_T_LEN 0x4002350C Endpoint13 transmit length register xxxxh 
.equ R8_UEP13_TX_CTRL 0x4002350E Endpoint13 transmit control register 00h 
.equ R8_UEP13_RX_CTRL 0x4002350F Endpoint13 receive control register 00h 
.equ R16_UEP14_T_LEN 0x40023510 Endpoint14 transmit length register xxxxh 
.equ R8_UEP14_TX_CTRL 0x40023512 Endpoint14 transmit control register 00h 
.equ R8_UEP14_RX_CTRL 0x40023513 Endpoint14 receive control register 00h 
CH32FV2x_V3x Reference Manual  
http://wch.cn 
.equ R16_UEP15_T_LEN 
0x40023514 
Endpoint15 transmit length register 
.equ R8_UEP15_TX_CTRL 
xxxxh 
0x40023516 
Endpoint15 transmit control register 
.equ R8_UEP15_RX_CTRL 
00h 
0x40023517 
Endpoint15 receive control register 


.equ R8_USB_CTRL 
0x50000000 
USB control register 
Reset value 
.equ R8_USB_INT_EN 
0x06 
0x50000002 
USB interrupt enable register 
.equ R8_USB_DEV_AD 
0x00 
0x50000003 
USB Device address register 
.equ R32_USB_STATUS 
0x00 
0x50000004 
USB status register 
.equ R8_USB_MIS_ST 
0xXX20XXXX 
0x50000005 
USB miscellaneous status register 
.equ R8_USB_INT_FG 
0xXX 
0x50000006 
USB interrupt flag register 
.equ R8_USB_INT_ST 
0x20 
0x50000007 
USB interrupt status register 
.equ R16_USB_RX_LEN 
0xXX 
0x50000008 
USB receive length register 
.equ R32_USB_OTG_CR 
0xXX 
0x50000054 
USB OTG control register 
.equ R32_USB_OTG_SR 
0x00 
0x50000058 
USB OTG status register





.equ R8_UDEV_CTRL 0x50000001 USB device physical port control 
register 0xX0 
.equ R8_UEP4_1_MOD 0x5000000C Endpoint 1(9)/4(8/12) mode control 
register 0x00 
.equ R8_UEP2_3_MOD 0x5000000D Endpoint 2(10)/3(11) mode control 
register 0x00 
.equ R8_UEP5_6_MOD 0x5000000E Endpoint 5(13)/6(14) mode control 
register 0x00 
.equ R8_UEP7_MOD 0x5000000F Endpoint 7(15) mode control register 0x00 
.equ R16_UEP0_DMA 0x50000010 Endpoint 0 buffer start address 0xXXXX 
.equ R16_UEP1_DMA 0x50000014 Endpoint 1(9) buffer start address 0xXXXX 
.equ R16_UEP2_DMA 0x50000018 Endpoint 2 (10) buffer start address 0xXXXX 
.equ R16_UEP3_DMA 0x5000001C Endpoint 3 (11) buffer start address 0xXXXX 
.equ R16_UEP4_DMA 0x50000020 Endpoint 4 (8/12) buffer start address 0xXXXX 
.equ R16_UEP5_DMA 0x50000024 Endpoint 5(13) buffer start address 0xXXXX 
.equ R16_UEP6_DMA 0x50000028 Endpoint 6(14) buffer start address 0xXXXX 
.equ R16_UEP7_DMA 0x5000002C Endpoint 7(15) buffer start address 0xXXXX 
.equ R8_UEP0_T_LEN 0x50000030 Endpoint 0 transmit length register 0xXX 
.equ R8_UEP0_TX_CTRL 0x50000032 Endpoint 0 transmit control register 0x00 
.equ R8_UEP0_RX_CTRL 0x50000033 Endpoint 0 receive control register 0x00 
.equ R8_UEP1_T_LEN 0x50000034 Endpoint 1(9) transmit length register 0xXX 
.equ R8_UEP1_TX_CTRL 0x50000036 Endpoint 1(9) transmit control register 0x00 
.equ R8_UEP1_RX_CTRL 0x50000037 Endpoint 1(9) receive control register 0x00 
.equ R8_UEP2_T_LEN 0x50000038 Endpoint 2(10) transmit length 
register 0xXX 
.equ R8_UEP2_TX_CTRL 0x5000003A Endpoint 2(10) transmit control 
register 0x00 
.equ R8_UEP2_RX_CTRL 0x5000003B Endpoint 2(10) receive control 
register 0x00 
.equ R8_UEP3_T_LEN 0x5000003C Endpoint 3(11) transmit length 
register 0xXX 
.equ R8_UEP3_TX_CTRL 0x500003E Endpoint 3(11) transmit control 
register 0x00 
.equ R8_UEP3_RX_CTRL 0x500003F Endpoint 3(11) receive control 
register 0x00 
.equ R8_UEP4_T_LEN 0x50000040 Endpoint 4 (8/12) transmit length 
register 0xXX 
.equ R8_UEP4_TX_CTRL 0x50000042 Endpoint 4 (8/12) transmit control 
register 0x00 
.equ R8_UEP4_RX_CTRL 0x50000043 Endpoint 4 (8/12) receive control 
Register 0x00 
.equ R8_UEP5_T_LEN 0x50000044 Endpoint 5(13) transmit length 
register 0xXX 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 373     
.equ R8_UEP5_TX_CTRL 0x50000046 Endpoint 5(13) transmit control 
register 0x00 
.equ R8_UEP5_RX_CTRL 0x50000047 Endpoint 5(13) receive control 
register 0x00 
.equ R8_UEP6_T_LEN 0x50000048 Endpoint 6(14) transmit length 
register 0xXX 
.equ R8_UEP6_TX_CTRL 0x5000004A Endpoint 6(14) transmit control 
register 0x00 
.equ R8_UEP6_RX_CTRL 0x5000004B Endpoint 6(14) receive control 
register 0x00 
.equ R8_UEP7_T_LEN 0x5000004C Endpoint 7(15) transmit length 
register 0xXX 
.equ R8_UEP7_TX_CTRL 0x5000004E Endpoint 7(15) transmit control 
register 0x00 
.equ R8_UEP7_RX_CTRL 0x5000004F Endpoint 7(15) receive control 
register 0x00


.equ R8_UHOST_CTRL 0x50000001 USB host physical port control 
register 0xX0 
.equ R32_UH_EP_MOD 0x5000000D USB host endpoint mode control 
register 0x00 
.equ R16_UH_RX_DMA 0x50000018 USB host receive buffer start address X 
.equ R16_UH_TX_DMA 0x5000001C USB host transmit buffer start 
address X 
.equ R16_UH_SETUP 0x50000036 USB host auxiliary setup register 0x00 
.equ R8_UH_EP_PID 0x50000038 USB host token setup register 0x00 
.equ R8_UH_RX_CTRL 0x5000003A USB host receive endpoint control 
register 0x00 
.equ R16_UH_TX_LEN 0x5000003C USB host transmit length register X 
.equ R8_UH_TX_CTRL 0x5000003E USB host transmit endpoint control 
register 0x00 



.equ R32_CAN1_CTLR 0x40006400 CAN1 master control register 0x00010002 
.equ R32_CAN1_STATR 0x40006404 CAN1 master status register 0x00000C02 
.equ R32_CAN1_TSTATR 0x40006408 CAN1 transmit status register 0x1C000000 
.equ R32_CAN1_RFIFO0 0x4000640C CAN1 receive FIFO0 control and status 
register 0x00000000 
.equ R32_CAN1_RFIFO1 0x40006410 CAN1 receive FIFO1 control and status 
register 0x00000000 
.equ R32_CAN1_INTENR 0x40006414 CAN1 interrupt enable register 0x00000000 
.equ R32_CAN1_ERRSR 0x40006418 CAN1 error status register 0x00000000 
.equ R32_CAN1_BTIMR 0x4000641C CAN1 bit timing register 0x01230000 


.equ R32_CAN1_TTCTLR 0x40006420 CAN1 time trigger control register 0x0000FFFF 
.equ R32_CAN1_TTCNT 0x40006424 CAN1 time trigger count value register 0x00000000 
Table 24-6 CAN2 registers 
Name Access address Description Reset value 
.equ R32_CAN2_CTLR 0x40006800 CAN2 master control register 0x00010002 
.equ R32_CAN2_STATR 0x40006804 CAN2 master status register 0x00000C02 
.equ R32_CAN2_TSTATR 0x40006808 CAN2 transmit status register 0x1C000000 
.equ R32_CAN2_RFIFO0 0x4000680C CAN2 receive FIFO0 control and status 
register 0x00000000 
.equ R32_CAN2_RFIFO1 0x40006810 CAN2 receive FIFO1 control and status 
register 0x00000000 
.equ R32_CAN2_INTENR 0x40006814 CAN2 interrupt enable register 0x00000000 
.equ R32_CAN2_ERRSR 0x40006818 CAN2 error status register 0x00000000 
.equ R32_CAN2_BTIMR 0x4000681C CAN2 bit timing register 0x01230000 
.equ R32_CAN2_TTCTLR 0x40006820 CAN2 time trigger control register 0x0000FFFF 
.equ R32_CAN2_TTCNT 0x40006824 CAN2 time trigger count value register 0x00000000 
Table 24-7 CAN1 mailbox registers 
Name Access address Description Reset 
value 
.equ R32_CAN1_TXMIR0 0x40006580 CAN1 Tx mailbox0 identifier register X 
.equ R32_CAN1_TXMDTR0 0x40006584 CAN1 Tx mailbox0 data length and timestamp 
register X 
.equ R32_CAN1_TXMDLR0 0x40006588 CAN1 Tx mailbox0 data low register X 
.equ R32_CAN1_TXMDHR0 0x4000658C CAN1 Tx mailbox0 data high register X 
.equ R32_CAN1_TXMIR1 0x40006590 CAN1 Tx mailbox1 identifier register X 
.equ R32_CAN1_TXMDTR1 0x40006594 CAN1 Tx mailbox1 data length and timestamp 
register X 
.equ R32_CAN1_TXMDLR1 0x40006598 CAN1 Tx mailbox1 data low register X 
.equ R32_CAN1_TXMDHR1 0x4000659C CAN1 Tx mailbox1 data high register X 
.equ R32_CAN1_TXMIR2 0x400065A0 CAN1 Tx mailbox2 identifier register X 
.equ R32_CAN1_TXMDTR2 0x400065A4 CAN1 Tx mailbox2 data length and timestamp 
register X 
.equ R32_CAN1_TXMDLR2 0x400065A8 CAN1 Tx mailbox2 data low register X 
.equ R32_CAN1_TXMDHR2 0x400065AC CAN1 Tx mailbox2 data high register X 
.equ R32_CAN1_RXMIR0 0x400065B0 CAN1 Rx FIFO0 mailbox identifier register X 
.equ R32_CAN1_RXMDTR0 0x400065B4 CAN1 Rx FIFO0 mailbox data length and 
timestamp register X 
.equ R32_CAN1_RXMDLR0 0x400065B8 CAN1 Rx FIFO0 mailbox data low register X 
.equ R32_CAN1_RXMDHR0 0x400065BC CAN1 Rx FIFO0 mailbox data high register X 
.equ R32_CAN1_RXMIR1 0x400065C0 CAN1 Rx FIFO1 mailbox identifier register X 
.equ R32_CAN1_RXMDTR1 0x400065C4 CAN1 Rx FIFO1 mailbox data length and 
timestamp register X 
.equ R32_CAN1_RXMDLR1 0x400065C8 CAN1 Rx FIFO1 mailbox data low register X 
.equ R32_CAN1_RXMDHR1 0x400065CC CAN1 Rx FIFO1 mailbox data high register X 
CH32FV2x_V3x Reference Manual  http://wch.cn 
V1.7 397     
Table 24-8 CAN2 Mailbox registers 
Name Access address Description Reset 
Value 
.equ R32_CAN2_TXMIR0 0x40006980 CAN2 Tx mailbox0 identifier register X 
.equ R32_CAN2_TXMDTR0 0x40006984 CAN2 Tx mailbox0 data length and timestamp 
register X 
.equ R32_CAN2_TXMDLR0 0x40006988 CAN2 Tx mailbox0 data low register X 
.equ R32_CAN2_TXMDHR0 0x4000698C CAN2 Tx mailbox0 data high register X 
.equ R32_CAN2_TXMIR1 0x40006990 CAN2 Tx mailbox1 identifier register X 
.equ R32_CAN2_TXMDTR1 0x40006994 CAN2 Tx mailbox1 data length and timestamp 
register X 
.equ R32_CAN2_TXMDLR1 0x40006998 CAN2 Tx mailbox1 data low register X 
.equ R32_CAN2_TXMDHR1 0x4000699C CAN2 Tx mailbox1 data high register X 
.equ R32_CAN2_TXMIR2 0x400069A0 CAN2 Tx mailbox2 identifier register X 
.equ R32_CAN2_TXMDTR2 0x400069A4 CAN2 Tx mailbox2 data length and timestamp 
register X 
.equ R32_CAN2_TXMDLR2 0x400069A8 CAN2 Tx mailbox2 data low register X 
.equ R32_CAN2_TXMDHR2 0x400069AC CAN2 Tx mailbox2 data high register X 
.equ R32_CAN2_RXMIR0 0x400069B0 CAN2 Rx FIFO0 mailbox identifier register X 
.equ R32_CAN2_RXMDTR0 0x400069B4 CAN2 Rx FIFO0 mailbox data length and 
timestamp register X 
.equ R32_CAN2_RXMDLR0 0x400069B8 CAN2 Rx FIFO0 mailbox data low register X 
.equ R32_CAN2_RXMDHR0 0x400069BC CAN2 Rx FIFO0 mailbox data high register X 
.equ R32_CAN2_RXMIR1 0x400069C0 CAN2 Rx FIFO1 mailbox identifier register X 
.equ R32_CAN2_RXMDTR1 0x400069C4 CAN2 Rx FIFO1 mailbox data length and 
timestamp register X 
.equ R32_CAN2_RXMDLR1 0x400069C8 CAN2 Rx FIFO1 mailbox data low register X 
.equ R32_CAN2_RXMDHR1 0x400069CC CAN2 Rx FIFO1 mailbox data high register X 
 
.equ R32_CAN1_FCTLR, 0x40006600  
.equ R32_CAN1_FMCFGR, 0x40006604  
.equ R32_CAN1_FSCFGR, 0x4000660C  
.equ R32_CAN1_FAFIFOR, 0x40006614 
.equ R32_CAN1_FWR, 0x4000661C  
.equ R32_CAN1_F0R1, 0x40006640  
.equ R32_CAN1_F0R2, 0x40006644  
.equ R32_CAN1_F1R1, 0x40006648  
.equ R32_CAN1_F1R2, 0x4000664C  
.equ R32_CAN1_F2R1, 0x40006650  
.equ R32_CAN1_F2R2, 0x40006654  
.equ R32_CAN1_F3R1, 0x40006658  
.equ R32_CAN1_F3R2, 0x4000665C  
.equ R32_CAN1_F4R1, 0x40006660  
     
.equ R32_CAN1_F4R2, 0x40006664  
.equ R32_CAN1_F5R1, 0x40006668  
.equ R32_CAN1_F5R2, 0x4000666C  
.equ R32_CAN1_F6R1, 0x40006670  
.equ R32_CAN1_F6R2, 0x40006674  
.equ R32_CAN1_F7R1, 0x40006678 
.equ R32_CAN1_F7R2, 0x4000667C  
.equ R32_CAN1_F8R1, 0x40006680  
.equ R32_CAN1_F8R2, 0x40006684  
.equ R32_CAN1_F9R1, 0x40006688  
.equ R32_CAN1_F9R2, 0x4000668C  
.equ R32_CAN1_F10R1, 0x40006690  
.equ R32_CAN1_F10R2, 0x40006694 
.equ R32_CAN1_F11R1, 0x40006698  
.equ R32_CAN1_F11R2, 0x4000669C  
.equ R32_CAN1_F12R1, 0x400066A0  
.equ R32_CAN1_F12R2, 0x400066A4  
.equ R32_CAN1_F13R1, 0x400066A8  
.equ R32_CAN1_F13R2, 0x400066AC  
.equ R32_CAN1_F14R1, 0x400066B0  
.equ R32_CAN1_F14R2, 0x400066B4  
.equ R32_CAN1_F15R1, 0x400066B8  
.equ R32_CAN1_F15R2, 0x400066BC  
.equ R32_CAN1_F16R1, 0x400066C0  
.equ R32_CAN1_F16R2, 0x400066C4  
.equ R32_CAN1_F17R1, 0x400066C8  
.equ R32_CAN1_F17R2, 0x400066CC  
.equ R32_CAN1_F18R1, 0x400066D0  
.equ R32_CAN1_F18R2, 0x400066D4  
.equ R32_CAN1_F19R1, 0x400066D8  
.equ R32_CAN1_F19R2, 0x400066DC  
.equ R32_CAN1_F20R1, 0x400066E0  
.equ R32_CAN1_F20R2, 0x400066E4  
.equ R32_CAN1_F21R1, 0x400066E8  
.equ R32_CAN1_F21R2, 0x400066EC  
.equ R32_CAN1_F22R1, 0x400066F0  
.equ R32_CAN1_F22R2, 0x400066F4  
.equ R32_CAN1_F23R1, 0x400066F8  
.equ R32_CAN1_F23R2, 0x400066FC  
.equ R32_CAN1_F24R1, 0x40006700  
.equ R32_CAN1_F24R2, 0x40006704  
.equ R32_CAN1_F25R1, 0x40006708  
.equ R32_CAN1_F25R2, 0x4000670C  
.equ R32_CAN1_F26R1, 0x40006710  
.equ R32_CAN1_F26R2, 0x40006714  
     
.equ R32_CAN1_F27R1, 0x40006718  
.equ R32_CAN1_F27R2, 0x4000671C  
 
.equ R32_CAN2_FCTLR, 0x40006A00  
.equ R32_CAN2_FMCFGR, 0x40006A04  
.equ R32_CAN2_FSCFGR, 0x40006A0C  
.equ R32_CAN2_FAFIFOR, 0x40006A14  
.equ R32_CAN2_FWR ,0x40006A1C  
.equ R32_CAN2_F0R1, 0x40006A40 
.equ R32_CAN2_F0R2, 0x40006A44 
.equ R32_CAN2_F1R1, 0x40006A48 
.equ R32_CAN2_F1R2, 0x40006A4C 
.equ R32_CAN2_F2R1, 0x40006A50 
.equ R32_CAN2_F2R2, 0x40006A54 
.equ R32_CAN2_F3R1, 0x40006A58 
.equ R32_CAN2_F3R2, 0x40006A5C 
.equ R32_CAN2_F4R1, 0x40006A60 
.equ R32_CAN2_F4R2, 0x40006A64 
.equ R32_CAN2_F5R1, 0x40006A68 
.equ R32_CAN2_F5R2, 0x40006A6C 
.equ R32_CAN2_F6R1, 0x40006A70 
.equ R32_CAN2_F6R2, 0x40006A74 
.equ R32_CAN2_F7R1, 0x40006A78 
.equ R32_CAN2_F7R2, 0x40006A7C 
.equ R32_CAN2_F8R1, 0x40006A80 
.equ R32_CAN2_F8R2, 0x40006A84 
.equ R32_CAN2_F9R1, 0x40006A88 
.equ R32_CAN2_F9R2, 0x40006A8C 
.equ R32_CAN2_F10R1, 0x40006A90  
.equ R32_CAN2_F10R2, 0x40006A94  
.equ R32_CAN2_F11R1, 0x40006A98  
.equ R32_CAN2_F11R2, 0x40006A9C  
.equ R32_CAN2_F12R1, 0x40006AA0  
.equ R32_CAN2_F12R2, 0x40006AA4  
.equ R32_CAN2_F13R1, 0x40006AA8  
.equ R32_CAN2_F13R2, 0x40006AAC  
.equ R32_CAN2_F14R1, 0x40006AB0  
.equ R32_CAN2_F14R2, 0x40006AB4  
.equ R32_CAN2_F15R1, 0x40006AB8  
.equ R32_CAN2_F15R2, 0x40006ABC  
.equ R32_CAN2_F16R1, 0x40006AC0  
.equ R32_CAN2_F16R2, 0x40006AC4  
.equ R32_CAN2_F17R1, 0x40006AC8  
     
.equ R32_CAN2_F17R2, 0x40006ACC  
.equ R32_CAN2_F18R1, 0x40006AD0  
.equ R32_CAN2_F18R2, 0x40006AD4  
.equ R32_CAN2_F19R1, 0x40006AD8  
.equ R32_CAN2_F19R2, 0x40006ADC  
.equ R32_CAN2_F20R1, 0x40006AE0  
.equ R32_CAN2_F20R2, 0x40006AE4  
.equ R32_CAN2_F21R1, 0x40006AE8  
.equ R32_CAN2_F21R2, 0x40006AEC  
.equ R32_CAN2_F22R1, 0x40006AF0  
.equ R32_CAN2_F22R2, 0x40006AF4  
.equ R32_CAN2_F23R1, 0x40006AF8  
.equ R32_CAN2_F23R2, 0x40006AFC  
.equ R32_CAN2_F24R1, 0x40006B00  
.equ R32_CAN2_F24R2, 0x40006B04  
.equ R32_CAN2_F25R1, 0x40006B08  
.equ R32_CAN2_F25R2, 0x40006B0C  
.equ R32_CAN2_F26R1, 0x40006B10  
.equ R32_CAN2_F26R2, 0x40006B14  
.equ R32_CAN2_F27R1, 0x40006B18  
.equ R32_CAN2_F27R2, 0x40006B1C 




.equ R8_DVP_CR0 ,0x50050000 
.equ R8_DVP_CR1,0x50050001 
.equ R8_DVP_IER,0x50050002 
.equ R16_DVP_ROW_NUM ,0x50050004 
.equ R16_DVP_COL_NUM ,0x50050006 
.equ R32_DVP_DMA_BUF0, 0x50050008  
.equ R32_DVP_DMA_BUF1, 0x5005000C  
.equ R8_DVP_IFR, 0x50050010  
.equ R8_DVP_STATUS, 0x50050011 
.equ R16_DVP_ROW_CNT, 0x50050014 
.equ R16_DVP_HOFFCNT, 0x50050018 
.equ R16_DVP_VST, 0x5005001A  
.equ R16_DVP_CAPCNT, 0x5005001C  
.equ R16_DVP_VLINE, 0x5005001E  
.equ R32_DVP_DR, 0x50050020 


.equ R32_FSMC_BCR1, 0xA0000000 
.equ R32_FSMC_BTR1, 0xA0000004 
.equ R32_FSMC_PCR2, 0xA0000060  
.equ R32_FSMC_SR2, 0xA0000064  
.equ R32_FSMC_PMEM2, 0xA0000068 
.equ R32_FSMC_PATT2, 0xA000006C 
.equ R32_FSMC_ECCR2, 0xA0000074 
.equ R32_FSMC_BWTR1, 0xA0000104 


.equ R32_ETH_MACCR ,0x40028000 
.equ R32_ETH_MACFFR,0x40028004 
.equ R32_ETH_MACHTHR ,0x40028008 
.equ R32_ETH_MACHTLR ,0x4002800C 
.equ R32_ETH_MACMIIAR,0x40028010 
.equ R32_ETH_MACMIIDR,0x40028014 
.equ R32_ETH_MACFCR,0x40028018 
.equ R32_ETH_MACVLAN ,0x4002801C 
.equ R32_ETH_MACRWUFFR, 0x40028028 
.equ R32_ETH_MACPMTCSR, 0x4002802C 
  
.equ R32_ETH_MACSR, 0x40028038  
.equ R32_ETH_MACIMR, 0x4002803C  
.equ R32_ETH_MACA0HR, 0x40028040  
.equ R32_ETH_MACA0LR, 0x40028044  
.equ R32_ETH_MACA1HR, 0x40028048  
.equ R32_ETH_MACA1LR, 0x4002804C  
.equ R32_ETH_MACA2HR, 0x40028050  
.equ R32_ETH_MACA2LR, 0x40028054  
.equ R32_ETH_MACA3HR, 0x40028058  
.equ R32_ETH_MACA3LR, 0x4002805C  
 

.equ R32_ETH_MMCCR, 0x40028100  
.equ R32_ETH_MMCRIR, 0x40028104 
.equ R32_ETH_MMCTIR, 0x40028108 
.equ R32_ETH_MMCRIMR, 0x4002810C
.equ R32_ETH_MMCTIMR, 0x40028110 
.equ R32_ETH_MMCTGFSCCR, 0x4002814C 
.equ R32_ETH_MMCTGFMSCCR, 0x40028150 
.equ R32_ETH_MMCTGFCR, 0x40028168 
.equ R32_ETH_MMCRFCECR, 0x40028194 
.equ R32_ETH_MMCRFAECR, 0x40028198 
.equ R32_ETH_MMCRGUFCR, 0x400281C4 
 
 
.equ R32_ETH_PTPTSCR, 0x40028700  
.equ R32_ETH_PTPSSIR, 0x40028704  
.equ R32_ETH_PTPTSHR, 0x40028708  
.equ R32_ETH_PTPTSLR, 0x4002870C  
.equ R32_ETH_PTPTSHUR, 0x40028710
.equ R32_ETH_PTPTSLUR, 0x40028714 
.equ R32_ETH_PTPTSAR, 0x40028718  
.equ R32_ETH_PTPTTHR, 0x4002871C  
.equ R32_ETH_PTPTTLR, 0x40028720  
.equ R32_ETH_DMABMR, 0x40029000 
.equ R32_ETH_DMATPDR, 0x40029004  
.equ R32_ETH_DMARPTR, 0x40029008  
.equ R32_ETH_DMARDLAR, 0x4002900C 
.equ R32_ETH_DMATDLAR, 0x40029010 
.equ R32_ETH_DMASR, 0x40029014  
.equ R32_ETH_DMAOMR, 0x40029018 
.equ R32_ETH_DMAIER, 0x4002901C 
.equ R32_ETH_DMAMFBOCR, 0x40029020  
.equ R32_ETH_DMACHTDR, 0x40029048  
.equ R32_ETH_DMACHRDR, 0x4002904C  
.equ R32_ETH_DMACHTBAR, 0x40029050  
.equ R32_ETH_DMACHRBAR, 0x40029054 




.equ R8_ETH_EIE, 0x40028003 
.equ R8_ETH_EIR, 0x40028004 
.equ R8_ETH_ESTAT, 0x40028005  
.equ R8_ETH_ECON2, 0x40028006 
.equ R8_ETH_ECON1 ,0x40028007  
.equ R32_ETH_TX ,0x40028008  
.equ R16_ETH_ETXST 0x40028008 
.equ R16_ETH_ETXLN, 0x4002800A  
.equ R32_ETH_RX, 0x4002800C  
.equ R16_ETH_ERXST, 0x4002800C 
.equ R16_ETH_ERXLN ,0x4002800E  
.equ R32_ETH_HTL ,0x40028010  
.equ R32_ETH_HTH ,0x40028014  
.equ R32_ETH_MACON ,0x40028018 
.equ R8_ETH_ERXFCON ,0x40028018 
.equ R8_ETH_MACON1, 0x40028019  
.equ R8_ETH_MACON2, 0x4002801A  
.equ R8_ETH_MABBIPG, 0x4002801B  
.equ R32_ETH_TIM ,0x4002801C 
.equ R16_ETH_EPAUS ,0x4002801C 
.equ R16_ETH_MAMXFL, 0x4002801E 
.equ R16_ETH_MIRD, 0x40028020 
.equ R32_ETH_MIWR, 0x40028024  
.equ R8_ETH_MIREGADR, 0x40028024  
.equ R8_ETH_MISTAT, 0x40028025  
.equ R16_ETH_MIWR, 0x40028026  
.equ R32_ETH_MAADRL, 0x40028028 
     
.equ R16_ETH_MAADRH, 0x4002802C  




.equ R32_SDIO_POWER ,0x40018000 
 
.equ R32_SDIO_CLKCR ,0x40018004 

.equ R32_SDIO_ARG ,0x40018008 
.equ R32_SDIO_CMD, 0x4001800C  
.equ R32_SDIO_RESPCMD, 0x40018010 
.equ R128_SDIO_RESPX, 0x40018014  
.equ R32_SDIO_DTIMER, 0x40018024  
.equ R32_SDIO_DLEN, 0x40018028  
.equ R32_SDIO_DCTLR, 0x4001802C  
.equ R32_SDIO_DCOUNT, 0x40018030  
.equ R32_SDIO_STA, 0x40018034  
.equ R32_SDIO_ICR, 0x40018038 
.equ R32_SDIO_MASK, 0x4001803C  
.equ R32_SDIO_ FIFOCNT, 0x40018048 
.equ R32_SDIO_FIFO, 0x40018080  

.equ R32_RNG_CR, 0x40023C00 
.equ R32_RNG_SR ,0x40023C04  
.equ R32_RNG_DR ,0x40023C08  
.equ R32_OPA_CTLR, 0x40023804
.equ R16_ESIG_FLACAP, 0x1FFFF7E0  
.equ R32_ESIG_UNIID1, 0x1FFFF7E8 
.equ R32_ESIG_UNIID2, 0x1FFFF7EC  
.equ R32_ESIG_UNIID3, 0x1FFFF7F0  
.equ R32_FLASH_KEYR ,0x40022004 
.equ R32_FLASH_OBKEYR ,0x40022008 
.equ R32_FLASH_STATR 0x4002200C  
.equ R32_FLASH_CTLR 0x40022010 
.equ R32_FLASH_ADDR 0x40022014  
.equ R32_FLASH_OBR 0x4002201C  
.equ R32_FLASH_WPR 0x40022020  
.equ R32_FLASH_MODEKEYR 0x40022024 
.equ R32_EXTEN_CTR ,0x40023800 





 