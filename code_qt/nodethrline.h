#ifndef NODETHRLINE_H
#define NODETHRLINE_H

#include <QWidget>
#include "widget.h"

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class nodethrline;
}
QT_END_NAMESPACE


class nodethrline : public QWidget
{
    Q_OBJECT

public:
    explicit nodethrline(QWidget *parent = 0);
    ~nodethrline();

    /* Chart */
    void Init_Chart_NodeThr();

signals:
    void Signal_OutputData();

    void Signal_Return();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::nodethrline *ui;
};

#endif // NODETHRLINE_H
