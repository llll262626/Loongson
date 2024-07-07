#include "nodeoneline.h"
#include "ui_nodeoneline.h"

nodeoneline::nodeoneline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodeoneline)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Window, QRgb(0x9e8965));
    Init_Chart_NodeOne();
}

nodeoneline::~nodeoneline()
{
    delete ui;
}

void nodeoneline::Init_Chart_NodeOne()
{
    chart_nodeOne = new QChart();
    QPen pen(Qt::red);
    pen.setWidth(3);

    Series_nodeOne_One = new QSplineSeries();
    Series_nodeOne_One->setName("温度曲线");
    Series_nodeOne_One->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_One);

    Series_nodeOne_Two = new QSplineSeries();
    Series_nodeOne_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeOne_Two->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_Two);

    Series_nodeOne_Thr = new QSplineSeries();
    Series_nodeOne_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeOne_Thr->setPen(pen);
    chart_nodeOne->addSeries(Series_nodeOne_Thr);

    axisX_nodeOne = new QDateTimeAxis();
//    axisX_nodeOne = new QValueAxis();
    axisY_nodeOne_temp = new QValueAxis();
//    axisX_nodeOne->setRange(0, MAX_X);
    axisY_nodeOne_temp->setRange(0, MAX_Y);
    axisX_nodeOne->setTickCount(10);
    axisY_nodeOne_temp->setTickCount(20);
    axisX_nodeOne->setFormat("hh:mm:ss");
    QFont font("Microsoft YaHei",8,QFont::Normal);
    axisX_nodeOne->setTitleFont(font);
    axisY_nodeOne_temp->setTitleFont(font);
    axisX_nodeOne->setTitleText("时间轴");
    axisY_nodeOne_temp->setTitleText("温度值");
    //axisY->setGridLineVisible(false);
    chart_nodeOne->addAxis(axisX_nodeOne, Qt::AlignBottom);
    chart_nodeOne->addAxis(axisY_nodeOne_temp, Qt::AlignLeft);


    axisY_nodeOne_humi = new QValueAxis();
    axisY_nodeOne_humi->setRange(0, MAX_Y_HUMI);
    axisY_nodeOne_humi->setTickCount(20);
    axisY_nodeOne_humi->setTitleFont(font);
    axisY_nodeOne_humi->setTitleText("湿度值");
    chart_nodeOne->addAxis(axisY_nodeOne_humi, Qt::AlignLeft);

    axisY_nodeOne_light = new QValueAxis();
    axisY_nodeOne_light->setRange(0, MAX_Y_LIGHT);
    axisY_nodeOne_light->setTickCount(20);
    axisY_nodeOne_light->setTitleFont(font);
    axisY_nodeOne_light->setTitleText("光照值");
    chart_nodeOne->addAxis(axisY_nodeOne_light, Qt::AlignLeft);

    Series_nodeOne_One->attachAxis(axisX_nodeOne);
    Series_nodeOne_One->attachAxis(axisY_nodeOne_temp);
    Series_nodeOne_Two->attachAxis(axisX_nodeOne);
    Series_nodeOne_Two->attachAxis(axisY_nodeOne_humi);
    Series_nodeOne_Thr->attachAxis(axisX_nodeOne);
    Series_nodeOne_Thr->attachAxis(axisY_nodeOne_light);

    Series_nodeOne_One->show();
    Series_nodeOne_Two->hide();
    Series_nodeOne_Thr->hide();
    axisY_nodeOne_temp->show();
    axisY_nodeOne_humi->hide();
    axisY_nodeOne_light->hide();
    ui->graphicsView->setChart(chart_nodeOne);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    chart_nodeOne->setTheme(QChart::ChartThemeBrownSand);
}

void nodeoneline::on_pushButton_clicked()
{
    emit Signal_Return();
}
void nodeoneline::on_pushButton_3_clicked()
{
    emit Signal_OutputData();
}

void nodeoneline::on_comboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        Series_nodeOne_One->show();
        Series_nodeOne_Two->hide();
        Series_nodeOne_Thr->hide();
        axisY_nodeOne_temp->show();
        axisY_nodeOne_humi->hide();
        axisY_nodeOne_light->hide();
        break;
    case 1:
        Series_nodeOne_One->hide();
        Series_nodeOne_Two->show();
        Series_nodeOne_Thr->hide();
        axisY_nodeOne_temp->hide();
        axisY_nodeOne_humi->show();
        axisY_nodeOne_light->hide();
        break;
    case 2:
        Series_nodeOne_One->hide();
        Series_nodeOne_Two->hide();
        Series_nodeOne_Thr->show();
        axisY_nodeOne_temp->hide();
        axisY_nodeOne_humi->hide();
        axisY_nodeOne_light->show();
        break;
    default:
        Series_nodeOne_One->show();
        Series_nodeOne_Two->hide();
        Series_nodeOne_Thr->hide();
        axisY_nodeOne_temp->show();
        axisY_nodeOne_humi->hide();
        axisY_nodeOne_light->hide();
        break;
    }
}
