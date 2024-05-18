/*
 * DIO_Cfg.c
 *
 * Created: 10/16/2023 10:41:17 PM
 *  Author: KimoStore
 */ 
#include "StdTypes.h"
#include "DIO_Int.h"
 
int arr[5]={1,2,3,4,5};
	
 const DIO_PinStatus_t DIO_PinsStatusArr[TOTAL_PINS]={
	INFREE, /*Port A Pin 0*/
	OUTPUT, /*Port A Pin 1*/
	OUTPUT, /*Port A Pin 2*/
	OUTPUT, /*Port A Pin 3*/
	OUTPUT, /*Port A Pin 4*/
	OUTPUT, /*Port A Pin 5*/
	OUTPUT, /*Port A Pin 6*/
	INFREE, /*Port A Pin 7*/
	OUTPUT, /*Port B Pin 0*/
	OUTPUT, /*Port B Pin 1*/
	OUTPUT, /*Port B Pin 2*/
	INPULL, /*Port B Pin 3*/
	OUTPUT, /*Port B Pin 4*/
	OUTPUT, /*Port B Pin 5*/
	OUTPUT, /*Port B Pin 6*/
	OUTPUT, /*Port B Pin 7*/
	INPULL, /*Port C Pin 0*/
	OUTPUT, /*Port C Pin 1*/
	OUTPUT, /*Port C Pin 2*/
	OUTPUT, /*Port C Pin 3*/
	INPULL, /*Port C Pin 4*/
	OUTPUT, /*Port C Pin 5*/
	OUTPUT, /*Port C Pin 6*/
	OUTPUT, /*Port C Pin 7*/
	INPULL, /*Port D Pin 0*/
	INPULL, /*Port D Pin 1*/
	INPULL, /*Port D Pin 2*/
	INPULL, /*Port D Pin 3*/
	INPULL, /*Port D Pin 4*/
	INPULL, /*Port D Pin 5*/
	OUTPUT, /*Port D Pin 6*/
	OUTPUT, /*Port D Pin 7*/
	
};