#include "widget.h"
#include "ui_widget.h"

QChart *chart_nodeOne;
QSplineSeries *Series_nodeOne_One;
QSplineSeries *Series_nodeOne_Two;
QSplineSeries *Series_nodeOne_Thr;
QDateTimeAxis *axisX_nodeOne;
QValueAxis *axisY_nodeOne_temp;
QValueAxis *axisY_nodeOne_humi;
QValueAxis *axisY_nodeOne_light;

QChart *chart_nodeTwo;
QSplineSeries *Series_nodeTwo_One;
QSplineSeries *Series_nodeTwo_Two;
QSplineSeries *Series_nodeTwo_Thr;
QDateTimeAxis *axisX_nodeTwo;
QValueAxis *axisY_nodeTwo;
QValueAxis *axisY_humi_nodeTwo;
QValueAxis *axisY_light_nodeTwo;

QChart *chart_nodeThr;
QChart *chart_nodeThr_humi;
QChart *chart_nodeThr_light;
QSplineSeries *Series_nodeThr_One;
QSplineSeries *Series_nodeThr_Two;
QSplineSeries *Series_nodeThr_Thr;
QDateTimeAxis *axisX_nodeThr;
QDateTimeAxis *axisX_nodeThr_humi;
QDateTimeAxis *axisX_nodeThr_light;
QValueAxis *axisY_nodeThr;
QValueAxis *axisY_humi_nodeThr;
QValueAxis *axisY_light_nodeThr;

QDateTime current_datetime;
QString strCurrentTime;
QString currentTimeMessage;

QString serialReadBuffer;

QString temp1;
QString temp2;
QString temp3;
QString humi1;
QString humi2;
QString humi3;
QString light1;
QString light2;
QString light3;
QString power1;
QString power2;
QString power3;
int number_on;
int number_off = 3;

QPalette pal;

nodeOne *node_one;
nodeTwo *node_two;
nodeThr *node_thr;
Setting *setting;
nodeoneline *line1;
nodetwoline *line2;
nodethrline *line3;

char state_nodeOne;
char state_nodeTwo;
char state_nodeThr;

qreal temp_max;
qreal temp_min;
qreal humi_max;
qreal humi_min;
qreal light_max;
qreal light_min;
qreal power_min;

int error1;
int error2;
int error3;
int error4;
int error5;
int error6;
int error7;
int error8;
int error9;
int error10;
int error11;
int error12;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    Init_MqttClient();
//    Init_SerialPort();
    Init_Timer();
    Init_CurrentTime();

    pal = window()->palette();
    pal.setColor(QPalette::Window, QRgb(0x9e8965));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));
    window()->setPalette(pal);

    QFont ft;
    ft.setPointSize(14);
    ui->label_currentTime->setFont(ft);

    /* nodeOne */
    node_one = new nodeOne(this);
    node_one->hide();
    connect(node_one, SIGNAL(Signal_Return()), this, SLOT(Slot_Return()));
    connect(this, SIGNAL(Signal_CurrentTime()), node_one, SLOT(Slot_CurrentTime()));

    line1 = new nodeoneline(this);
    line1->hide();
    connect(line1, SIGNAL(Signal_Return()), this, SLOT(Slot_Return_Line1()));
    connect(line1, SIGNAL(Signal_OutputData()), node_one, SLOT(on_pushButton_clicked()));
    connect(node_one, SIGNAL(Signal_ShowLine1()), this, SLOT(Slot_Show_Line1()));

    /* nodeTwo */
    node_two = new nodeTwo(this);
    node_two->hide();
    connect(node_two, SIGNAL(Signal_Return()), this, SLOT(Slot_Return()));
    connect(this, SIGNAL(Signal_CurrentTime()), node_two, SLOT(Slot_CurrentTime()));

    line2 = new nodetwoline(this);
    line2->hide();
    connect(line2, SIGNAL(Signal_Return()), this, SLOT(Slot_Return_Line2()));
    connect(line2, SIGNAL(Signal_OutputData()), node_two, SLOT(on_pushButton_clicked()));
    connect(node_two, SIGNAL(Signal_ShowLine2()), this, SLOT(Slot_Show_Line2()));

    /* nodeThr */
    node_thr = new nodeThr(this);
    node_thr->hide();
    connect(node_thr, SIGNAL(Signal_Return()), this, SLOT(Slot_Return()));
    connect(this, SIGNAL(Signal_CurrentTime()), node_thr, SLOT(Slot_CurrentTime()));

    line3 = new nodethrline(this);
    line3->hide();
    connect(line3, SIGNAL(Signal_Return()), this, SLOT(Slot_Return_Line3()));
    connect(line3, SIGNAL(Signal_OutputData()), node_thr, SLOT(on_pushButton_clicked()));
    connect(node_thr, SIGNAL(Signal_ShowLine3()), this, SLOT(Slot_Show_Line3()));

    /* Setting */
    setting = new Setting(this);
    setting->hide();
