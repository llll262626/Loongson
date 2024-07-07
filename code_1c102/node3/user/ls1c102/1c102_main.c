/*
    rtc_test
    实验内容设置时间，上位机显示时间

*/
#include "ls1x.h"
#include "config.h"
#include "ls1x_gpio.h"
#include "ls1x_rtc.h"
#include "ls1x_latimer.h"
#include "ls1c102_ptimer.h"
#include "ls1c102_interrupt.h"
#include "rtc_test.h"
#include "ls1x_printf.h"
#include "ls1x_uart.h"
#include "gpio.h"
#include "BH1750.h"
#include "UserGpio.h"
#include "ls1x_string.h"
#include "AHT20.h"
#include "iic_bus.h"


extern void WDG_DogFeed();
extern tsRtcTime rtc_param;

unsigned char receive_flag=0;//串口
extern uint8_t receive_buf[];
extern bool flag_;

unsigned int BH=0;//光照


unsigned char flag_print=0;

void BH1750_collect()//光照采集
{
    BH=Multiple_Read_BH1750();
}

void AHT20_collect()//温湿度采集
{
    collect_proc();
}

void rtc_collect()//实时时钟采集
{
    //uint8_t new_time=rtc_param.sec;
    RtcUpdateData(1, &rtc_param);
    //if(rtc_param.sec!=new_time)
    //{
       printf("date is: %u/%u/%u--%u:%u:%u\r\n",rtc_param.year+2000,rtc_param.mon,rtc_param.day,rtc_param.hour,rtc_param.min,rtc_param.sec);
    //}
}
void uart_jieshou_proc()//串口接受处理函数   放中断里面
{
    if(receive_flag==1)
    {
        receive_flag=0;
        if(strncmp(receive_buf,"33",2)==0)
        {
            memset(receive_buf,0,5);
            flag_print=1;
        }
    }

}
void printf_proc()
{
    if(flag_print==1)
    {
        printf("3,%d.%d,%d.%d,%d,%d.%d0",wendu/10,wendu%10,shidu/10,shidu%10,BH);
        flag_print=0;
    }
}
extern unsigned int cnt_400ms;
extern unsigned int cnt_500ms;
void delay_500ms_proc()//定时器延时500ms
{
    while(cnt_500ms<500);
    cnt_500ms=0;
}
int main(void)
{

    rtc_set_time(24, 1, 25, 16, 30, 0);//设置年月日加时间
    
    
    gpio_write_pin(20,0);                   //关20灯
    gpio_init(63,1);
    gpio_write(63,0);                       //关蜂鸣器
    

    timer_init(1);                          //定时器初始化  1--1ms
    
    gpio_pin_remap(5,0);                    //iic引脚初始化
    gpio_pin_remap(4,0);

    for (;;)
    {
        WDG_DogFeed();
        AHT20_collect();//good温湿度          scl_gpio4     sda_gpio5
        BH1750_collect();//good光照           scl_gpio4     sda_gpio5
    }
    return 0;
}














