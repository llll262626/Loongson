#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mqtt/qmqtt.h"
#include "QMessageAuthenticationCode"
#include "QtSerialPort/QSerialPort"
#include "QtSerialPort/QSerialPortInfo"
#include "QtCharts/QChart"
#include "QtCharts/QSplineSeries"
#include "QtCharts/QAbstractAxis"
#include "QtCharts/QChartView"
#include "QValueAxis"
#include "QTimer"
#include "QMessageBox"
#include "QDateTime"
#include "QPalette"
#include "QFile"
#include "QDir"
#include "QFileDialog"
#include "QThread"
#include "QDateTimeAxis"
#include "nodeone.h"
#include "nodetwo.h"
#include "nodethr.h"
#include "setting.h"
#include "mywork.h"
#include "nodeoneline.h"
#include "nodetwoline.h"
#include "nodethrline.h"

#define MAX_X       9
#define MAX_Y       39
#define MAX_Y_HUMI  99
#define MAX_Y_LIGHT 499

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    /* MQTT */
    QMQTT::Client *mqtt_client;
    void Init_MqttClient();

    /* SerialPort */
    QSerialPort serial_node;
    QTimer *serial_timer;
    void Init_SerialPort();

    /* Timer */
    void Init_Timer();

    /* CurrentTime */
    QTimer *currentTime;
    void Init_CurrentTime();

    QThread *threadChartTimer;

signals:
    void Signal_CurrentTime();

    void Signal_SerialProcess();

private slots:

    void mqttConnected();

    void Slot_SerialReadBuffer();

    void on_pushButton_clicked();

    void Slot_Return();

    void Slot_ChartTimer();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void Slot_SerialProcess();

    void on_pushButton_4_clicked();

    void Slot_Return_Line1();

    void Slot_Show_Line1();

    void Slot_Return_Line2();

    void Slot_Show_Line2();

    void Slot_Return_Line3();

    void Slot_Show_Line3();

private:
    Ui::Widget *ui;

    QThread *serial_thread;
    QThread *warning_thread;

    QString m_strProductKey,m_strDeviceName,m_strDeviceSecret,m_strHostName,m_strRegionId,m_strPubTopic,m_strSubTopic,message;


};

extern QChart *chart_nodeOne;
extern QSplineSeries *Series_nodeOne_One;
extern QSplineSeries *Series_nodeOne_Two;
extern QSplineSeries *Series_nodeOne_Thr;
extern QDateTimeAxis *axisX_nodeOne;
extern QValueAxis *axisY_nodeOne_temp;
extern QValueAxis *axisY_nodeOne_humi;
extern QValueAxis *axisY_nodeOne_light;
extern QChart *chart_nodeTwo;
extern QSplineSeries *Series_nodeTwo_One;
extern QSplineSeries *Series_nodeTwo_Two;
extern QSplineSeries *Series_nodeTwo_Thr;
extern QDateTimeAxis *axisX_nodeTwo;
extern QValueAxis *axisY_nodeTwo;
extern QValueAxis *axisY_humi_nodeTwo;
extern QValueAxis *axisY_light_nodeTwo;
extern QChart *chart_nodeThr;
extern QChart *chart_nodeThr_humi;
extern QChart *chart_nodeThr_light;
extern QSplineSeries *Series_nodeThr_One;
extern QSplineSeries *Series_nodeThr_Two;
extern QSplineSeries *Series_nodeThr_Thr;
extern QDateTimeAxis *axisX_nodeThr;
extern QDateTimeAxis *axisX_nodeThr_humi;
extern QDateTimeAxis *axisX_nodeThr_light;
extern QValueAxis *axisY_nodeThr;
extern QValueAxis *axisY_humi_nodeThr;
extern QValueAxis *axisY_light_nodeThr;
extern QDateTime current_datetime;
extern QString strCurrentTime;
extern QString temp1;
extern QString temp2;
extern QString temp3;
extern QString humi1;
extern QString humi2;
extern QString humi3;
extern QString light1;
extern QString light2;
extern QString light3;
extern QString power1;
extern QString power2;
extern QString power3;
extern QString currentTimeMessage;
extern char state_nodeOne;
extern char state_nodeTwo;
extern char state_nodeThr;
extern qreal temp_max;
extern qreal temp_min;
extern qreal humi_max;
extern qreal humi_min;
extern qreal light_max;
extern qreal light_min;
extern qreal power_min;
extern int error1;
extern int error2;
extern int error3;
extern int error4;
extern int error5;
extern int error6;
extern int error7;
extern int error8;
extern int error9;
extern int error10;
extern int error11;
extern int error12;
extern int number_on;
extern int number_off;

#endif // WIDGET_H
