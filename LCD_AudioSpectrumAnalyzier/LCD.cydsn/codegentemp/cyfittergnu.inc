.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* LCD_LCDPort */
.set LCD_LCDPort__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set LCD_LCDPort__0__MASK, 0x01
.set LCD_LCDPort__0__PC, CYREG_PRT12_PC0
.set LCD_LCDPort__0__PORT, 12
.set LCD_LCDPort__0__SHIFT, 0
.set LCD_LCDPort__1__INTTYPE, CYREG_PICU12_INTTYPE1
.set LCD_LCDPort__1__MASK, 0x02
.set LCD_LCDPort__1__PC, CYREG_PRT12_PC1
.set LCD_LCDPort__1__PORT, 12
.set LCD_LCDPort__1__SHIFT, 1
.set LCD_LCDPort__2__INTTYPE, CYREG_PICU12_INTTYPE2
.set LCD_LCDPort__2__MASK, 0x04
.set LCD_LCDPort__2__PC, CYREG_PRT12_PC2
.set LCD_LCDPort__2__PORT, 12
.set LCD_LCDPort__2__SHIFT, 2
.set LCD_LCDPort__3__INTTYPE, CYREG_PICU12_INTTYPE3
.set LCD_LCDPort__3__MASK, 0x08
.set LCD_LCDPort__3__PC, CYREG_PRT12_PC3
.set LCD_LCDPort__3__PORT, 12
.set LCD_LCDPort__3__SHIFT, 3
.set LCD_LCDPort__4__INTTYPE, CYREG_PICU12_INTTYPE4
.set LCD_LCDPort__4__MASK, 0x10
.set LCD_LCDPort__4__PC, CYREG_PRT12_PC4
.set LCD_LCDPort__4__PORT, 12
.set LCD_LCDPort__4__SHIFT, 4
.set LCD_LCDPort__5__INTTYPE, CYREG_PICU12_INTTYPE5
.set LCD_LCDPort__5__MASK, 0x20
.set LCD_LCDPort__5__PC, CYREG_PRT12_PC5
.set LCD_LCDPort__5__PORT, 12
.set LCD_LCDPort__5__SHIFT, 5
.set LCD_LCDPort__6__INTTYPE, CYREG_PICU12_INTTYPE6
.set LCD_LCDPort__6__MASK, 0x40
.set LCD_LCDPort__6__PC, CYREG_PRT12_PC6
.set LCD_LCDPort__6__PORT, 12
.set LCD_LCDPort__6__SHIFT, 6
.set LCD_LCDPort__AG, CYREG_PRT12_AG
.set LCD_LCDPort__BIE, CYREG_PRT12_BIE
.set LCD_LCDPort__BIT_MASK, CYREG_PRT12_BIT_MASK
.set LCD_LCDPort__BYP, CYREG_PRT12_BYP
.set LCD_LCDPort__DM0, CYREG_PRT12_DM0
.set LCD_LCDPort__DM1, CYREG_PRT12_DM1
.set LCD_LCDPort__DM2, CYREG_PRT12_DM2
.set LCD_LCDPort__DR, CYREG_PRT12_DR
.set LCD_LCDPort__INP_DIS, CYREG_PRT12_INP_DIS
.set LCD_LCDPort__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set LCD_LCDPort__MASK, 0x7F
.set LCD_LCDPort__PORT, 12
.set LCD_LCDPort__PRT, CYREG_PRT12_PRT
.set LCD_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set LCD_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set LCD_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set LCD_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set LCD_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set LCD_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set LCD_LCDPort__PS, CYREG_PRT12_PS
.set LCD_LCDPort__SHIFT, 0
.set LCD_LCDPort__SIO_CFG, CYREG_PRT12_SIO_CFG
.set LCD_LCDPort__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set LCD_LCDPort__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set LCD_LCDPort__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set LCD_LCDPort__SLW, CYREG_PRT12_SLW

