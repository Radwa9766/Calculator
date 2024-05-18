

 #include "StdTypes.h"
 #include "MemMap.h"
 #include "Utils.h"
 #include "DIO_Int.h"
 #include "LCD_Int.h"
 #include "LCD_Cfg.h"
 #include "KEYPAD_Int.h"
 #include "KEYPAD_Cfg.h"
 #include "Calculator.h"
 #define F_CPU 8000000
 #include <util/delay.h>
 
	  

 
 int main(void)
{
	DIO_Init();
	LCD_Int ();
	KEYPAD_Init();
	u32 num1=0,num2=0;
	u8 k,error_flag=0;
	Calculatr_Operation_t operatin=NON_FLAG;
	Calculatr_equal_t equal=NON_EQUAL;
 	LCD_WriteStringCursor(1,4,"Calculator");
 	LCD_WriteStringCursor(2,2,"Radwa Shehatah");

	_delay_ms(1000);
	LCD_Clear();
	LCD_SetCursor(1,1);
	while (1)
	{
		k=KEYPAD_GetKey();
		if (k>='0'&& k<='9' & operatin==NON_FLAG)
		{
			if(equal==EQUAL_FLAG)
			{
				LCD_Clear();
				num1=0;
				equal=NON_EQUAL;
			}
			LCD_writeChar(k);
			num1=num1*10+(k -'0');
			
		}
		if (k>='0'&& k<='9' & operatin!=NON_FLAG)
		{
			LCD_writeChar(k);
			num2=num2*10+(k -'0');
		}
		if(k =='+')
		{
			operatin=SUM_FLAG;
			if(equal==EQUAL_FLAG)
			{
				LCD_Clear();
				LCD_writeNumber(num1);
				equal=NON_EQUAL;
			}
			LCD_writeChar(k);
		}
		if(k=='-')
		{
			operatin=SUB_FLAG;	
			if(equal==EQUAL_FLAG)
			{
				LCD_Clear();
				LCD_writeNumber(num1);
				equal=NON_EQUAL;
			}
			LCD_writeChar(k);
			
		}
		if(k=='*')
		{
			operatin=MAL_FLAG;
			if(equal==EQUAL_FLAG)
			{
				LCD_Clear();
				LCD_writeNumber(num1);
				equal=NON_EQUAL;
			}
			LCD_writeChar(k);
		}
		if(k=='/')
		{
			operatin=DIV_FLAG;
			if(equal==EQUAL_FLAG)
			{
				LCD_Clear();
				LCD_writeNumber(num1);
				equal=NON_EQUAL;
			}
			LCD_writeChar(k);
		}
		if(k =='=' && operatin!= NON_FLAG)
		{
			switch (operatin)
			{
				case SUM_FLAG:
				num1=Calculator_Sum(num1,num2);
				LCD_writeChar('=');
				LCD_SetCursor(2,1);
				LCD_writeNumber(num1);
				num2=0;
				LCD_SetCursor(1,1);
				operatin=NON_FLAG;
				equal=EQUAL_FLAG;
				break;
				
				case SUB_FLAG:
				num1=Calculator_Sub(num1,num2);
				LCD_writeChar('=');
				LCD_SetCursor(2,1);
				LCD_writeNumber(num1);
				num2=0;
				LCD_SetCursor(1,1);
				operatin=NON_FLAG;
				equal=EQUAL_FLAG;
				break;
				
				case MAL_FLAG:
				num1=Calculator_Mal(num1,num2);
				LCD_writeChar('=');
				LCD_SetCursor(2,1);
				LCD_writeNumber(num1);
				num2=0;
				LCD_SetCursor(1,1);
				operatin=NON_FLAG;
				equal=EQUAL_FLAG;
				
				break;
				case DIV_FLAG:
				if(num2==0)
				{
					LCD_Clear();
					LCD_WriteStringCursor(1,4," Math Error");
					_delay_ms(1000);
					LCD_Clear();
					LCD_SetCursor(1,1);
					LCD_writeNumber(num1);
					LCD_writeChar('/');
					k=DIV_FLAG;
					equal=EQUAL_FLAG;
					error_flag=1;
					break;
				}
				else
				{
					num1=Calculator_Div(num1,num2);
					LCD_writeChar('=');
					LCD_SetCursor(2,1);
					LCD_writeNumber(num1);
					num2=0;
					LCD_SetCursor(1,1);
					operatin=NON_FLAG;
					equal=EQUAL_FLAG;
				}
				break;
			}
		}
		if(k =='C')
		{
			num1=0;
			num2=0;
			operatin=NON_FLAG;
			equal=NON_EQUAL;
			LCD_Clear();
		}
	}
	
 }


