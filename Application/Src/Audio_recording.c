/*
 * Audio_recording.c
 *
 *  Created on: 21-Dec-2019
 *      Author: jaguar
 */
#include <stm32f4xx_hal_i2s.h>


I2S_HandleTypeDef         hAudioInI2s;

void Initialise_i2s2_interface()
{
	 /* Initialize the hAudioInI2s Instance parameter */
	 // hAudioInI2s.Instance          = I2S2;

	 /* I2S2 peripheral configuration */
	  hAudioInI2s.Init.AudioFreq    = 2 * I2S_AUDIOFREQ_32K;
	  hAudioInI2s.Init.ClockSource  = I2S_CLOCK_PLL;
	  hAudioInI2s.Init.CPOL         = I2S_CPOL_HIGH;
	  hAudioInI2s.Init.DataFormat   = I2S_DATAFORMAT_16B;
	  hAudioInI2s.Init.MCLKOutput   = I2S_MCLKOUTPUT_DISABLE;
	  hAudioInI2s.Init.Mode         = I2S_MODE_MASTER_RX;
	  hAudioInI2s.Init.Standard     = I2S_STANDARD_LSB;



	HAL_I2S_Init( &hAudioInI2s );
}
