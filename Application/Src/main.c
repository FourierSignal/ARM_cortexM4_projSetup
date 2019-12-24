/**
  ******************************************************************************
  * @file    main.c
  * @author  Auto-generated by STM32CubeIDE
  * @version V1.0
  * @brief   Default main function.
  ******************************************************************************
*/

/* Hardware details:
 * schematic:STM32F407-Disc
 * MP45DT02-(MEMS{micro-electro mechanical system) audio Sensor Omnidirectional) DigitalMicrophone - provides PDM output
 * Dout ---------------PC3
 * CLK  ---------------PB10
 *
 * datasheet:STM32F407
 * PB10(SPI2_SCK / I2S2_CK /I2C2_SCL/ USART3_TX /OTG_HS_ULPI_D3 /ETH_MII_RX_ER /TIM2_CH3/ EVENTOUT )
 * PC3(SPI2_MOSI / I2S2_SD /OTG_HS_ULPI_NXT /ETH_MII_TX_CLK/EVENTOUT )
 *
 * datasheet:MP45Dt02
 * frequency in normal mode( min:1Mhz  Max:2.25Mhz)
 *
 * drive PB10 at 1Mhz freq , get 1bit sample for every 1us
 *
 * programming:
 * -------------
 * Configure the Pins PB10 and PC3 as I2S2_SD and I2S2_Ck.
 * Initialise I2S2 interface .
 * configure I2S2 in one of it's mode suitable for Applic.
 * (I2S is configured in master receiver mode. In this mode,
 * the I2S peripheral provides the clock to the MEMS microphone through CLK_IN
 * and acquires the data (Audio samples) from the MEMS microphone through PDM_OUT.
 * Data acquisition is performed ?? how ?? how samples are stored??
 * Any  possibility for data loss ? explore )
 *
 * polling based /Interrupt based ?? i2s interrupt??
 *
 *
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



int main(void)
{

	//Initialise_i2s2_interface();

	for(;;);
}