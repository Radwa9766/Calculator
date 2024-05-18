

#ifndef KEYPAD_CFG_H_
#define KEYPAD_CFG_H_




#define ROW  4
#define COL  4
#define NO_KEY  'T'

#define TOTAL_KEYPADPINS  8
#ifdef KEYPAD_PROG
u8 KeyArray[ROW][COL]=
{{'7','8','9','/'},
{'4','5','6','*'},
{'1','2','3','-'},
{'C','0','=','+'}};
u8 KeyPad_ROWpins[COL]={
	PINB4, /*FIRST OUTPUT*/
	PINB5, /*2nd OUTPUT*/
	PINB6, /*3rd OUTPUT*/
	PINB7, /*4th OUTPUT*/
	
};
u8 KeyPad_COLpins[TOTAL_KEYPADPINS]={
	PIND2, /*FIRST INPUT*/
	PIND3, /*2nd INPUT*/
	PIND4, /*3rd INPUT*/
	PIND5 /*4th  INPUT*/
};

#define FIRST_INPUT     PIND2
#define FIRST_OUTPUT    PINB4

#endif



#endif /* KEYPAD_CFG_H_ */