#include "nodethrline.h"
#include "ui_nodethrline.h"

nodethrline::nodethrline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodethrline)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Window, QRgb(0x9e8965));

    Init_Chart_NodeThr();
}

nodethrline::~nodethrline()
{
    delete ui;
}

void nodethrline::Init_Chart_NodeThr()
{

    chart_nodeThr = new QChart();
    QPen pen(Qt::red);
    pen.setWidth(3);
    QFont font("Microsoft YaHei",8,QFont::Normal);

    Series_nodeThr_One = new QSplineSeries();
    Series_nodeThr_One->setName("温度曲线");
    pen.setColor(Qt::red);
    Series_nodeThr_One->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_One);

    Series_nodeThr_Two = new QSplineSeries();
    Series_nodeThr_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeThr_Two->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_Two);

    Series_nodeThr_Thr = new QSplineSeries();
    Series_nodeThr_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeThr_Thr->setPen(pen);
    chart_nodeThr->addSeries(Series_nodeThr_Thr);

    axisX_nodeThr = new QDateTimeAxis();
    axisY_nodeThr = new QValueAxis();
    axisY_nodeThr->setRange(0, MAX_Y);
    axisX_nodeThr->setTickCount(10);
    axisY_nodeThr->setTickCount(20);
    axisX_nodeThr->setFormat("hh:mm:ss");
    axisX_nodeThr->setTitleFont(font);
    axisY_nodeThr->setTitleFont(font);
    axisX_nodeThr->setTitleText("时间轴");
    axisY_nodeThr->setTitleText("温度值");
    chart_nodeThr->addAxis(axisX_nodeThr, Qt::AlignBottom);
    chart_nodeThr->addAxis(axisY_nodeThr, Qt::AlignLeft);


    axisY_humi_nodeThr = new QValueAxis();
    axisY_humi_nodeThr->setRange(0, MAX_Y_HUMI);
    axisY_humi_nodeThr->setTickCount(20);
    axisY_humi_nodeThr->setTitleFont(font);
    axisY_humi_nodeThr->setTitleText("湿度值");
    chart_nodeThr->addAxis(axisY_humi_nodeThr, Qt::AlignLeft);

    axisY_light_nodeThr = new QValueAxis();
    axisY_light_nodeThr->setRange(0, MAX_Y_LIGHT);
    axisY_light_nodeThr->setTickCount(20);
    axisY_light_nodeThr->setTitleFont(font);
    axisY_light_nodeThr->setTitleText("光照值");
    chart_nodeThr->addAxis(axisY_light_nodeThr, Qt::AlignLeft);


    Series_nodeThr_One->attachAxis(axisX_nodeThr);
    Series_nodeThr_One->attachAxis(axisY_nodeThr);
    Series_nodeThr_Two->attachAxis(axisX_nodeThr);
    Series_nodeThr_Two->attachAxis(axisY_humi_nodeThr);
    Series_nodeThr_Thr->attachAxis(axisX_nodeThr);
    Series_nodeThr_Thr->attachAxis(axisY_light_nodeThr);

    Series_nodeThr_One->show();
    Series_nodeThr_Two->hide();
    Series_nodeThr_Thr->hide();
    axisY_nodeThr->show();
    axisY_humi_nodeThr->hide();
    axisY_light_nodeThr->hide();

    ui->graphicsView->setChart(chart_nodeThr);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    chart_nodeThr->setTheme(QChart::ChartThemeBrownSand);

}

void nodethrline::on_pushButton_clicked()
{
    emit Signal_Return();
}

void nodethrline::on_pushButton_3_clicked()
{
    emit Signal_OutputData();
}

void nodethrline::on_comboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        Series_nodeThr_One->show();
        Series_nodeThr_Two->hide();
        Series_nodeThr_Thr->hide();
        axisY_nodeThr->show();
        axisY_humi_nodeThr->hide();
        axisY_light_nodeThr->hide();
        break;
    case 1:
        Series_nodeThr_One->hide();
        Series_nodeThr_Two->show();
        Series_nodeThr_Thr->hide();
        axisY_nodeThr->hide();
        axisY_humi_nodeThr->show();
        axisY_light_nodeThr->hide();
        break;
    case 2:
        Series_nodeThr_One->hide();
        Series_nodeThr_Two->hide();
        Series_nodeThr_Thr->show();
        axisY_nodeThr->hide();
        axisY_humi_nodeThr->hide();
        axisY_light_nodeThr->show();
        break;
    default:
        Series_nodeThr_One->show();
        Series_nodeThr_Two->hide();
        Series_nodeThr_Thr->hide();
        axisY_nodeThr->show();
        axisY_humi_nodeThr->hide();
        axisY_light_nodeThr->hide();
        break;
    }
}
