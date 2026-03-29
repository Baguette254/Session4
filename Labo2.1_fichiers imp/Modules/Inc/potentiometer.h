/*
 * potentiometer.h
 *
 *  Created on: 1 févr. 2026
 *      Author: Jonathan Marois
 */

#ifndef MODULES_INC_POTENTIOMETER_H_
#define MODULES_INC_POTENTIOMETER_H_



#include <stdint.h>
#include "stm32f4xx_hal.h"

void     Pot_Init(ADC_HandleTypeDef *hadc);
uint16_t Pot_ReadRaw(void);        // 0..4095
uint8_t  Pot_ReadPercent(void);    // 0..100

// Optionnel (si tu veux être robuste au montage réel)
void     Pot_SetCalibration(uint16_t min_raw, uint16_t max_raw);


#endif /* MODULES_INC_POTENTIOMETER_H_ */
