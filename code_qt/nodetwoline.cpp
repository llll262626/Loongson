#include "nodetwoline.h"
#include "ui_nodetwoline.h"

nodetwoline::nodetwoline(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodetwoline)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Window, QRgb(0x9e8965));

    Init_Chart_NodeTwo();
}

nodetwoline::~nodetwoline()
{
    delete ui;
}

void nodetwoline::Init_Chart_NodeTwo()
{
    chart_nodeTwo = new QChart();
    QPen pen(Qt::red);
    pen.setWidth(3);
    QFont font("Microsoft YaHei",8,QFont::Normal);

    Series_nodeTwo_One = new QSplineSeries();
    Series_nodeTwo_One->setName("温度曲线");
    pen.setColor(Qt::red);
    Series_nodeTwo_One->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_One);

    Series_nodeTwo_Two = new QSplineSeries();
    Series_nodeTwo_Two->setName("湿度曲线");
    pen.setColor(Qt::blue);
    Series_nodeTwo_Two->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_Two);

    Series_nodeTwo_Thr = new QSplineSeries();
    Series_nodeTwo_Thr->setName("光照曲线");
    pen.setColor(Qt::green);
    Series_nodeTwo_Thr->setPen(pen);
    chart_nodeTwo->addSeries(Series_nodeTwo_Thr);

    axisX_nodeTwo = new QDateTimeAxis();
    axisY_nodeTwo = new QValueAxis();
    axisY_nodeTwo->setRange(0, MAX_Y);
    axisX_nodeTwo->setTickCount(10);
    axisY_nodeTwo->setTickCount(20);
    axisX_nodeTwo->setFormat("hh:mm:ss");
    axisX_nodeTwo->setTitleFont(font);
    axisY_nodeTwo->setTitleFont(font);
    axisX_nodeTwo->setTitleText("时间轴");
    axisY_nodeTwo->setTitleText("温度值");

    chart_nodeTwo->addAxis(axisX_nodeTwo, Qt::AlignBottom);
    chart_nodeTwo->addAxis(axisY_nodeTwo, Qt::AlignLeft);

    axisY_humi_nodeTwo = new QValueAxis();
    axisY_humi_nodeTwo->setRange(0, MAX_Y_HUMI);
    axisY_humi_nodeTwo->setTickCount(20);
    axisY_humi_nodeTwo->setTitleFont(font);
    axisY_humi_nodeTwo->setTitleText("湿度值");
    chart_nodeTwo->addAxis(axisY_humi_nodeTwo, Qt::AlignLeft);

    axisY_light_nodeTwo = new QValueAxis();
    axisY_light_nodeTwo->setRange(0, MAX_Y_LIGHT);
    axisY_light_nodeTwo->setTickCount(20);
    axisY_light_nodeTwo->setTitleFont(font);
    axisY_light_nodeTwo->setTitleText("光照值");
    chart_nodeTwo->addAxis(axisY_light_nodeTwo, Qt::AlignLeft);


    Series_nodeTwo_One->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_One->attachAxis(axisY_nodeTwo);
    Series_nodeTwo_Two->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_Two->attachAxis(axisY_humi_nodeTwo);
    Series_nodeTwo_Thr->attachAxis(axisX_nodeTwo);
    Series_nodeTwo_Thr->attachAxis(axisY_light_nodeTwo);

    Series_nodeTwo_One->show();
    Series_nodeTwo_Two->hide();
    Series_nodeTwo_Thr->hide();
    axisY_nodeTwo->show();
    axisY_humi_nodeTwo->hide();
    axisY_light_nodeTwo->hide();

    ui->graphicsView->setChart(chart_nodeTwo);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    chart_nodeTwo->setTheme(QChart::ChartThemeBrownSand);
}

void nodetwoline::on_pushButton_clicked()
{
    emit Signal_Return();
}

void nodetwoline::on_pushButton_3_clicked()
{
    emit Signal_OutputData();
}

void nodetwoline::on_comboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
        Series_nodeTwo_One->show();
        Series_nodeTwo_Two->hide();
        Series_nodeTwo_Thr->hide();
        axisY_nodeTwo->show();
        axisY_humi_nodeTwo->hide();
        axisY_light_nodeTwo->hide();
        break;
    case 1:
        Series_nodeTwo_One->hide();
        Series_nodeTwo_Two->show();
        Series_nodeTwo_Thr->hide();
        axisY_nodeTwo->hide();
        axisY_humi_nodeTwo->show();
        axisY_light_nodeTwo->hide();
        break;
    case 2:
        Series_nodeTwo_One->hide();
        Series_nodeTwo_Two->hide();
        Series_nodeTwo_Thr->show();
        axisY_nodeTwo->hide();
        axisY_humi_nodeTwo->hide();
        axisY_light_nodeTwo->show();
        break;
    default:
        Series_nodeTwo_One->show();
        Series_nodeTwo_Two->hide();
        Series_nodeTwo_Thr->hide();
        axisY_nodeTwo->show();
        axisY_humi_nodeTwo->hide();
        axisY_light_nodeTwo->hide();
        break;
    }
}
