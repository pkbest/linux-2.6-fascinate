#ifndef __GPIO_ARIES_H_
#define __GPIO_ARIES_H_

//#include <mach/gpio.h>

//victory.boot

#define GPIO_WLAN_nRST_AF	1
#define GPIO_WLAN_HOST_WAKE_AF		0xF
#define GPIO_WLAN_WAKE_AF		1
#define GPIO_PS_ON			S5PV210_GPJ1(4)
#define GPIO_PS_VOUT			S5PV210_GPH0(2)
#define GPIO_PS_VOUT_AF			0xFF
#define GPIO_LEVEL_LOW      	0 
#define GPIO_LEVEL_HIGH     	1
#define GPIO_LEVEL_NONE     	2
#define GPIO_INPUT				0
#define GPIO_OUTPUT				1

#define GPIO_BT_UART_RXD		S5PV210_GPA0(0)
#define GPIO_BT_UART_RXD_AF		2

#define GPIO_BT_UART_TXD		S5PV210_GPA0(1)
#define GPIO_BT_UART_TXD_AF		2

#define GPIO_BT_UART_CTS		S5PV210_GPA0(2)
#define GPIO_BT_UART_CTS_AF		2

#define GPIO_BT_UART_RTS		S5PV210_GPA0(3)
#define GPIO_BT_UART_RTS_AF		2

#define GPIO_ATSC_UART_RXD		S5PV210_GPA0(4)
#define GPIO_ATSC_UART_RXD_AF	2

#define GPIO_ATSC_UART_TXD		S5PV210_GPA0(5)
#define GPIO_ATSC_UART_TXD_AF	2

#define GPIO_GPA06		        S5PV210_GPA0(6)

#define GPIO_GPA07	        	S5PV210_GPA0(7)

#define GPIO_AP_RXD				S5PV210_GPA1(0)
#define GPIO_AP_RXD_AF			2

#define GPIO_AP_TXD				S5PV210_GPA1(1)
#define GPIO_AP_TXD_AF			2

#define GPIO_GPA12	    		S5PV210_GPA1(2)

#define GPIO_GPA13			    S5PV210_GPA1(3)

#define GPIO_OJ_SPI_CLK         S5PV210_GPIO_END

#define GPIO_OJ_CS      		S5PV210_GPIO_END //skylove7.lim change for victory
#define GPIO_EAR_MIC_BIAS               S5PV210_GPB(1)//skylove7.lim change for victory

#define GPIO_OJ_SPI_MISO		S5PV210_GPIO_END

#define GPIO_OJ_SPI_MOSI		S5PV210_GPB(3)

#define GPIO_ATSC_SPI_CLK		S5PV210_GPB(4)

#define GPIO_ATSC_CS		    S5PV210_GPB(5)

////SecFeature.Victory #define GPIO_ATSC_SPI_MISO		S5PC11X_GPB(6)
#define GPIO_BUCK_1_EN_A		S5PV210_GPB(6)//SecFeature.Victory
#define GPIO_BUCK_1_EN_A_AF		1

#define GPIO_ATSC_SPI_MOSI		S5PV210_GPB(7)

#define GPIO_HPD        		S5PV210_GPC0(0)
#define GPIO_HPD_AF       		1

#define GPIO_REC_PCM_CLK_AF		3

#define GPIO_MHL_INT			S5PV210_GPC0(1)
#define GPIO_MHL_INT_AF			0
#define GPIO_nINT_ONEDRAM_AP_AF		0xF
#if 1//CONFIG_ARIES_VER_B1... pfe
#define GPIO_WIMAX_PM_SDA			S5PV210_GPC0(2)
#define GPIO_WIMAX_PM_SDA_AF			2
#else
#define GPIO_MHL_RST			S5PV210_GPC0(2)
#define GPIO_MHL_RST_AF			1
#endif

//#define GPIO_GPC03			S5PV210_GPC0(3)
#define GPIO_WIMAX_I2C_CON		S5PV210_GPC0(3)	// Yongha for Victory WiMAX 20100208

#define GPIO_WIMAX_PM_SCL			S5PV210_GPC0(4)
#define GPIO_WIMAX_PM_SCL_AF			2

