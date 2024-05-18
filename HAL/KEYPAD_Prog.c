#define KEYPAD_PROG
#include "StdTypes.h"
#include "DIO_Int.h"
#include "KEYPAD_Cfg.h"
#include "KEYPAD_Int.h"
#define F_CPU 8000000
#include <util/delay.h>

void KEYPAD_Init(void)
{
	u8 r;
	for(r=0;r<ROW;r++)
	{
		DIO_WritePin(FIRST_OUTPUT+r,HIGH); // all outputs=1
	}
}
u8 KEYPAD_GetKey(void)
{
	u8 r,c,Key=NO_KEY;
	for(r=0;r<ROW;r++)
	{
		DIO_WritePin(FIRST_OUTPUT+r,LOW);
		for(c=0;c<COL;c++)
		{
			if(!DIO_ReadPin(FIRST_INPUT+c))
			{
				Key=KeyArray[r][c];
				_delay_ms(10);
				while(!DIO_ReadPin(FIRST_INPUT+c));
				_delay_ms(10);
			}
		}
		DIO_WritePin(FIRST_OUTPUT+r,HIGH);
	}
	return Key;
}