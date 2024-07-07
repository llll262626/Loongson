#include "mywork.h"

MyWork::MyWork(QObject *parent) : QObject(parent)
{

}

void MyWork::warningWorking()
{
    unsigned int index = 0x0000;
    if(state_nodeOne)
    {
        if((temp1.toDouble() >= temp_max) || (temp1.toDouble() <= temp_min))
        {
            index |= 0x01;
//            emit Signal_Error(1);
        }
        if((humi1.toDouble() >= humi_max) || (humi1.toDouble() <= humi_min))
        {
            index |= 0x02;
//            emit Signal_Error(2);
        }
        if((light1.toDouble() >= light_max) || (light1.toDouble() <= light_min))
        {
            index |= 0x04;
//            emit Signal_Error(3);
        }
        if(power1.toDouble() < power_min)
        {
            index |= 0x08;
//            emit Signal_Error(10);
        }
    }
    if(state_nodeTwo)
    {
        if((temp2.toDouble() >= temp_max) || (temp2.toDouble() <= temp_min))
        {
            index |= 0x10;
//            emit Signal_Error(4);
        }
        if((humi2.toDouble() >= humi_max) || (humi2.toDouble() <= humi_min))
        {
            index |= 0x20;
//            emit Signal_Error(5);
        }
        if((light2.toDouble() >= light_max) || (light2.toDouble() <= light_min))
        {
            index |= 0x40;
//            emit Signal_Error(6);
        }
        if(power2.toDouble() < power_min)
        {
            index |= 0x80;
//            emit Signal_Error(11);
        }
    }
    if(state_nodeThr)
    {
        if((temp3.toDouble() >= temp_max) || (temp3.toDouble() <= temp_min))
        {
            index |= 0x100;
//            emit Signal_Error(7);
        }
        if((humi3.toDouble() >= humi_max) || (humi3.toDouble() <= humi_min))
        {
            index |= 0x200;
//            emit Signal_Error(8);
        }
        if((light3.toDouble() >= light_max) || (light3.toDouble() <= light_min))
        {
            index |= 0x400;
//            emit Signal_Error(9);
        }
        if(power3.toDouble() < power_min)
        {
            index |= 0x800;
//            emit Signal_Error(12);
        }

    }
    emit Signal_Error(index);
}
