 


#ifndef LCD_INT_H_
#define LCD_INT_H_

void LCD_Int (void);

void LCD_writeChar(u8 ch);
void LCD_writeString(u8 *str);
void LCD_writeNumber(s32 num);

void LCD_writeNumber_4D(u16 num); 

void LCD_writeBinary(s32 num);
void LCD_writeHex(s32 num);

void LCD_Clear(void);
void LCD_SetCursor(u8 line ,u8 cell);
void SnakeWord(u8*str);
void LCD_CustomChar(u8*pattern,u8 address);
void LCD_WriteStringCursor(u8 line ,u8 cell,u8*str);
void LCD_ClearCursor(u8 line ,u8 cell,u8 NoC);
#endif /* LCD_INT_H_ */