//    setting->setttingWorking();
    connect(setting, SIGNAL(Signal_Return()), this, SLOT(Slot_Return()));
//    connect(this, SIGNAL(Signal_SerialProcess()), setting, SLOT(setttingWorking()));
//    connect(setting, SIGNAL(Signal_Error(int)), this, SLOT(Slot_Warning_Process(int)));

    /* mywork */
    MyWork *warningWork = new MyWork;

    /* Thread */
    serial_thread = new QThread();
    Init_SerialPort();
    serial_node.moveToThread(serial_thread);
    serial_thread->start();
    connect(&serial_node, SIGNAL(readyRead()), this, SLOT(Slot_SerialReadBuffer()));
    warning_thread = new QThread();
    warningWork->moveToThread(warning_thread);
    warning_thread->start();
//    warningWork->warningWorking();
    connect(this, &Widget::Signal_SerialProcess, warningWork, [=]
    {
        warningWork->warningWorking();
    });
    connect(this, &Widget::Signal_SerialProcess, this, [=]
    {
        /* MQTT Process */
        message = "{'id': '14', 'params':{'temp1': " + temp1 + ",'humi1': " + humi1 + \
                  ",'light1': " + light1 + ",'temp2': " + temp2 + ",'humi2': " + humi2 + \
                  ",'light2': " + light2 + ",'temp3': " + temp3 + ",'humi3': " + humi3 + \
                  ",'light3': " + light3 + QString::number(number_on) + ",'number_off': " + QString::number(number_off) + \
                  ",'error1': " + QString::number(error1) + ",'error2': " + QString::number(error2) + ",'error3': " + QString::number(error3) + \
                  ",'error4': " + QString::number(error4) + ",'error5': " + QString::number(error5) + ",'error6': " + QString::number(error6) + \
                  ",'error7': " + QString::number(error7) + ",'error8': " + QString::number(error8) + ",'error9': " + QString::number(error9) + \
                  ",'error10': " + QString::number(error10) + ",'error11': " + QString::number(error11) + ",'error12': " + QString::number(error12) + "}}";
        QMQTT::Message send_msg(136, m_strPubTopic, message.toLocal8Bit(),0);

        mqtt_client->publish(send_msg);
    });

//    connect(warningWork, SIGNAL(Signal_Error(int)), this, SLOT(Slot_Warning_Process(int)));
    connect(warningWork, SIGNAL(Signal_Error(int)), node_one, SLOT(Slot_SerialProcess(int)));
    connect(warningWork, SIGNAL(Signal_Error(int)), node_two, SLOT(Slot_SerialProcess(int)));
    connect(warningWork, SIGNAL(Signal_Error(int)), node_thr, SLOT(Slot_SerialProcess(int)));

    threadChartTimer = new QThread();
    QTimer *chartTimer = new QTimer();
    chartTimer->moveToThread(threadChartTimer);
    chartTimer->setInterval(1000);
    threadChartTimer->start();
    connect(threadChartTimer, SIGNAL(started()), chartTimer, SLOT(start()));
    connect(chartTimer, SIGNAL(timeout()), this, SLOT(Slot_ChartTimer()));
}

Widget::~Widget()
{
    delete ui;
    serial_thread->quit();
    serial_thread->wait();
    warning_thread->quit();
    warning_thread->wait();
}

/* Init Functions */
void Widget::Init_MqttClient()
{
    mqtt_client = new QMQTT::Client;

    m_strProductKey = "k1cbjV9oWNC";
    m_strDeviceName = "device_1";
    m_strDeviceSecret = "b330385ae99da2db84bd26078917775d";
    m_strRegionId = "cn-shanghai";
    m_strHostName = m_strProductKey + ".iot-as-mqtt." + m_strRegionId + ".aliyuncs.com";
    m_strPubTopic = "/sys/k1cbjV9oWNC/device_1/thing/event/property/post";
    m_strSubTopic = "/sys/k1cbjV9oWNC/device_1/thing/service/property/set";

    QString clientId="ts1234";
    QString signmethod = "hmacsha1";
    QString timestamp ="500";
    QString message ="clientId"+clientId+"deviceName"+m_strDeviceName+"productKey"+m_strProductKey+"timestamp"+timestamp;

    mqtt_client->setHostName(m_strHostName);
    mqtt_client->setPort(1883);
    mqtt_client->setUsername(m_strDeviceName + "&" + m_strProductKey);
    mqtt_client->setClientId(clientId + "|securemode=3,signmethod=" + signmethod + ",timestamp="+timestamp+ "|");
    mqtt_client->setPassword(QMessageAuthenticationCode::hash(message.toLocal8Bit(), m_strDeviceSecret.toLocal8Bit(), QCryptographicHash::Sha1).toHex());
    mqtt_client->setKeepAlive(500);
    /* 绑定槽函数 */
    connect(mqtt_client,SIGNAL(connected()),this,SLOT(mqttConnected()));

    /* 连接mqtt服务器 */
    mqtt_client->connectToHost();
}

