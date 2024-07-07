#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    temp_max = ui->doubleSpinBox_temp_max->value();
    temp_min = ui->doubleSpinBox_temp_min->value();
    humi_max = ui->doubleSpinBox_humi_max->value();
    humi_min = ui->doubleSpinBox_humi_min->value();
    light_max = ui->doubleSpinBox_light_max->value();
    light_min = ui->doubleSpinBox_light_min->value();
    power_min = ui->doubleSpinBox_power->value();
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_clicked()
{
    emit Signal_Return();
}

void Setting::on_doubleSpinBox_temp_max_valueChanged(double arg1)
{
    temp_max = arg1;
}

void Setting::on_doubleSpinBox_temp_min_valueChanged(double arg1)
{
    temp_min = arg1;
}

void Setting::on_doubleSpinBox_humi_max_valueChanged(double arg1)
{
    humi_max = arg1;
}

void Setting::on_doubleSpinBox_humi_min_valueChanged(double arg1)
{
    humi_min = arg1;
}

void Setting::on_doubleSpinBox_light_max_valueChanged(double arg1)
{
    light_max = arg1;
}

void Setting::on_doubleSpinBox_light_min_valueChanged(double arg1)
{
    light_min = arg1;
}

void Setting::on_doubleSpinBox_power_valueChanged(double arg1)
{
    power_min = arg1;
}
