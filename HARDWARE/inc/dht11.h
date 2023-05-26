
#ifndef __DHT11_H
#define __DHT11_H 
 
#define DHT11_IO_IN()  {GPIOA->CRL &= 0XF0FFFFFF;GPIOA->CRL |= 8<<4*6;}       //PA6����DHT11������Ϊ���
#define DHT11_IO_OUT() {GPIOA->CRL &= 0XF0FFFFFF;GPIOA->CRL |= 3<<4*6;}       //PA6����DHT11������Ϊ����
										   
#define DHT11_OUT(x)    GPIO_WriteBit(GPIOA, GPIO_Pin_6, (BitAction)x)  //PA6����DHT11
#define DHT11_DQ_IN     GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_6)        //PA6����DHT11	

////IO��������
//#define DHT11_IO_IN() {GPIOA->CRL&=0xFFFFFFF0;GPIOA->CRL|=8<<0;}//����IO��Ϊ����ģʽ
//#define DHT11_IO_OUT() {GPIOA->CRL&=0xFFFFFFF0;GPIOA->CRL|=3<<0;}//����IO��Ϊ���ģʽ

////IO����
//#define DHT11_DQ_OUT PAout(0)//���ݶ˿�
//#define DHT11_DQ_IN PAin(0)//���ݶ˿�

void DHT11_Rst(void);
char DHT11_Check(void);
char DHT11_Read_Bit(void);
char DHT11_Read_Byte(void);
char dht11_read_data(char *temp, char *humi);
char dht11_init(void);

#endif