#define GPIO_GPC10				S5PV210_GPC1(0)
#define GPIO_GPC11				S5PV210_GPC1(1)
#define GPIO_GPC12				S5PV210_GPC1(2)
#define GPIO_GPC13				S5PV210_GPC1(3)
#define GPIO_GPC14				S5PV210_GPC1(4)


// MIC Configuratin
#define GPIO_MICBIAS_EN                   S5PV210_GPG3(3)


#define GPIO_MONOHEAD_DET		S5PV210_GPD0(0)
#define GPIO_MONOHEAD_DET_AF	0

#define GPIO_MSENSE_RST         S5PV210_GPD0(1)
#define GPIO_MSENSE_RST_AF      1

#define GPIO_VIBTONE_PWM		S5PV210_GPD0(2)
#define GPIO_VIBTONE_PWM_AF		1

#define GPIO_MSENSE_IRQ			S5PV210_GPD0(3)
#define GPIO_MSENSE_IRQ_AF		0

#define GPIO_CAM_SDA_29V		S5PV210_GPD1(0)
#define GPIO_CAM_SDA_29V_AF		2

#define GPIO_CAM_SCL_29V		S5PV210_GPD1(1)
#define GPIO_CAM_SCL_29V_AF		2


//etinum.victory.boot
#define AP_SDA_30V			    S5PV210_GPD1(2)
#define AP_SDA_30V_AF		    2
#define AP_SCL_30V			    S5PV210_GPD1(3)
#define AP_SCL_30V_AF		    2


#define GPIO_TSP_SDA_28V		S5PV210_GPD1(4)
#define GPIO_TSP_SDA_28V_AF		2	

#define GPIO_TSP_SCL_28V		S5PV210_GPD1(5)
#define GPIO_TSP_SCL_28V_AF		2

#define GPIO_CAM_PCLK			S5PV210_GPE0(0)
#define GPIO_CAM_PCLK_AF		2

#define GPIO_CAM_VSYNC			S5PV210_GPE0(1)
#define GPIO_CAM_VSYNC_AF		2

#define GPIO_CAM_HSYNC			S5PV210_GPE0(2)
#define GPIO_CAM_HSYNC_AF		2

#define GPIO_CAM_D0				S5PV210_GPE0(3)
#define GPIO_CAM_D0_AF			2

#define GPIO_CAM_D1				S5PV210_GPE0(4)
#define GPIO_CAM_D1_AF			2

#define GPIO_CAM_D2				S5PV210_GPE0(5)
#define GPIO_CAM_D2_AF			2

#define GPIO_CAM_D3				S5PV210_GPE0(6)
#define GPIO_CAM_D3_AF			2

#define GPIO_CAM_D4				S5PV210_GPE0(7)
#define GPIO_CAM_D4_AF			2

#define GPIO_CAM_D5				S5PV210_GPE1(0)
#define GPIO_CAM_D5_AF			2

#define GPIO_CAM_D6				S5PV210_GPE1(1)
#define GPIO_CAM_D6_AF			2

#define GPIO_CAM_D7				S5PV210_GPE1(2)
#define GPIO_CAM_D7_AF			2

#define GPIO_CAM_MCLK			S5PV210_GPE1(3)
#define GPIO_CAM_MCLK_AF		2

#define GPIO_TVOUT_SEL			S5PV210_GPE1(4)
#define GPIO_TVOUT_SEL_AF		1

#define GPIO_DISPLAY_HSYNC		S5PV210_GPF0(0)
#define GPIO_DISPLAY_HSYNC_AF	2

#define GPIO_DISPLAY_VSYNC		S5PV210_GPF0(1)
#define GPIO_DISPLAY_VSYNC_AF	2

#define GPIO_DISPLAY_DE			S5PV210_GPF0(2)
#define GPIO_DISPLAY_DE_AF		2

#define GPIO_DISPLAY_PCLK		S5PV210_GPF0(3)
#define GPIO_DISPLAY_PCLK_AF	2

#define GPIO_LCD_D0				S5PV210_GPF0(4)
#define GPIO_LCD_D0_AF			2

#define GPIO_LCD_D1				S5PV210_GPF0(5)
#define GPIO_LCD_D1_AF			2

#define GPIO_LCD_D2				S5PV210_GPF0(6)
#define GPIO_LCD_D2_AF			2

#define GPIO_LCD_D3				S5PV210_GPF0(7)
#define GPIO_LCD_D3_AF			2

