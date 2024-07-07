#ifndef NODETHR_H
#define NODETHR_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class nodeThr;
}

class nodeThr : public QWidget
{
    Q_OBJECT

public:
    explicit nodeThr(QWidget *parent = 0);
    ~nodeThr();   

signals:

    void Signal_Return();

    void Signal_ShowLine3();


private slots:
    void on_pushButton_Return_clicked();

    void Slot_CurrentTime();

    void Slot_SerialProcess(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::nodeThr *ui;
};

#endif // NODETHR_H
