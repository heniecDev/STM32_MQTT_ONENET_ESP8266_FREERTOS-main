#ifndef __MTR_GPIO_H
#define __MTR_GPIO_H

#include "stm32f10x.h"

/*
	小车四轮驱动
	电机1：右上
	电机2：右下
	电机3：左上
	电机4：左下
*/
#define MTR1_GPIO_PORT		GPIOB
#define MTR1_GPIO_CLK 	    RCC_APB2Periph_GPIOB
#define MTR1_GPIO_PIN		GPIO_Pin_6|GPIO_Pin_7
#define MTR1_CW				{GPIO_ResetBits(MTR1_GPIO_PORT,GPIO_Pin_6);GPIO_SetBits(MTR1_GPIO_PORT,GPIO_Pin_7);}//顺时针
#define MTR1_CCW			{GPIO_SetBits(MTR1_GPIO_PORT,GPIO_Pin_6);GPIO_ResetBits(MTR1_GPIO_PORT,GPIO_Pin_7);}//逆时针
#define MTR1_BRAKE			GPIO_ResetBits(MTR1_GPIO_PORT,MTR1_GPIO_PIN);

//#define MTR2_GPIO_PORT    	GPIOB
//#define MTR2_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR2_GPIO_PIN		GPIO_Pin_2|GPIO_Pin_9
//#define MTR2_CW				{GPIO_ResetBits(MTR2_GPIO_PORT,GPIO_Pin_2);GPIO_SetBits(MTR2_GPIO_PORT,GPIO_Pin_9);}//顺时针
//#define MTR2_CCW			{GPIO_SetBits(MTR2_GPIO_PORT,GPIO_Pin_2);GPIO_ResetBits(MTR2_GPIO_PORT,GPIO_Pin_9);}//逆时针
//#define MTR2_BRAKE			GPIO_ResetBits(MTR2_GPIO_PORT,MTR2_GPIO_PIN);

//#define MTR3_GPIO_PORT    	GPIOB
//#define MTR3_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR3_GPIO_PIN		GPIO_Pin_12|GPIO_Pin_13
//#define MTR3_CW				{GPIO_ResetBits(MTR3_GPIO_PORT,GPIO_Pin_12);GPIO_SetBits(MTR3_GPIO_PORT,GPIO_Pin_13);}//顺时针
//#define MTR3_CCW			{GPIO_SetBits(MTR3_GPIO_PORT,GPIO_Pin_12);GPIO_ResetBits(MTR3_GPIO_PORT,GPIO_Pin_13);}//逆时针
//#define MTR3_BRAKE			GPIO_ResetBits(MTR3_GPIO_PORT,MTR3_GPIO_PIN);

//#define MTR4_GPIO_PORT    	GPIOB
//#define MTR4_GPIO_CLK 	    RCC_APB2Periph_GPIOB
//#define MTR4_GPIO_PIN		GPIO_Pin_14|GPIO_Pin_15
//#define MTR4_CW				{GPIO_ResetBits(MTR4_GPIO_PORT,GPIO_Pin_14);GPIO_SetBits(MTR4_GPIO_PORT,GPIO_Pin_15);}//顺时针
//#define MTR4_CCW			{GPIO_SetBits(MTR4_GPIO_PORT,GPIO_Pin_14);GPIO_ResetBits(MTR4_GPIO_PORT,GPIO_Pin_15);}//逆时针
//#define MTR4_BRAKE			GPIO_ResetBits(MTR4_GPIO_PORT,MTR4_GPIO_PIN);

//void MTR_CarBrakeAll(void);		//小车刹车
//void MTR_CarRight(void);			//小车前进
//void MTR_CarLeft(void);		//小车后退
//void MTR_CarBack(void);			//小车顺时针转
//void MTR_CarForward(void);			//小车逆时针转
//void MTR_GPIOInit(void);

void MTR_FanPosRotation(void);		//风扇正转
void MTR_FanReversal(void);		//风扇反转
void MTR_FanBrake(void);		//停止转动
#endif