#define GPIO_LCD_D4				S5PV210_GPF1(0)
#define GPIO_LCD_D4_AF			2

#define GPIO_LCD_D5				S5PV210_GPF1(1)
#define GPIO_LCD_D5_AF			2

#define GPIO_LCD_D6				S5PV210_GPF1(2)
#define GPIO_LCD_D6_AF			2

#define GPIO_LCD_D7				S5PV210_GPF1(3)
#define GPIO_LCD_D7_AF			2

#define GPIO_LCD_D8				S5PV210_GPF1(4)
#define GPIO_LCD_D8_AF			2

#define GPIO_LCD_D9				S5PV210_GPF1(5)
#define GPIO_LCD_D9_AF			2

#define GPIO_LCD_D10			S5PV210_GPF1(6)
#define GPIO_LCD_D10_AF			2

#define GPIO_LCD_D11			S5PV210_GPF1(7)
#define GPIO_LCD_D11_AF			2

#define GPIO_LCD_D12			S5PV210_GPF2(0)
#define GPIO_LCD_D12_AF			2

#define GPIO_LCD_D13			S5PV210_GPF2(1)
#define GPIO_LCD_D13_AF			2

#define GPIO_LCD_D14			S5PV210_GPF2(2)
#define GPIO_LCD_D14_AF			2

#define GPIO_LCD_D15			S5PV210_GPF2(3)
#define GPIO_LCD_D15_AF			2

#define GPIO_LCD_D16			S5PV210_GPF2(4)
#define GPIO_LCD_D16_AF			2

#define GPIO_LCD_D17			S5PV210_GPF2(5)
#define GPIO_LCD_D17_AF			2

#define GPIO_LCD_D18			S5PV210_GPF2(6)
#define GPIO_LCD_D18_AF			2

#define GPIO_LCD_D19			S5PV210_GPF2(7)
#define GPIO_LCD_D19_AF			2

#define GPIO_LCD_D20			S5PV210_GPF3(0)
#define GPIO_LCD_D20_AF			2

#define GPIO_LCD_D21			S5PV210_GPF3(1)
#define GPIO_LCD_D21_AF			2

#define GPIO_LCD_D22			S5PV210_GPF3(2)
#define GPIO_LCD_D22_AF			2

#define GPIO_LCD_D23			S5PV210_GPF3(3)
#define GPIO_LCD_D23_AF			2

#define GPIO_CODEC_LDO_EN		S5PV210_GPF3(4)

#define GPIO_GPF35				S5PV210_GPF3(5)

#define GPIO_WIMAX_SDIO_CLK		S5PV210_GPG0(0)
#define GPIO_WIMAX_SDIO_CLK_AF	2

#define GPIO_WIMAX_SDIO_CMD		S5PV210_GPG0(1)
#define GPIO_WIMAX_SDIO_CMD_AF	2

#define GPIO_GPG02				S5PV210_GPG0(2)

#define GPIO_WIMAX_SDIO_D0		S5PV210_GPG0(3)
#define GPIO_WIMAX_SDIO_D0_AF	2

#define GPIO_WIMAX_SDIO_D1	    S5PV210_GPG0(4)
#define GPIO_WIMAX_SDIO_D1_AF	2

#define GPIO_WIMAX_SDIO_D2		S5PV210_GPG0(5)
#define GPIO_WIMAX_SDIO_D2_AF	2

#define GPIO_WIMAX_SDIO_D3		S5PV210_GPG0(6)
#define GPIO_WIMAX_SDIO_D3_AF	2

#define GPIO_WLAN_SDIO_CLK      S5PV210_GPG1(0)
#define GPIO_WLAN_SDIO_CLK_AF   2

#define GPIO_WLAN_SDIO_CMD      S5PV210_GPG1(1)
#define GPIO_WLAN_SDIO_CMD_AF   2

#define GPIO_WLAN_nRST          S5PV210_GPG1(2)

#define GPIO_WLAN_SDIO_D0       S5PV210_GPG1(3)
#define GPIO_WLAN_SDIO_D0_AF    2

#define GPIO_WLAN_SDIO_D1       S5PV210_GPG1(4)
#define GPIO_WLAN_SDIO_D1_AF    2

#define GPIO_WLAN_SDIO_D2       S5PV210_GPG1(5)
#define GPIO_WLAN_SDIO_D2_AF    2

