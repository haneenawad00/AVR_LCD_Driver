/*
 * DIO_reg.h
 *
 *  Created on: Sep 17, 2021
 *      Author: haneenahmed 
 */
#ifndef DIO_V1_DIO_REG_H_
#define DIO_V1_DIO_REG_H_
//Group A Registers
#define DDRA_REG         *((volatile u8*)0X3A)
#define PORTA_REG			*((volatile u8*)0X3B)
#define PINA_REG	*((volatile u8*)0X39)
//Group B Registers
#define DDRB_REG	*((volatile u8*)0X37)
#define PORTB_REG	*((volatile u8*)0X38)
#define PINB_REG	*((volatile u8*)0X36)
//Group C Registers
#define DDRC_REG	*((volatile u8*)0X34)
#define PORTC_REG	*((volatile u8*)0X35)
#define PINC_REG	*((volatile u8*)0X33)
//Group D Registers
#define DDRD_REG	*((volatile u8*)0X31)
#define PORTD_REG	*((volatile u8*)0X32)
#define PIND_REG	*((volatile u8*)0X30)
#endif /* DIO_V1_DIO_REG_H_ */
