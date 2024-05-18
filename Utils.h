/*
 * Utils.h
 *
 * Created: 10/17/2023 12:00:08 AM
 *  Author: KimoStore
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define GET_BIT(reg,bit)  ((reg>>bit)&1)
#define SET_BIT(reg,bit)  (reg=reg|(1<<bit))
#define CLR_BIT(reg,bit)  (reg=reg&~(1<<bit))


#define PORTD (*(volatile unsigned char*)0x32)
#define DDRD (*(volatile unsigned char*)0x31)
#define PIND (*(volatile unsigned char*)0x30)

#define PORTC (*(volatile unsigned char*)0x35)
#define DDRC (*(volatile unsigned char*)0x34)
#define PINC (*(volatile unsigned char*)0x33)

#define PORTB (*(volatile unsigned char*)0x38)
#define DDRB (*(volatile unsigned char*)0x37)
#define PINB (*(volatile unsigned char*)0x36)

#define PORTA (*(volatile unsigned char*)0x3B)
#define DDRA (*(volatile unsigned char*)0x3A)
#define PINA (*(volatile unsigned char*)0x39)

#endif /* UTILS_H_ */