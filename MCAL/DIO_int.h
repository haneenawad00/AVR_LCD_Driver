/*
 * DIO_int.h
 *
 *  Created on: Sep 17, 2021
 *      Author: haneenahmed
 */
#include "stdtypes.h"
#ifndef DIO_V1_DIO_INT_H_
#define DIO_V1_DIO_INT_H_

#define PORT_A           (u8)  0
#define PORT_B           (u8)  1
#define PORT_C           (u8)  2
#define PORT_D           (u8)  3
#define PIN_0            (u8)  0
#define PIN_1            (u8)  1
#define PIN_2            (u8)  2
#define PIN_3            (u8)  3
#define PIN_4            (u8)  4
#define PIN_5            (u8)  5
#define PIN_6            (u8)  6
#define PIN_7            (u8)  7
#define INPUT            (u8)  0
#define OUTPUT           (u8)  1
#define LOW              (u8)  0
#define HIGH             (u8)  1
#define FULL_INPUT       (u8) 0X00
#define FULL_OUTPUT      (u8) 0XFF
#define HALF_OUTPUT_HALF_INPUT    (u8) 0X0F
#define HALF_INPUT_HALF_OUTPUT    (u8) 0XF0
#define FULL_LOW         (u8) 0X00
#define FULL_HIGH        (u8) 0XFF
#define HALF_HIGH_HALF_LOW        (u8) 0X0F
#define HALF_LOW_HALF_HIGH        (u8) 0XF0

u8 DIO_u8setPortDirection(u8 Copy_u8port,u8 Copy_u8direction);
u8 DIO_u8setPortValue(u8 Copy_u8port, u8 Copy_u8Value);
u8 DIO_u8getPortValue(u8 Copy_u8port, u8 * Copy_u8pValue);

u8 DIO_u8setPinDirection(u8 Copy_u8port, u8 Copy_u8pin ,u8 Copy_u8direction);
u8 DIO_u8setPinValue(u8 Copy_u8port, u8 Copy_u8pin ,u8 Copy_u8value);
u8 DIO_u8togglePinValue(u8 Copy_u8port, u8 Copy_u8pin);
u8 DIO_u8getPinValue(u8 Copy_u8port, u8 Copy_u8pin ,u8 * Copy_u8pValue);


#endif /* DIO_V1_DIO_INT_H_ */
