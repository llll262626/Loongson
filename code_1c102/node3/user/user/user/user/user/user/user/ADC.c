/*
 * ADC.c
 *
 * created: 2024/5/17
 *  author: 
 */
#include "ADC.h"
PMU_TypeDef *g_pmu;
/*
void adc_init()
{
    PMU_ChipCtrl |= (0x0f<<20);// ͨ��ʹ��
}

int adc_read(int ch)// ch ��ͨ���ţ�ch = 0 1 4 5 6 7��
{
    PMU_AdcCtrl = (0x01<<8) | (ch);// ����ͨ�� ch ��ʼ�ɼ���
    while(PMU_AdcCtrl&0x80);// �ȴ��ɼ���ɡ� ADCCTRL->run ��Ϊ1������ADCת���������� ADCCTRL->run �Զ�����Ϊ0����ʾת����ɡ�
    return (int)PMU_AdcDat;// ����ֵ���� volatile unsigned int AdcDat ��һ��12λ��
}
*/


void adc_init()
{
    g_pmu->CHIPCTRL |= (0x0f<<20);// ͨ��ʹ��
}

int adc_read(int ch)// ch ��ͨ���ţ�ch = 0 1 4 5 6 7��
{
    g_pmu->ADC_CTRL = (0x01<<8) | (ch);// ����ͨ�� ch ��ʼ�ɼ���
    while(g_pmu->ADC_CTRL&0x80);// �ȴ��ɼ���ɡ� ADCCTRL->run ��Ϊ1������ADCת���������� ADCCTRL->run �Զ�����Ϊ0����ʾת����ɡ�
    return (int)g_pmu->ADC_DAT;// ����ֵ���� volatile unsigned int AdcDat ��һ��12λ��
}

