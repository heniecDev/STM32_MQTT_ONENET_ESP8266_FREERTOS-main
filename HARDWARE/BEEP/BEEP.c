

#include "stm32f10x.h"  //包含需要的头文件
#include "BEEP.h"      //包含需要的头文件 
#include "delay.h"      //包含需要的头文件


void BEEP_Init(void)
{
	
		GPIO_InitTypeDef GPIO_InitStructure;                  //定义一个IO端口参数结构体
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); //使能PA端口时钟
	

    // 配置BEEP管脚为推挽输出模式
    GPIO_InitStructure.GPIO_Pin = BEEP_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(BEEP_GPIO_PORT, &GPIO_InitStructure);
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出低电平
}

//GPIO_SetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出高电平
//GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出低电平

void beep_on(void)
{
	GPIO_SetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出高电平
	//delay_us(5000);
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出低电平
}
void beep_off(void){
	
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // 设置BEEP输出低电平
}