/* MIC */
.set MIC__0__INTTYPE, CYREG_PICU1_INTTYPE2
.set MIC__0__MASK, 0x04
.set MIC__0__PC, CYREG_PRT1_PC2
.set MIC__0__PORT, 1
.set MIC__0__SHIFT, 2
.set MIC__AG, CYREG_PRT1_AG
.set MIC__AMUX, CYREG_PRT1_AMUX
.set MIC__BIE, CYREG_PRT1_BIE
.set MIC__BIT_MASK, CYREG_PRT1_BIT_MASK
.set MIC__BYP, CYREG_PRT1_BYP
.set MIC__CTL, CYREG_PRT1_CTL
.set MIC__DM0, CYREG_PRT1_DM0
.set MIC__DM1, CYREG_PRT1_DM1
.set MIC__DM2, CYREG_PRT1_DM2
.set MIC__DR, CYREG_PRT1_DR
.set MIC__INP_DIS, CYREG_PRT1_INP_DIS
.set MIC__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU1_BASE
.set MIC__LCD_COM_SEG, CYREG_PRT1_LCD_COM_SEG
.set MIC__LCD_EN, CYREG_PRT1_LCD_EN
.set MIC__MASK, 0x04
.set MIC__PORT, 1
.set MIC__PRT, CYREG_PRT1_PRT
.set MIC__PRTDSI__CAPS_SEL, CYREG_PRT1_CAPS_SEL
.set MIC__PRTDSI__DBL_SYNC_IN, CYREG_PRT1_DBL_SYNC_IN
.set MIC__PRTDSI__OE_SEL0, CYREG_PRT1_OE_SEL0
.set MIC__PRTDSI__OE_SEL1, CYREG_PRT1_OE_SEL1
.set MIC__PRTDSI__OUT_SEL0, CYREG_PRT1_OUT_SEL0
.set MIC__PRTDSI__OUT_SEL1, CYREG_PRT1_OUT_SEL1
.set MIC__PRTDSI__SYNC_OUT, CYREG_PRT1_SYNC_OUT
.set MIC__PS, CYREG_PRT1_PS
.set MIC__SHIFT, 2
.set MIC__SLW, CYREG_PRT1_SLW

/* PWM_1_PWMUDB */
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB05_06_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB05_06_MSK
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__7__POS, 7
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_REG, CYREG_B1_UDB05_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_REG, CYREG_B1_UDB05_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK, 0x80
.set PWM_1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk1_ctrlreg__PERIOD_REG, CYREG_B1_UDB05_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__0__MASK, 0x01
.set PWM_1_PWMUDB_genblk8_stsreg__0__POS, 0
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG, CYREG_B1_UDB05_06_ST
.set PWM_1_PWMUDB_genblk8_stsreg__2__MASK, 0x04
.set PWM_1_PWMUDB_genblk8_stsreg__2__POS, 2
.set PWM_1_PWMUDB_genblk8_stsreg__3__MASK, 0x08
.set PWM_1_PWMUDB_genblk8_stsreg__3__POS, 3
.set PWM_1_PWMUDB_genblk8_stsreg__MASK, 0x0D
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_REG, CYREG_B1_UDB05_MSK
.set PWM_1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG, CYREG_B1_UDB05_ST_CTL
.set PWM_1_PWMUDB_genblk8_stsreg__STATUS_REG, CYREG_B1_UDB05_ST
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG, CYREG_B1_UDB04_05_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG, CYREG_B1_UDB04_05_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG, CYREG_B1_UDB04_05_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG, CYREG_B1_UDB04_05_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB04_05_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG, CYREG_B1_UDB04_05_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG, CYREG_B1_UDB04_05_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_A1_REG, CYREG_B1_UDB04_A0_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A0_REG, CYREG_B1_UDB04_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__A1_REG, CYREG_B1_UDB04_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_D1_REG, CYREG_B1_UDB04_D0_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D0_REG, CYREG_B1_UDB04_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__D1_REG, CYREG_B1_UDB04_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG, CYREG_B1_UDB04_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_F1_REG, CYREG_B1_UDB04_F0_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F0_REG, CYREG_B1_UDB04_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u0__F1_REG, CYREG_B1_UDB04_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG, CYREG_B1_UDB05_06_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG, CYREG_B1_UDB05_06_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG, CYREG_B1_UDB05_06_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG, CYREG_B1_UDB05_06_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB05_06_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG, CYREG_B1_UDB05_06_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG, CYREG_B1_UDB05_06_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_A1_REG, CYREG_B1_UDB05_A0_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A0_REG, CYREG_B1_UDB05_A0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__A1_REG, CYREG_B1_UDB05_A1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_D1_REG, CYREG_B1_UDB05_D0_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D0_REG, CYREG_B1_UDB05_D0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__D1_REG, CYREG_B1_UDB05_D1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG, CYREG_B1_UDB05_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_F1_REG, CYREG_B1_UDB05_F0_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F0_REG, CYREG_B1_UDB05_F0
.set PWM_1_PWMUDB_sP16_pwmdp_u1__F1_REG, CYREG_B1_UDB05_F1
.set PWM_1_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL
.set PWM_1_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG, CYREG_B1_UDB05_MSK_ACTL

