
#ifndef __DHT11_H
#define __DHT11_H 
 
#define DHT11_IO_IN()  {GPIOA->CRL &= 0XF0FFFFFF;GPIOA->CRL |= 8<<4*6;}       //PA6控制DHT11，设置为输出
#define DHT11_IO_OUT() {GPIOA->CRL &= 0XF0FFFFFF;GPIOA->CRL |= 3<<4*6;}       //PA6控制DHT11，设置为输入
										   
#define DHT11_OUT(x)    GPIO_WriteBit(GPIOA, GPIO_Pin_6, (BitAction)x)  //PA6控制DHT11
#define DHT11_DQ_IN     GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_6)        //PA6控制DHT11	

////IO方向设置
//#define DHT11_IO_IN() {GPIOA->CRL&=0xFFFFFFF0;GPIOA->CRL|=8<<0;}//设置IO口为输入模式
//#define DHT11_IO_OUT() {GPIOA->CRL&=0xFFFFFFF0;GPIOA->CRL|=3<<0;}//设置IO口为输出模式

////IO操作
//#define DHT11_DQ_OUT PAout(0)//数据端口
//#define DHT11_DQ_IN PAin(0)//数据端口

void DHT11_Rst(void);
char DHT11_Check(void);
char DHT11_Read_Bit(void);
char DHT11_Read_Byte(void);
char dht11_read_data(char *temp, char *humi);
char dht11_init(void);

#endif















