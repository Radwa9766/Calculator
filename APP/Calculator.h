

#ifndef CALCULATOR_H_
#define CALCULATOR_H_
void Calculator_Int(void);
void Calculator(void);

typedef enum {
	NON_FLAG,
	SUM_FLAG,
	SUB_FLAG,
	MAL_FLAG,
	DIV_FLAG
}Calculatr_Operation_t;

typedef enum {
	NON_EQUAL,
	EQUAL_FLAG,
}Calculatr_equal_t;
u32 Calculator_Sum(u32 num1,u32 num2);
u32 Calculator_Sub(u32 num1,u32 num2);
u32 Calculator_Mal(u32 num1,u32 num2);
u32 Calculator_Div(u32 num1,u32 num2);

#endif /* CALCULATOR_H_ */