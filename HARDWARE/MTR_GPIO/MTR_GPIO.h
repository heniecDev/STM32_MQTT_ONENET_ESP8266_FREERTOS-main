#ifndef __MTR_GPIO_H
#define __MTR_GPIO_H

#include "stm32f10x.h"

/*
	С����������
	���1������
	���2������
	���3������
	���4������
*/
#define MTR1_GPIO_PORT		GPIOB
#define MTR1_GPIO_CLK 	    RCC_APB2Periph_GPIOB
#define MTR1_GPIO_PIN		GPIO_Pin_6|GPIO_Pin_7
#define MTR1_CW				{GPIO_ResetBits(MTR1_GPIO_PORT,GPIO_Pin_6);GPIO_SetBits(MTR1_GPIO_PORT,GPIO_Pin_7);}//˳ʱ��
#define MTR1_CCW			{GPIO_SetBits(MTR1_GPIO_PORT,GPIO_Pin_6);GPIO_ResetBits(MTR1_GPIO_PORT,GPIO_Pin_7);}//��ʱ��
#define MTR1_BRAKE			GPIO_ResetBits(MTR1_GPIO_PORT,MTR1_GPIO_PIN);

//#define MTR2_GPIO_PORT    	GPIOB
//#define MTR2_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR2_GPIO_PIN		GPIO_Pin_2|GPIO_Pin_9
//#define MTR2_CW				{GPIO_ResetBits(MTR2_GPIO_PORT,GPIO_Pin_2);GPIO_SetBits(MTR2_GPIO_PORT,GPIO_Pin_9);}//˳ʱ��
//#define MTR2_CCW			{GPIO_SetBits(MTR2_GPIO_PORT,GPIO_Pin_2);GPIO_ResetBits(MTR2_GPIO_PORT,GPIO_Pin_9);}//��ʱ��
//#define MTR2_BRAKE			GPIO_ResetBits(MTR2_GPIO_PORT,MTR2_GPIO_PIN);

//#define MTR3_GPIO_PORT    	GPIOB
//#define MTR3_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR3_GPIO_PIN		GPIO_Pin_12|GPIO_Pin_13
//#define MTR3_CW				{GPIO_ResetBits(MTR3_GPIO_PORT,GPIO_Pin_12);GPIO_SetBits(MTR3_GPIO_PORT,GPIO_Pin_13);}//˳ʱ��
//#define MTR3_CCW			{GPIO_SetBits(MTR3_GPIO_PORT,GPIO_Pin_12);GPIO_ResetBits(MTR3_GPIO_PORT,GPIO_Pin_13);}//��ʱ��
//#define MTR3_BRAKE			GPIO_ResetBits(MTR3_GPIO_PORT,MTR3_GPIO_PIN);

//#define MTR4_GPIO_PORT    	GPIOB
//#define MTR4_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR4_GPIO_PIN		GPIO_Pin_14|GPIO_Pin_15
//#define MTR4_CW				{GPIO_ResetBits(MTR4_GPIO_PORT,GPIO_Pin_14);GPIO_SetBits(MTR4_GPIO_PORT,GPIO_Pin_15);}//˳ʱ��
//#define MTR4_CCW			{GPIO_SetBits(MTR4_GPIO_PORT,GPIO_Pin_14);GPIO_ResetBits(MTR4_GPIO_PORT,GPIO_Pin_15);}//��ʱ��
//#define MTR4_BRAKE			GPIO_ResetBits(MTR4_GPIO_PORT,MTR4_GPIO_PIN);

//void MTR_CarBrakeAll(void);		//С��ɲ��
//void MTR_CarRight(void);			//С��ǰ��
//void MTR_CarLeft(void);		//С������
//void MTR_CarBack(void);			//С��˳ʱ��ת
//void MTR_CarForward(void);			//С����ʱ��ת
//void MTR_GPIOInit(void);

void MTR_FanPosRotation(void);		//������ת
void MTR_FanReversal(void);		//���ȷ�ת
void MTR_FanBrake(void);		//ֹͣת��
#endif
