/*
 * potentiometer.c
 *
 *  Created on: 5 févr. 2026
 *      Author: Jonathan Marois
 */


#include "potentiometer.h"
#include "analog_input_driver.h"   // driver bas niveau
#include <stdint.h>

#define ADC_MAX_12BIT  4095U

void Pot_Init(ADC_HandleTypeDef *hadc)
{
   pot_init(hadc);   // driver bas niveau
}

uint16_t Pot_ReadRaw(void)
{

	uint16_t val = pot_read_raw();
	return val;
}

uint8_t Pot_ReadPercent(void)
{
	uint16_t adc = pot_read_raw();

	return (uint8_t)((uint16_t)adc * 100 / 4095);;
    /* Conversion directe 0–4095 → 0–100 % */



}
