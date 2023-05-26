

#include "stm32f10x.h"  //������Ҫ��ͷ�ļ�
#include "BEEP.h"      //������Ҫ��ͷ�ļ� 
#include "delay.h"      //������Ҫ��ͷ�ļ�


void BEEP_Init(void)
{
	
		GPIO_InitTypeDef GPIO_InitStructure;                  //����һ��IO�˿ڲ����ṹ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE); //ʹ��PA�˿�ʱ��
	

    // ����BEEP�ܽ�Ϊ�������ģʽ
    GPIO_InitStructure.GPIO_Pin = BEEP_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(BEEP_GPIO_PORT, &GPIO_InitStructure);
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����͵�ƽ
}

//GPIO_SetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����ߵ�ƽ
//GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����͵�ƽ

void beep_on(void)
{
	GPIO_SetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����ߵ�ƽ
	//delay_us(5000);
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����͵�ƽ
}
void beep_off(void){
	
	GPIO_ResetBits(BEEP_GPIO_PORT, BEEP_PIN); // ����BEEP����͵�ƽ
}
