/*
 * DIO_Private.h
 *
 * Created: 10/16/2023 10:40:34 PM
 *  Author: KimoStore
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
extern const DIO_PinStatus_t DIO_PinsStatusArr[TOTAL_PINS];
static void DIO_InitPin(DIO_Pin_t pin,DIO_PinStatus_t status);



#endif /* DIO_PRIVATE_H_ */