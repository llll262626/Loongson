#ifndef MYWORK_H
#define MYWORK_H

#include <QThread>
#include "widget.h"

class MyWork : public QObject
{
    Q_OBJECT
public:
    explicit MyWork(QObject *parent = nullptr);

    // 工作函数
    void warningWorking();

signals:

    void Signal_Error(int index);

public slots:
};

#endif // MYWORK_H
