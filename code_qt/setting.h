#ifndef SETTING_H
#define SETTING_H

#include <QWidget>

#include "widget.h"

namespace Ui {
class Setting;
}

class Setting : public QWidget
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = 0);
    ~Setting();

signals:

    void Signal_Return();

private slots:
    void on_pushButton_clicked();

//    void Slot_SerialProcess();

    void on_doubleSpinBox_temp_max_valueChanged(double arg1);

    void on_doubleSpinBox_temp_min_valueChanged(double arg1);

    void on_doubleSpinBox_humi_max_valueChanged(double arg1);

    void on_doubleSpinBox_humi_min_valueChanged(double arg1);

    void on_doubleSpinBox_light_max_valueChanged(double arg1);

    void on_doubleSpinBox_light_min_valueChanged(double arg1);

    void on_doubleSpinBox_power_valueChanged(double arg1);

private:
    Ui::Setting *ui;
};

#endif // SETTING_H