#define GPIO_WLAN_SDIO_D3       S5PV210_GPG1(6)
#define GPIO_WLAN_SDIO_D3_AF    2

#define GPIO_T_FLASH_CLK		S5PV210_GPG2(0)
#define GPIO_T_FLASH_CLK_AF		2

#define GPIO_T_FLASH_CMD        S5PV210_GPG2(1)
#define GPIO_T_FLASH_CMD_AF		2

#define GPIO_GPG22              S5PV210_GPG2(2)

#define GPIO_T_FLASH_D0         S5PV210_GPG2(3)
#define GPIO_T_FLASH_D0_AF		2

#define GPIO_T_FLASH_D1         S5PV210_GPG2(4)
#define GPIO_T_FLASH_D1_AF		2	

#define GPIO_T_FLASH_D2         S5PV210_GPG2(5)
#define GPIO_T_FLASH_D2_AF		2

#define GPIO_T_FLASH_D3         S5PV210_GPG2(6)
#define GPIO_T_FLASH_D3_AF		2

#define GPIO_NAND_SDIO_CLK		S5PV210_GPG3(0)
#define GPIO_NAND_SDIO_CLK_AF	2

#define GPIO_NAND_SDIO_CMD		S5PV210_GPG3(1)
#define GPIO_NAND_SDIO_CMD_AF	2

#define GPIO_GPG32              S5PV210_GPG3(2)

#if 0 //for victory
#define GPIO_NAND_SDIO_D0   	S5PV210_GPG3(3)
#define GPIO_NAND_SDIO_D0_AF   	2
#else 
#define GPIO_MICBIAS_EN			  S5PV210_GPG3(3)
#endif 

#define GPIO_NAND_SDIO_D1   	S5PV210_GPG3(4)
#define GPIO_NAND_SDIO_D1_AF   	2
#define GPIO_NAND_SDIO_D2   	S5PV210_GPG3(5)
#define GPIO_NAND_SDIO_D2_AF   	2
#define GPIO_NAND_SDIO_D3   	S5PV210_GPG3(6)
#define GPIO_NAND_SDIO_D3_AF   	2


#define GPIO_AP_PS_HOLD			S5PV210_GPH0(0)

//#define GPIO_ACC_INT			S5PV210_GPH0(1)

//#define GPIO_T_FLASH_DETECT		S5PC11X_GPH0(2)
//#define GPIO_T_FLASH_DETECT_AF  0

#define GPIO_3P_SEND_END		S5PV210_GPH0(2)
#define GPIO_3P_SEND_END_AF 	0

#define GPIO_WLAN_HOST_WAKE		S5PV210_GPH0(3)//SecFeature.Victory
//SecFeature.Victory #define GPIO_BUCK_1_EN_A		S5PC11X_GPH0(3)

#define GPIO_BUCK_1_EN_B		S5PV210_GPH0(4)
#define GPIO_BUCK_1_EN_B_AF		1

#define GPIO_BUCK_2_EN			S5PV210_GPH0(5)
#define GPIO_BUCK_2_EN_AF		1

#define GPIO_DET_35				S5PV210_GPH0(6)
#define GPIO_DET_35_AF			0xFF

#define GPIO_AP_PMIC_IRQ		S5PV210_GPH0(7)
#define GPIO_AP_PMIC_IRQ_AF		0xFF

//SecFeature.Victory #define GPIO_WLAN_HOST_WAKE		S5PC11X_GPH1(0)
//#define BT_HOST_WAKE			S5PC11X_GPH1(1)
#define GPIO_WIMAX_RESET_N		S5PV210_GPH1(1)	// Yongha for Victory WiMAX 20100208


//#define GPIO_nPOWER				S5PV210_GPH1(2)
#define GPIO_GAUGE_ALT			S5PV210_GPH1(2)	// hanapark (Victory Fuel Gauge: MAX17043)


#define GPIO_nINT_ONEDRAM_AP		S5PV210_GPH1(3)


#if 1 //FROYO MERGE
#define GPIO_WIMAX_EN			S5PV210_GPH1(4)
#endif

#if 1 //FROYO MERGE
#define GPIO_UART_SEL			S5PV210_GPH1(5)
#else
#define GPIO_JACK_nINT			S5PV210_GPH1(5)
//#define GPIO_JACK_nINT			S5PV210_GPH2(7)
#endif