void Widget::Init_SerialPort()
{
    QList<QSerialPortInfo> serialPortInfo = QSerialPortInfo::availablePorts();
    if(serialPortInfo.isEmpty())
    {

        return;
    }

    serial_node.setPort(serialPortInfo[0]);
    serial_node.open(QIODevice::ReadWrite);
    serial_node.setBaudRate(QSerialPort::Baud115200);
    serial_node.setDataBits(QSerialPort::Data8);
    serial_node.setParity(QSerialPort::NoParity);
    serial_node.setStopBits(QSerialPort::OneStop);
    serial_node.setFlowControl(QSerialPort::NoFlowControl);

//    connect(&serial_node, SIGNAL(readyRead()), this, SLOT(Slot_SerialReadBuffer()));

}

void Widget::Init_Timer()
{
//    QTimer *chartTimer = new QTimer(this);
//    chartTimer->setInterval(1000);
//    connect(chartTimer, SIGNAL(timeout()), this, SLOT(Slot_ChartTimer()));
//    chartTimer->start();
    serial_timer = new QTimer(this);
    connect(serial_timer, SIGNAL(timeout()), this, SLOT(Slot_SerialProcess()));
}

void Widget::Init_CurrentTime()
{
    currentTime = new QTimer(this);
    currentTime->start(0);
    connect(currentTime, &QTimer::timeout, this, [=]
    {
        current_datetime = QDateTime::currentDateTime();
        strCurrentTime = current_datetime.toString("yyyy-MM-dd hh:mm:ss ddd");
        ui->label_currentTime->setText(strCurrentTime);
        emit Signal_CurrentTime();
    });
}

/* Slot_Functions */
void Widget::mqttConnected()
{
    QMessageBox::information(this, "info", "connect!!!");
}

void Widget::Slot_SerialReadBuffer()
{
    serial_timer->start(50);
    serialReadBuffer.append(serial_node.readAll());
}

void Widget::Slot_SerialProcess()
{
    QString strNumber;
    qreal number;
    serial_timer->stop();
    QStringList list = serialReadBuffer.split(",");
    /* Show Process */
    currentTimeMessage = current_datetime.toString("yyyy-MM-dd hh:mm:ss ");
    /* Charts Procsee */
    strNumber = list[0];
    number = strNumber.toDouble();
    if(number == 1)
    {
        temp1 = list[1];
        humi1 = list[2];
        light1 = list[3];
        power1 = list[4];
    }
    if(number == 2)
    {
        temp2 = list[1];
        humi2 = list[2];
        light2 = list[3];
        power2 = list[4];
    }
    if(number == 3)
    {
        temp3 = list[1];
        humi3 = list[2];
        light3 = list[3];
        power3 = list[4];
    }
    if((temp1.toDouble() == 0) && (humi1.toDouble() == 0) && (light1.toDouble() == 0))
    {
        state_nodeOne = 0;
    }
    else
    {
        state_nodeOne = 1;
    }
    if((temp2.toDouble() == 0) && (humi2.toDouble() == 0) && (light2.toDouble() == 0))
    {
        state_nodeTwo = 0;
    }
    else
    {
        state_nodeTwo = 1;
    }
    if((temp3.toDouble() == 0) && (humi3.toDouble() == 0) && (light3.toDouble() == 0))
    {
        state_nodeThr = 0;
    }
    else
    {
        state_nodeThr = 1;
    }

    serialReadBuffer.clear();
    emit Signal_SerialProcess();
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_currentTime->hide();
    node_one->setGeometry(this->geometry());
    node_one->show();
}

void Widget::on_pushButton_2_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_currentTime->hide();
    node_two->setGeometry(this->geometry());
    node_two->show();
}

void Widget::on_pushButton_3_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_currentTime->hide();
    node_thr->setGeometry(this->geometry());
    node_thr->show();
}

void Widget::on_pushButton_4_clicked()
{
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_currentTime->hide();
    setting->setGeometry(this->geometry());
    setting->show();
}

