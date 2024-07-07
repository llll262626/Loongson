/*
 * DHT11.c
 *
 * created: 2024/5/16
 *  author: 
 */

#include "DHT11.h"

uchar rec_dat[5];
uchar u=0;


void DHT11_Delay_us(unsigned int us)
{
    unsigned int differ = 0xffff - us - 5;
    //��ʱ������
    TIM_InitStruct.TIME_START = 0x01;							//������ʱ��
    while(differ < 0xffff - 5)
    {
        differ = TIM_GetCounter();    //��ȡTIMx�ļ���ֵ
    }
    //��ʱ���ر�
    TIM_InitStruct.TIME_START = 0x00;
}

void DHT11_start()
{
   gpio_init(13,1);
   gpio_write_pin(GPIO_PIN_13, 1);
   //delay_us(2);
   DHT11_Delay_us(2);
   gpio_write_pin(GPIO_PIN_13, 0);
   //delay_ms(20);   //������ʱ18ms����
   DHT11_Delay_us(20000);
   gpio_write_pin(GPIO_PIN_13, 1);
   //delay_us(30);
   DHT11_Delay_us(30);
   //gpio_init(13,0);
   //delay_us(30);   //���� ��ʱ 20~40us��ȡ�м�ֵ 30us
   while(gpio_read(13)==0);
   while(gpio_read(13)==1);
}
/*------------------------------------------------
              ���հ�λ������
------------------------------------------------*/
uchar DHT11_Read_Bit(void)
{
    while(gpio_read(13)==1);
    while(gpio_read(13)==0);
    //delay_us(40);
    DHT11_Delay_us(40);
    if(gpio_read(13)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

uchar DHT11_Read_Byte(void)
{
    uchar dat = 0;
    uchar i;
    for(i = 0; i < 8; i++)
    {
        dat <<= 1;
        dat |= DHT11_Read_Bit();
    }
    return dat;
}
/*
uchar DHT11_rec_byte()      //����һ���ֽ�
{
  unsigned char i,dat=0;
  //unsigned char retry = 0;
  
  for(i=0;i<8;i++)    //�Ӹߵ������ν���8λ����
   {
      while(!gpio_read(13));   //�ȴ�50us�͵�ƽ��ȥ

      delay_us(40);     //��ʱ60us�������Ϊ��������Ϊ1������Ϊ0
      dat<<=1;//��λ����λ���㣩ʹ��ȷ����8λ���ݣ�����Ϊ0ʱֱ����λ
      if(gpio_read(13))    //����Ϊ1ʱ��ʹdat��1����������1
      {
          dat+=1;
      }
      while(gpio_read(13))//????????????????????????????????????????????????????????????һֱ�Ǹߵ�ƽ
   }
    return dat;
}
*/
/*------------------------------------------------
              ����40bit���ݣ��������ʪ�ȣ�
1.�����Ȱ�data�����ߣ�io����Ϊ���룩��
2.�ӻ���data�����ͣ�������ȡdata�ߵ�ƽ��ֱ���͵�ƽ��������Լ50us��
  �ӻ�����data�ߺ��ӳ�40us���ң�28~70us֮�䣩�����ٴζ�ȡdata�ߵ�ƽ�����Ϊ�͵�ƽ����Ϊ��0�������Ϊ�ߵ�ƽ����Ϊ��1����
3.�����ظ�����1,2�����ۼ�40�Ρ�
------------------------------------------------*/
void DHT11_receive(unsigned int *humi, unsigned int *temp)      //����40λ������
{
    uchar buf[5];
    uchar i;
    DHT11_start();//������ʼ�źţ�
    for(i = 0; i < 5; i++)
    {
        buf[i] = DHT11_Read_Byte();
    }
    if((buf[0] + buf[1] + buf[2] + buf[3]) == buf[4])
    {
        *humi = buf[0] << 8 | buf[1];
        *temp = buf[2] << 8 | buf[3];
    }
    
    //if(!gpio_read(13))//ok
    //{
        //printf("11111111\r\n");
        //u=2;
        //while(!gpio_read(13));   //�ȴ�����
        //printf("22222222222222\r\n");
        //while(gpio_read(13));  //���ߺ���ʱ80us
        //R_H=DHT11_rec_byte();    //����ʪ�ȸ߰�λ
        //R_L=DHT11_rec_byte();    //����ʪ�ȵͰ�λ
        //T_H=DHT11_rec_byte();    //�����¶ȸ߰�λ
        //T_L=DHT11_rec_byte();    //�����¶ȵͰ�λ
        //revise=DHT11_rec_byte(); //����У��λ

        //delay_us(50);    //����

        //if((R_H+R_L+T_H+T_L)==revise)      //���һ�ֽ�ΪУ��λ��У���Ƿ���ȷ
        //{
            //u=3;
            //RH=R_H;
            //RL=R_L;
            //TH=T_H;
            //TL=T_L;
        //}
        //rec_dat[0]=RH;//ʪ������
        //rec_dat[1]=RL;//ʪ��С��
        //rec_dat[2]=TH;//�¶�����
        //rec_dat[3]=TL;//�¶�С��
    //}
}


