#include "nodeone.h"
#include "ui_nodeone.h"

nodeOne::nodeOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodeOne)
{
    ui->setupUi(this);

    QPalette palette;
    palette.setColor(QPalette::Window, QRgb(0x9e8965));
    palette.setColor(QPalette::WindowText, QRgb(0x404044));
//    palette.setColor(QPalette::WindowText, Qt::red);
    ui->label_currentTime->setPalette(palette);
    QFont ft;
    ft.setPointSize(12);
    ui->label_currentTime->setFont(ft);
}

nodeOne::~nodeOne()
{
    delete ui;
}

/* Slot_Functions */
void nodeOne::on_pushButton_Return_clicked()
{
    emit Signal_Return();
}

void nodeOne::Slot_CurrentTime()
{
    ui->label_currentTime->setText(strCurrentTime);
}

int mutex1;
int mutex_power1;
void nodeOne::Slot_SerialProcess(int index)
{
    if(state_nodeOne)
    {
        if(mutex1 == 0)
        {
            mutex1 = 1;
            ui->textEdit_4->append(currentTimeMessage + ": 节点一已上线!");
            number_on++;
            number_off--;
        }
        if(index & 0x01 == 1)
        {
            ui->textEdit->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点一温度异常!");
            error1 = 1;
        }
        else
        {
            ui->textEdit->setTextColor(Qt::black);
            error1 = 0;
        }
        if(index & 0x02 == 1)
        {
            ui->textEdit_2->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点一湿度异常!");
            error2 = 1;
        }
        else
        {
            ui->textEdit_2->setTextColor(Qt::black);
            error2 = 0;
        }
        if(index & 0x04 == 1)
        {
            ui->textEdit_3->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点一光照异常!");
            error3 = 1;
        }
        else
        {
            ui->textEdit_3->setTextColor(Qt::black);
            error3 = 0;
        }
        if(index & 0x08 == 1)
        {
            if(mutex_power1 == 0)
            {
                mutex_power1 = 1;
                ui->textEdit_4->append(currentTimeMessage + ": 节点一电量过低！!");
            }
            error10 = 1;
        }
        else
        {
            mutex_power1 = 0;
            error10 = 0;
        }
        ui->textEdit->append(currentTimeMessage + ": " + temp1 + "℃");
        ui->textEdit_2->append(currentTimeMessage + ": " + humi1 + "%RH");
        ui->textEdit_3->append(currentTimeMessage + ": " + light1 + "lm");
        ui->progressBar->setValue(power1.toInt());
    }
    else
    {
        if(mutex1)
        {
            mutex1 = 0;
            ui->textEdit_4->append(currentTimeMessage + ": 节点一下线!!!");
            number_on--;
            number_off++;
        }
    }
}

void nodeOne::on_pushButton_clicked()
{
    if (ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点一温度值");
    data.append(ui->textEdit->toPlainText());
    data.append("\r\n");
    data.append("节点一湿度值");
    data.append(ui->textEdit_2->toPlainText());
    data.append("\r\n");
    data.append("节点一光照值");
    data.append(ui->textEdit_3->toPlainText());
    data.append("\r\n");
    QString curPath = QDir::currentPath();
    QString dlgTitle = "保存文件";
    QString filter = "文本文件(*.txt);;所有文件(*.*)";
    QString filename = QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
    if (filename.isEmpty())
    {
        return;
    }
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
    {
        return;
    }

    /*保存文件*/
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    stream << data;
    file.close();
}

void nodeOne::on_pushButton_2_clicked()
{
    emit Signal_ShowLine1();
}
