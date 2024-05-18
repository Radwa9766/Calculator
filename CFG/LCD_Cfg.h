

#ifndef LCD_CFG_H_
#define LCD_CFG_H_
/* _4_BIT, _8_BIT*/

#define _4_BIT  1
#define _8_BIT  2

#define LCD_MODE  _4_BIT

#define D7 PINA6
#define D6 PINA5
#define D5 PINA4
#define D4 PINA3



#define RS PINA1
#define EN PINA2

#define LCD_PORT PA



#endif /* LCD_CFG_H_ */