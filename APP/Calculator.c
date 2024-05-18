
#include "StdTypes.h"
#include "DIO_Int.h"
#include "LCD_Int.h"
#include "KEYPAD_Int.h"
#include "Calculator.h"
 #define F_CPU 8000000
 #include <util/delay.h>


u32 Calculator_Sub(u32 num1,u32 num2)
{
	return num1-num2;
}
u32 Calculator_Sum(u32 num1,u32 num2)
{
	return num1+num2;
}
u32 Calculator_Mal(u32 num1,u32 num2)
{
	return num1*num2;
}
u32 Calculator_Div(u32 num1,u32 num2)
{
	
	return num1/num2;
}

