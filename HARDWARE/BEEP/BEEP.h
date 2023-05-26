#ifndef __BEEP_H
#define __BEEP_H 

#define BEEP_PIN GPIO_Pin_8		//·äÃùÆ÷³õÊ¼»¯ GPIOB8
#define BEEP_GPIO_PORT GPIOB


void BEEP_Init(void);
void beep_on(void);
void beep_off(void);

#endif