#if 1 //FROYO MERGE
#define GPIO_WIMAX_INT			S5PV210_GPH1(6)	// cky 20100414 only support rev02 or higher
#else
//#define GPIO_EAR_SEND_END		S5PV210_GPH1(6)
#define GPIO_WIMAX_EN		S5PV210_GPH1(6)	// Yongha for Victory WiMAX 20100208
#endif

#define GPIO_PHONE_ACTIVE		S5PV210_GPH1(7)

#define GPIO_KBC0				S5PV210_GPH2(0)
#define GPIO_KBC0_AF			3

#define GPIO_KBC1				S5PV210_GPH2(1)
#define GPIO_KBC1_AF			3



#define GPIO_KBC2				S5PV210_GPH2(2)
#define GPIO_KBC2_AF			3

#define GPIO_KBC3				S5PV210_GPH2(3)
#define GPIO_KBC3_AF			3

#if 1 //FROYO MERGE
#define GPIO_JACK_nINT			S5PV210_GPH2(7)
#define GPIO_JACK_nINT_AF               (0xf << 28) // for victory change nandu
#endif




#define GPIO_JACK_NINT          S5PV210_GPH3(0)
#define GPIO_SUB_ON             S5PV210_GPH3(1)
#define GIO_FLM                 S5PV210_GPH3(2)

#define GPIO_KEY_INT            S5PV210_GPH3(3)
#define GPIO_KEY_INT_AF         0xf
#define GPIO_KEY_I2C_SCL        S5PV210_GPH3(4)
#define GPIO_KEY_I2C_SCL_AF     1
#define GPIO_KEY_I2C_SDA        S5PV210_GPH3(5)
#define GPIO_KEY_I2C_SDA_AF     1

#define GPIO_EAR_SEND_END_OPEN		S5PV210_GPH2(2)
#define GPIO_EAR_SEND_END_OPEN_AF	0xFF

#define GPIO_EAR_SEND_END_SHORT		S5PV210_GPH3(6)
#define GPIO_EAR_SEND_END_SHORT_AF	0xFF


#define GPIO_CP_RST				S5PV210_GPH3(7)

#define GPIO_CODEC_I2S_CLK		S5PV210_GPI(0)
#define GPIO_CODEC_I2S_CLK_AF	2

#define GPIO_GPI1				S5PV210_GPI(1)

#define GPIO_CODEC_I2S_WS		S5PV210_GPI(2)
#define GPIO_CODEC_I2S_WS_AF	2

#define GPIO_CODEC_I3S_DI		S5PV210_GPI(3)
#define GPIO_CODEC_I3S_DI_AF	2

#define GPIO_CODEC_I3S_DO		S5PV210_GPI(4)
#define GPIO_CODEC_I3S_DO_AF	2

#define GPIO_GPI5				S5PV210_GPI(5)

#define GPIO_GPI6				S5PV210_GPI(6)

#define GPIO_TA_CURRNET_SEL		S5PV210_GPJ0(0)

//#define GPIO_PS_VOUT			S5PV210_GPJ0(1)
#define GPIO_PS_VOUT_AF			0xFF//0 //jihyon82.kim

#define GPIO_BOOT               S5PV210_GPJ0(2)

//#define	GPIO_WLAN_BT_EN		    S5PC11X_GPB(5)
#define	GPIO_WLAN_BT_EN		    S5PV210_GPJ0(3)

#define GPIO_BT_nRST    		S5PV210_GPJ0(4)

#define GPIO_TOUCH_INT			S5PV210_GPJ0(5)

#define GPIO_CAM_MEGA_EN		S5PV210_GPJ0(6)

//#define GPIO_EAR_MIC_BIAS   	S5PV210_GPJ0(7)////skylove7.lim change for victory

#define GPIO_PHONE_ON			S5PV210_GPJ1(0)

#define GPIO_VIBTONE_EN1		S5PV210_GPJ1(1)

#define GPIO_OJ_MOTION			S5PV210_GPJ1(2)

#define GPIO_TOUCH_EN			S5PV210_GPJ1(3)
#define	GPIO_TOUCH_EN_AF		1


#define GPIO_HALL_SW            S5PV210_GPJ1(4)

#define GPIO_CAM_MEGA_nRST		S5PV210_GPJ1(5)

