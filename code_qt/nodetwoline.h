#ifndef NODETWOLINE_H
#define NODETWOLINE_H

#include <QWidget>
#include "widget.h"

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class nodetwoline;
}
QT_END_NAMESPACE


class nodetwoline : public QWidget
{
    Q_OBJECT

public:
    explicit nodetwoline(QWidget *parent = 0);
    ~nodetwoline();
    /* Chart */
    void Init_Chart_NodeTwo();

signals:
    void Signal_OutputData();

    void Signal_Return();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::nodetwoline *ui;
};

#endif // NODETWOLINE_H
