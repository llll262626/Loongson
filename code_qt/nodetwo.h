#ifndef NODETWO_H
#define NODETWO_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class nodeTwo;
}

class nodeTwo : public QWidget
{
    Q_OBJECT

public:
    explicit nodeTwo(QWidget *parent = 0);
    ~nodeTwo();

signals:

    void Signal_Return();

    void Signal_ShowLine2();

private slots:

    void Slot_CurrentTime();

    void Slot_SerialProcess(int index);

    void on_pushButton_Return_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::nodeTwo *ui;
};

#endif // NODETWO_H
