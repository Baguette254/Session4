/*
 * analog_input_driver.c
 *
 *  Created on: 1 févr. 2026
 *      Author: Jonathan Marois
 */


#include "analog_input_driver.h"
#include "main.h"

static ADC_HandleTypeDef *s_adc = NULL;

void pot_init(ADC_HandleTypeDef *hadc)
{
    s_adc = hadc;
}

uint16_t pot_read_raw(void)
{

	  HAL_ADC_Start(s_adc);
      HAL_ADC_PollForConversion(s_adc, 10);
      int adc = HAL_ADC_GetValue(s_adc);
      return adc;
}