/* ADC_ISR */
.set ADC_ISR__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_ISR__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_ISR__INTC_MASK, 0x01
.set ADC_ISR__INTC_NUMBER, 0
.set ADC_ISR__INTC_PRIOR_NUM, 7
.set ADC_ISR__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set ADC_ISR__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_ISR__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_SAR_ADC_SAR */
.set ADC_SAR_ADC_SAR__CLK, CYREG_SAR0_CLK
.set ADC_SAR_ADC_SAR__CSR0, CYREG_SAR0_CSR0
.set ADC_SAR_ADC_SAR__CSR1, CYREG_SAR0_CSR1
.set ADC_SAR_ADC_SAR__CSR2, CYREG_SAR0_CSR2
.set ADC_SAR_ADC_SAR__CSR3, CYREG_SAR0_CSR3
.set ADC_SAR_ADC_SAR__CSR4, CYREG_SAR0_CSR4
.set ADC_SAR_ADC_SAR__CSR5, CYREG_SAR0_CSR5
.set ADC_SAR_ADC_SAR__CSR6, CYREG_SAR0_CSR6
.set ADC_SAR_ADC_SAR__PM_ACT_CFG, CYREG_PM_ACT_CFG11
.set ADC_SAR_ADC_SAR__PM_ACT_MSK, 0x01
.set ADC_SAR_ADC_SAR__PM_STBY_CFG, CYREG_PM_STBY_CFG11
.set ADC_SAR_ADC_SAR__PM_STBY_MSK, 0x01
.set ADC_SAR_ADC_SAR__SW0, CYREG_SAR0_SW0
.set ADC_SAR_ADC_SAR__SW2, CYREG_SAR0_SW2
.set ADC_SAR_ADC_SAR__SW3, CYREG_SAR0_SW3
.set ADC_SAR_ADC_SAR__SW4, CYREG_SAR0_SW4
.set ADC_SAR_ADC_SAR__SW6, CYREG_SAR0_SW6
.set ADC_SAR_ADC_SAR__TR0, CYREG_SAR0_TR0
.set ADC_SAR_ADC_SAR__WRK0, CYREG_SAR0_WRK0
.set ADC_SAR_ADC_SAR__WRK1, CYREG_SAR0_WRK1

/* ADC_SAR_Bypass */
.set ADC_SAR_Bypass__0__INTTYPE, CYREG_PICU0_INTTYPE4
.set ADC_SAR_Bypass__0__MASK, 0x10
.set ADC_SAR_Bypass__0__PC, CYREG_PRT0_PC4
.set ADC_SAR_Bypass__0__PORT, 0
.set ADC_SAR_Bypass__0__SHIFT, 4
.set ADC_SAR_Bypass__AG, CYREG_PRT0_AG
.set ADC_SAR_Bypass__AMUX, CYREG_PRT0_AMUX
.set ADC_SAR_Bypass__BIE, CYREG_PRT0_BIE
.set ADC_SAR_Bypass__BIT_MASK, CYREG_PRT0_BIT_MASK
.set ADC_SAR_Bypass__BYP, CYREG_PRT0_BYP
.set ADC_SAR_Bypass__CTL, CYREG_PRT0_CTL
.set ADC_SAR_Bypass__DM0, CYREG_PRT0_DM0
.set ADC_SAR_Bypass__DM1, CYREG_PRT0_DM1
.set ADC_SAR_Bypass__DM2, CYREG_PRT0_DM2
.set ADC_SAR_Bypass__DR, CYREG_PRT0_DR
.set ADC_SAR_Bypass__INP_DIS, CYREG_PRT0_INP_DIS
.set ADC_SAR_Bypass__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set ADC_SAR_Bypass__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set ADC_SAR_Bypass__LCD_EN, CYREG_PRT0_LCD_EN
.set ADC_SAR_Bypass__MASK, 0x10
.set ADC_SAR_Bypass__PORT, 0
.set ADC_SAR_Bypass__PRT, CYREG_PRT0_PRT
.set ADC_SAR_Bypass__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set ADC_SAR_Bypass__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set ADC_SAR_Bypass__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set ADC_SAR_Bypass__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set ADC_SAR_Bypass__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set ADC_SAR_Bypass__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set ADC_SAR_Bypass__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set ADC_SAR_Bypass__PS, CYREG_PRT0_PS
.set ADC_SAR_Bypass__SHIFT, 4
.set ADC_SAR_Bypass__SLW, CYREG_PRT0_SLW

/* ADC_SAR_IRQ */
.set ADC_SAR_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_SAR_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_SAR_IRQ__INTC_MASK, 0x02
.set ADC_SAR_IRQ__INTC_NUMBER, 1
.set ADC_SAR_IRQ__INTC_PRIOR_NUM, 7
.set ADC_SAR_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_1
.set ADC_SAR_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_SAR_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x00
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x01
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x01

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set Clock_2__CFG3_PHASE_DLY_MASK, 0x0F
.set Clock_2__INDEX, 0x00
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set Clock_2__PM_ACT_MSK, 0x01
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set Clock_2__PM_STBY_MSK, 0x01

