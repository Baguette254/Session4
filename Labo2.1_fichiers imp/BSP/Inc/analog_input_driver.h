/*
 * analog_input_driver.h
 *
 *  Created on: 1 févr. 2026
 *      Author: Jonathan Marois
 */

#ifndef BSP_INC_ANALOG_INPUT_DRIVER_H_
#define BSP_INC_ANALOG_INPUT_DRIVER_H_

#include "stm32f4xx_hal.h"
#include <stdint.h>


void     pot_init(ADC_HandleTypeDef *hadc);
uint16_t pot_read_raw(void); // 0..4095


#endif /* BSP_INC_ANALOG_INPUT_DRIVER_H_ */