#define GPIO_USB_HS_SEL         S5PV210_GPJ2(0)
#define GPIO_USB_HS_SW_EN_N		S5PV210_GPJ2(1)

#define GPIO_WIMAX_USB_EN        S5PV210_GPJ2(2)

#define GPIO_MC_SEL             S5PV210_GPJ2(3)
#define GPIO_ALS_EN             S5PV210_GPJ2(4)

//#define GPIO_OLED_DET			S5PC11X_GPJ2(2)
//#define GPIO_CODEC_XTAL_EN		S5PV210_GPJ2(3)
//#define GPIO_FM_INT				S5PV210_GPJ2(4)

//#define GPIO_SUB_KEY_LED_ON     S5PC11X_GPJ2(5)
#define GPIO_SVC_LED_RED			S5PV210_GPJ2(5)	// hanapark SVC LED

#define GPIO_KEY_LED_ON         S5PV210_GPJ2(6)
#define GPIO_MAIN_KEY_LED_ON    S5PV210_GPJ2(6)

//#define GPIO_CAM_FLASH_EN		S5PV210_GPJ2(0)
//#define GPIO_CAM_FLASH_SET		S5PV210_GPJ2(1)
#define GPIO_CAM_FLASH_EN		S5PV210_GPJ2(7)
#define GPIO_CAM_FLASH_SET		S5PV210_GPJ3(0)


#define GPIO_UART_SEL1			S5PV210_GPJ3(1)

//#define GPIO_OJ_SHUTDOWN		S5PV210_GPJ3(2)
#define GPIO_SVC_LED_BLUE		S5PV210_GPJ3(2)	// hanapark SVC LED

#define GPIO_ATSC_SPI_IRQ		S5PV210_GPJ3(3)

#define GPIO_FM_SCL_28V			S5PV210_GPJ3(4) //jihyon82.kim
#define GPIO_FM_SCL_28V_AF		2

#define GPIO_FM_SDA_28V			S5PV210_GPJ3(5)//jihyon82.kim
#define GPIO_FM_SDA_28V_AF		2

#if 1 //FROYO MERGE
#define GPIO_AP_PMIC_SCL		S5PV210_GPJ3(6)
#define GPIO_AP_PMIC_SDA	    S5PV210_GPJ3(7)
#else
#define GPIO_DMB_EN			    S5PV210_GPJ3(6)
#define GPIO_DMB_RST		    S5PV210_GPJ3(7)
#endif


#define GPIO_NWLAN_WAKE			S5PV210_GPJ4(0)
//#define GPIO_AP_PMIC_SDA		S5PV210_GPJ4(0)

#if 1 //FROYO MERGE
#else
#define GPIO_AP_PMIC_SDA		S5PV210_GPJ4(1)
#endif

#if 1 //FROYO MERGE
#else
#define GPIO_AP_PMIC_SCL		S5PV210_GPJ4(3)
#endif
#define GPIO_BT_WAKE			S5PV210_GPG3(4)
#define GPIO_WLAN_WAKE		S5PV210_GPG3(5)

//#define GPIO_BT_WAKE			S5PV210_GPJ4(4)
//#define GPIO_TV_EN				S5PV210_GPJ4(4)

#define GPIO_MP010			    S5PV210_MP01(0)

#define GPIO_DISPLAY_CS			S5PV210_MP01(1)

#define GPIO_DISPLAY_CS_AF		S3C_GPIO_SFN(1)

#define GPIO_SUB_DISPLAY_CS		S5PV210_MP01(2)

#define GPIO_OLED_ID			S5PV210_MP01(3)

#define GPIO_AP_NANDCS			S5PV210_MP01(4)
#define GPIO_AP_NANDCS_AF		5

#define GPIO_MP015				S5PV210_MP01(5)

#define GPIO_MP016				S5PV210_MP01(6)

#define GPIO_MP017				S5PV210_MP01(7)

#define GPIO_MP020				S5PV210_MP02(0)

#define GPIO_MP021				S5PV210_MP02(1)

#define GPIO_VCC_19V_PDA		S5PV210_MP02(2)

#define GPIO_MP023				S5PV210_MP02(3)

#define GPIO_MP030				S5PV210_MP03(0)

#define GPIO_MP031				S5PV210_MP03(1)

#define GPIO_MP032				S5PV210_MP03(2)

#define GPIO_PDA_ACTIVE			S5PV210_MP03(3)

