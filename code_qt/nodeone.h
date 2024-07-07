#ifndef NODEONE_H
#define NODEONE_H

#include <QWidget>

#include "widget.h"


QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class nodeOne;
}
QT_END_NAMESPACE

class nodeOne : public QWidget
{
    Q_OBJECT

public:
    explicit nodeOne(QWidget *parent = 0);
    ~nodeOne();

signals:

    void Signal_Return();

    void Signal_ShowLine1();

private slots:

    void on_pushButton_Return_clicked();

    void Slot_CurrentTime();

    void on_pushButton_clicked();

    void Slot_SerialProcess(int index);

    void on_pushButton_2_clicked();

private:
    Ui::nodeOne *ui;
};

#endif // NODEONE_H