void Widget::Slot_Return()
{
    node_one->hide();
    node_two->hide();
    node_thr->hide();
    setting->hide();
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->pushButton_4->show();
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_currentTime->show();
}

void Widget::Slot_Show_Line1()
{
    node_one->hide();
    line1->setGeometry(this->geometry());
    line1->show();
}

void Widget::Slot_Show_Line2()
{
    node_two->hide();
    line2->setGeometry(this->geometry());
    line2->show();
}

void Widget::Slot_Show_Line3()
{
    node_thr->hide();
    line3->setGeometry(this->geometry());
    line3->show();
}

void Widget::Slot_Return_Line1()
{
    line1->hide();
    node_one->setGeometry(this->geometry());
    node_one->show();
}

void Widget::Slot_Return_Line2()
{
    line2->hide();
    node_two->setGeometry(this->geometry());
    node_two->show();
}

void Widget::Slot_Return_Line3()
{
    line3->hide();
    node_thr->setGeometry(this->geometry());
    node_thr->show();
}

//qreal puc_Temp[10] = {10.0, 12.0, 16.3, 9.5, 14.6, 11.8, 18.7, 25.6, 22.4, 18.7};
//qreal puc_Temp2[10] = {78.0, 66.0, 50.7, 88.5, 75.6, 66.8, 85.7, 64.6, 58.4, 73.7};
//qreal puc_Temp3[10] = {21.0, 33.0, 45.3, 27.6, 43.8, 33.5, 22.7, 34.6, 15.4, 36.7};
//int i;
void Widget::Slot_ChartTimer()
{
    chart_nodeOne->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));
    chart_nodeOne->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));   
    chart_nodeTwo->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));
    chart_nodeTwo->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));
    chart_nodeThr->axisX()->setMin(QDateTime::currentDateTime().addSecs(-60 * 1));
    chart_nodeThr->axisX()->setMax(QDateTime::currentDateTime().addSecs(0));
//    /* MQTT Process */
//    temp1 = temp2 = temp3 = "22.4";
//    humi1 = humi2 = humi3 = "22.4";
//    light1 = light2 = light3 = "22.4";
//    power1 = power2 = power3 = "22.4";
//    number_on = 3;
//    number_off = 1;
//    message = "{'id': '14', 'params':{'temp1': " + temp1 + ",'humi1': " + humi1 + \
//            ",'light1': " + light1 + ",'temp2': " + temp2 + ",'humi2': " + humi2 + \
//            ",'light2': " + light2 + ",'temp3': " + temp3 + ",'humi3': " + humi3 + \
//            ",'light3': " + light3 + ",'power1': " + power1 + ",'power2': " + power2 + \
//            ",'power3': " + power3 + ",'number_on': " + QString::number(number_on) + ",'number_off': " + QString::number(number_off) + \
//            ",'error1': " + QString::number(error1) + ",'error2': " + QString::number(error2) + ",'error3': " + QString::number(error3) + \
//            ",'error4': " + QString::number(error4) + ",'error5': " + QString::number(error5) + ",'error6': " + QString::number(error6) + \
//            ",'error7': " + QString::number(error7) + ",'error8': " + QString::number(error8) + ",'error9': " + QString::number(error9) + \
//            ",'error10': " + QString::number(error10) + ",'error11': " + QString::number(error11) + ",'error12': " + QString::number(error12) + "}}";
//    QMQTT::Message send_msg(136, m_strPubTopic, message.toLocal8Bit(),0);
//    mqtt_client->publish(send_msg);

    if(state_nodeOne)
    {
        Series_nodeOne_One->append(current_datetime.toMSecsSinceEpoch(), temp1.toDouble());
        Series_nodeOne_Two->append(current_datetime.toMSecsSinceEpoch(), humi1.toDouble());
        Series_nodeOne_Thr->append(current_datetime.toMSecsSinceEpoch(), light1.toDouble());
    }
    if(state_nodeTwo)
    {
        Series_nodeTwo_One->append(current_datetime.toMSecsSinceEpoch(), temp2.toDouble());
        Series_nodeTwo_Two->append(current_datetime.toMSecsSinceEpoch(), humi2.toDouble());
        Series_nodeTwo_Thr->append(current_datetime.toMSecsSinceEpoch(), light2.toDouble());
    }
    if(state_nodeThr)
    {
        Series_nodeThr_One->append(current_datetime.toMSecsSinceEpoch(), temp3.toDouble());
        Series_nodeThr_Two->append(current_datetime.toMSecsSinceEpoch(), humi3.toDouble());
        Series_nodeThr_Thr->append(current_datetime.toMSecsSinceEpoch(), light3.toDouble());
    }
//    i++;
//    i %= 10;
}