#define GPIO_VCC_18V_PDA		S5PV210_MP03(4)

#define GPIO_MP035  			S5PV210_MP03(5)

#define GPIO_MP036				S5PV210_MP03(6)

#define GPIO_PCM_SEL			S5PV210_MP03(7)  //suik_Check Sound
#define GPIO_MP037				S5PV210_MP03(7)

//#define GPIO_MP040  			S5PC11X_MP04(0)
#define FUEL_SCL_18V		S5PV210_MP04(0)

#define GPIO_DISPLAY_CLK		S5PV210_MP04(1)

#define GPIO_DISPLAY_CLK_AF		S3C_GPIO_SFN(1)

//#define GPIO_MP042				S5PV210_MP04(2)
#define FUEL_SDA_18V		S5PV210_MP04(2)

#define GPIO_DISPLAY_SI			S5PV210_MP04(3)

#define GPIO_DISPLAY_SI_AF		S3C_GPIO_SFN(1)

#define GPIO_WIMAX_CON2			S5PV210_MP04(4)

//#define GPIO_LVDS_RST			S5PV210_MP04(5)
#define GPIO_WIMAX_WAKEUP       S5PV210_MP04(5)

//#define GPIO_GPS_CLK_EN			S5PV210_MP04(6)
#define GPIO_WIMAX_CON0			S5PV210_MP04(6)

//#define GPIO_MHL_RST			S5PV210_MP04(7)
#define GPIO_WIMAX_CON1			S5PV210_MP04(7)

#if 1	//cky 20100414	only support rev02 or higher
#else
#define GPIO_WIMAX_INT          S5PV210_MP05(0)
#endif

#define GPIO_WIMAX_IF_MODE0     S5PV210_MP05(1)
#define GPIO_WIMAX_IF_MODE1     S5PV210_MP05(2)


#define GPIO_AP_SCL_18V			S5PV210_MP05(3)
#define GPIO_AP_SDA_18V			S5PV210_MP05(4)


#define GPIO_MLCD_RST			S5PV210_MP05(5)

#define GPIO_VGH				S5PV210_MP05(6)

#if 1 //UART_CHANGE
#else
#define GPIO_UART_SEL			S5PV210_MP05(7)
#endif


#define AP_I2C_SDA              S5PV210_MP05(4)
#define AP_I2C_SCL              S5PV210_MP05(3)

#if 0 //etinum.victory.boot
#define AP_I2C_SDA_28V			S5PV210_GPJ3(6)
#define	AP_I2C_SCL_28V			S5PV210_GPJ3(7)
#endif

#define PMIC_I2C_SDA            S5PV210_GPJ4(1) //victory.boot
#define PMIC_I2C_SCL            S5PV210_GPJ4(3)

#define GPIO_TOUCH_INT			S5PV210_GPJ0(5)
#define	GPIO_TOUCH_INT_AF		0xFF //victory.boot temp

/* uart 0~3 */
#define 	GPIO_BT_RXD 		S5PV210_GPA0(0)
#define 	GPIO_BT_RXD_AF 		2
#define 	GPIO_BT_TXD 		S5PV210_GPA0(1)
#define 	GPIO_BT_TXD_AF 		2
#define 	GPIO_BT_CTS 		S5PV210_GPA0(2)
#define 	GPIO_BT_CTS_AF 		2
#define 	GPIO_BT_RTS 		S5PV210_GPA0(3)
#define 	GPIO_BT_RTS_AF 		2

#define 	GPIO_GPS_RXD		S5PV210_GPA0(4)
#define 	GPIO_GPS_RXD_AF 	2
#define 	GPIO_GPS_TXD 		S5PV210_GPA0(5)
#define 	GPIO_GPS_TXD_AF 	2
#define 	GPIO_GPS_CTS		S5PV210_GPA0(6)
#define 	GPIO_GPS_CTS_AF 	2
#define 	GPIO_GPS_RTS		S5PV210_GPA0(7)
#define 	GPIO_GPS_RTS_AF 	2

#define 	GPIO_AP_RXD 		S5PV210_GPA1(0)
#define 	GPIO_AP_RXD_AF 		2
#define 	GPIO_AP_TXD 		S5PV210_GPA1(1)
#define 	GPIO_AP_TXD_AF 		2