/* PWM_Out */
.set PWM_Out__0__INTTYPE, CYREG_PICU3_INTTYPE0
.set PWM_Out__0__MASK, 0x01
.set PWM_Out__0__PC, CYREG_PRT3_PC0
.set PWM_Out__0__PORT, 3
.set PWM_Out__0__SHIFT, 0
.set PWM_Out__AG, CYREG_PRT3_AG
.set PWM_Out__AMUX, CYREG_PRT3_AMUX
.set PWM_Out__BIE, CYREG_PRT3_BIE
.set PWM_Out__BIT_MASK, CYREG_PRT3_BIT_MASK
.set PWM_Out__BYP, CYREG_PRT3_BYP
.set PWM_Out__CTL, CYREG_PRT3_CTL
.set PWM_Out__DM0, CYREG_PRT3_DM0
.set PWM_Out__DM1, CYREG_PRT3_DM1
.set PWM_Out__DM2, CYREG_PRT3_DM2
.set PWM_Out__DR, CYREG_PRT3_DR
.set PWM_Out__INP_DIS, CYREG_PRT3_INP_DIS
.set PWM_Out__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU3_BASE
.set PWM_Out__LCD_COM_SEG, CYREG_PRT3_LCD_COM_SEG
.set PWM_Out__LCD_EN, CYREG_PRT3_LCD_EN
.set PWM_Out__MASK, 0x01
.set PWM_Out__PORT, 3
.set PWM_Out__PRT, CYREG_PRT3_PRT
.set PWM_Out__PRTDSI__CAPS_SEL, CYREG_PRT3_CAPS_SEL
.set PWM_Out__PRTDSI__DBL_SYNC_IN, CYREG_PRT3_DBL_SYNC_IN
.set PWM_Out__PRTDSI__OE_SEL0, CYREG_PRT3_OE_SEL0
.set PWM_Out__PRTDSI__OE_SEL1, CYREG_PRT3_OE_SEL1
.set PWM_Out__PRTDSI__OUT_SEL0, CYREG_PRT3_OUT_SEL0
.set PWM_Out__PRTDSI__OUT_SEL1, CYREG_PRT3_OUT_SEL1
.set PWM_Out__PRTDSI__SYNC_OUT, CYREG_PRT3_SYNC_OUT
.set PWM_Out__PS, CYREG_PRT3_PS
.set PWM_Out__SHIFT, 0
.set PWM_Out__SLW, CYREG_PRT3_SLW

/* OPAMP_BUS_ABuf */
.set OPAMP_BUS_ABuf__CR, CYREG_OPAMP3_CR
.set OPAMP_BUS_ABuf__MX, CYREG_OPAMP3_MX
.set OPAMP_BUS_ABuf__NPUMP_OPAMP_TR0, CYREG_NPUMP_OPAMP_TR0
.set OPAMP_BUS_ABuf__PM_ACT_CFG, CYREG_PM_ACT_CFG4
.set OPAMP_BUS_ABuf__PM_ACT_MSK, 0x08
.set OPAMP_BUS_ABuf__PM_STBY_CFG, CYREG_PM_STBY_CFG4
.set OPAMP_BUS_ABuf__PM_STBY_MSK, 0x08
.set OPAMP_BUS_ABuf__RSVD, CYREG_OPAMP3_RSVD
.set OPAMP_BUS_ABuf__SW, CYREG_OPAMP3_SW
.set OPAMP_BUS_ABuf__TR0, CYREG_OPAMP3_TR0
.set OPAMP_BUS_ABuf__TR1, CYREG_OPAMP3_TR1

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 12
.set CYDEV_CHIP_DIE_PSOC5LP, 19
.set CYDEV_CHIP_DIE_PSOC5TM, 20
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 4
.set CYDEV_CHIP_FAMILY_FM3, 5
.set CYDEV_CHIP_FAMILY_FM4, 6
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 12
.set CYDEV_CHIP_MEMBER_4C, 18
.set CYDEV_CHIP_MEMBER_4D, 8
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 13
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 11
.set CYDEV_CHIP_MEMBER_4I, 17
.set CYDEV_CHIP_MEMBER_4J, 9
.set CYDEV_CHIP_MEMBER_4K, 10
.set CYDEV_CHIP_MEMBER_4L, 16
.set CYDEV_CHIP_MEMBER_4M, 15
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4P, 14
.set CYDEV_CHIP_MEMBER_4Q, 7
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 20
.set CYDEV_CHIP_MEMBER_5B, 19
.set CYDEV_CHIP_MEMBER_FM3, 24
.set CYDEV_CHIP_MEMBER_FM4, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 21
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 22
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 23
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000003
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set Dedicated_Output__INTTYPE, CYREG_PICU3_INTTYPE7
.set Dedicated_Output__MASK, 0x80
.set Dedicated_Output__PC, CYREG_PRT3_PC7
.set Dedicated_Output__PORT, 3
.set Dedicated_Output__SHIFT, 7
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
