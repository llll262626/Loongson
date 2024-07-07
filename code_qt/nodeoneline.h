#ifndef NODEONELINE_H
#define NODEONELINE_H

#include <QWidget>
#include "widget.h"

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class nodeoneline;
}
QT_END_NAMESPACE


class nodeoneline : public QWidget
{
    Q_OBJECT

public:
    explicit nodeoneline(QWidget *parent = 0);
    ~nodeoneline();

    /* Chart */
    void Init_Chart_NodeOne();

signals:
    void Signal_OutputData();

    void Signal_Return();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::nodeoneline *ui;
};

#endif // NODEONELINE_H