#define 	GPIO_FLM_RXD 		S5PV210_GPA1(2)
#define 	GPIO_FLM_RXD_AF 	2
#define 	GPIO_FLM_TXD 		S5PV210_GPA1(3)
#define 	GPIO_FLM_TXD_AF 	2

#define		GPIO_AP_PS_HOLD		S5PV210_GPH0(0)
#define		GPIO_AP_PS_HOLD_AF	1 //?


#define		GPIO_PHONE_ACTIVE		S5PV210_GPH1(7)
#define		GPIO_PHONE_ACTIVE_AF	2 //?

#define		GPIO_N_POWER		S5PV210_GPH2(6)
#define		GPIO_N_POWER_AF		2 //?


// dummies
#define GPIO_EAR_SEL			S5PV210_GPIO_END //victory.boot check S5PC11X_GPJ1(4)
#define GPIO_FM_RST				S5PV210_GPIO_END //victory.boot check
#define GPIO_EARPATH_SEL		S5PV210_GPIO_END //victory.boot check
#define GPIO_FM_INT             S5PV210_GPIO_END
#define GPIO_USB_SDA_28V S5PV210_GPIO_END
#define GPIO_USB_SCL_28V S5PV210_GPIO_END
#define GPIO_CAM_VGA_nSTBY S5PV210_GPB(2) //S5PC11X_GPIO_END
#define GPIO_CAM_VGA_nRST S5PV210_GPB(0) //S5PC11X_GPIO_END
#define GPIO_ALS_SDA_28V S5PV210_GPIO_END
#define GPIO_ALS_SCL_28V S5PV210_GPIO_END
#define GPIO_MSENSE_SDA_28V S5PV210_GPIO_END
#define GPIO_MSENSE_SCL_28V S5PV210_GPIO_END
#define GPIO_GPS_nRST S5PV210_GPIO_END
#define GPIO_GPS_PWR_EN S5PV210_GPIO_END
#define GPIO_CODEC_XTAL_EN S5PV210_GPIO_END
#define GPIO_GPJ30				S5PV210_GPIO_END
#define GPIO_USB_SEL				S5PV210_GPIO_END
#define GPIO_GPB7 S5PV210_GPIO_END

//aliases
#define	GPIO_BT_RST			GPIO_BT_nRST
#define	GPIO_BT_HOST_WAKE	S5PV210_GPH0(4) //jhee2,5->0,4
#define	GPIO_WLAN_RST		GPIO_WLAN_nRST
#define GPIO_MSENSE_nRST     GPIO_MSENSE_RST

#define GPIO_JACK_INT_N 	GPIO_JACK_nINT
#define	GPIO_JACK_INT_N_AF	0xFF
#define GPIO_TV_EN GPIO_TVOUT_SEL

#if 1 //FROYO MERGE
#define _3_TOUCH_SDA_28V		S5PV210_GPG3(0)//hojun_kim GPIO_TSP_SDA_28V
#define _3_TOUCH_SCL_28V		S5PV210_GPG3(2)//hojun_kim GPIO_TSP_SCL_28V
#define _3_GPIO_TOUCH_INT		S5PV210_GPJ3(3)//hojun_kim GPIO_TOUCH_INT
#define _3_GPIO_TOUCH_EN		S5PV210_GPJ1(3)//hojun_kim GPIO_TOUCH_EN
#define _3_GPIO_TOUCH_EN_AF		GPIO_TOUCH_EN_AF
#define _3_GPIO_TOUCH_CE		S5PV210_GPJ3(2)//hojun_kim GPIO_TOUCH_EN //froyo_merge_check
#define _3_GPIO_TOUCH_ST_AF		GPIO_TOUCH_EN_AF
#else
#define _3_TOUCH_SDA_28V		GPIO_TSP_SDA_28V
#define _3_TOUCH_SCL_28V		GPIO_TSP_SCL_28V
#define _3_GPIO_TOUCH_INT		GPIO_TOUCH_INT
#define _3_GPIO_TOUCH_EN		GPIO_TOUCH_EN
#define _3_GPIO_TOUCH_EN_AF		GPIO_TOUCH_EN_AF
#define _3_GPIO_TOUCH_CE		GPIO_TOUCH_EN
#define _3_GPIO_TOUCH_ST_AF		GPIO_TOUCH_EN_AF
#endif
#define GPIO_TOUCH_RST GPIO_TOUCH_EN

#endif
