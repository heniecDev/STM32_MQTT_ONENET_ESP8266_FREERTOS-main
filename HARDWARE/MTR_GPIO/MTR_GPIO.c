#include "MTR_GPIO.h"

//正转
void MTR_FanPosRotation(void){
		MTR1_CW
}
//反转
void MTR_FanReversal(void){
		MTR1_CCW;
}
//停止
void MTR_FanBrake(void){
		MTR1_BRAKE;
}



////刹车
//void MTR_CarBrakeAll(void){
//	MTR1_BRAKE;
//	MTR2_BRAKE;
//	MTR3_BRAKE;
//	MTR4_BRAKE;
//}

////前进
//void MTR_CarRight(void){
//	MTR1_CW;
//	MTR2_CW;
//	MTR3_CCW;
//	MTR4_CCW;
//}

////后退
//void MTR_CarLeft(void){
//	MTR1_CCW;
//	MTR2_CCW;
//	MTR3_CW;
//	MTR4_CW;
//}

////顺时针
//void MTR_CarBack(void){
//	MTR1_CCW;
//	MTR2_CCW;
//	MTR3_CCW;
//	MTR4_CCW;
//}

////逆时针
//void MTR_CarForward(void){
//	MTR1_CW;
//	MTR2_CW;
//	MTR3_CW;
//	MTR4_CW;
//}

void MTR_GPIOInit(void){
	GPIO_InitTypeDef GPIO_InitStructure;
//	RCC_APB2PeriphClockCmd(MTR1_GPIO_CLK|MTR2_GPIO_CLK|MTR3_GPIO_CLK|MTR4_GPIO_CLK,ENABLE);//时钟
	RCC_APB2PeriphClockCmd(MTR1_GPIO_CLK,ENABLE);//时钟
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;//推挽输出
	//电机1
	GPIO_InitStructure.GPIO_Pin = MTR1_GPIO_PIN;
	GPIO_Init(MTR1_GPIO_PORT, &GPIO_InitStructure);
	
}
