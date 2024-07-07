#include "nodetwo.h"
#include "ui_nodetwo.h"

nodeTwo::nodeTwo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodeTwo)
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

nodeTwo::~nodeTwo()
{
    delete ui;
}

void nodeTwo::Slot_CurrentTime()
{
    ui->label_currentTime->setText(strCurrentTime);
}

int mutex2;
int mutex_power2;
void nodeTwo::Slot_SerialProcess(int index)
{
    if(state_nodeTwo)
    {
        if(mutex2 == 0)
        {
            mutex2 = 1;
            ui->textEdit_4->append(currentTimeMessage + ": 节点二已上线!");
            number_on++;
            number_off--;
        }
        if(index & 0x10 == 1)
        {
            ui->textEdit->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点二温度异常!");
            error4 = 1;
        }
        else
        {
            ui->textEdit->setTextColor(Qt::black);
            error4 = 0;
        }
        if(index & 0x20 == 1)
        {
            ui->textEdit_2->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点二湿度异常!");
            error5 = 1;
        }
        else
        {
            ui->textEdit_2->setTextColor(Qt::black);
            error5 = 0;
        }
        if(index & 0x40 == 1)
        {
            ui->textEdit_3->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点二光照异常!");
            error6 = 1;
        }
        else
        {
            ui->textEdit_3->setTextColor(Qt::black);
            error6 = 0;
        }
        if(index & 0x80 == 1)
        {
            if(mutex_power2 == 0)
            {
                mutex_power2 = 1;
                ui->textEdit_4->append(currentTimeMessage + ": 节点二电量过低！!");
            }

            error11 = 1;
        }
        else
        {
            mutex_power2 = 0;
            error11 = 0;
        }
        ui->textEdit->append(currentTimeMessage + ": " + temp2 + "℃");
        ui->textEdit_2->append(currentTimeMessage + ": " + humi2 + "%RH");
        ui->textEdit_3->append(currentTimeMessage + ": " + light2 + "lm");
        ui->progressBar->setValue(power2.toInt());
    }
    else
    {
        if(mutex2)
        {
            mutex2 = 0;
            ui->textEdit_4->append(currentTimeMessage + ": 节点二下线!!!");
            number_on--;
            number_off++;
        }
    }
}

void nodeTwo::on_pushButton_Return_clicked()
{
    emit Signal_Return();
}

void nodeTwo::on_pushButton_clicked()
{
    if (ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点二温度值");
    data.append(ui->textEdit->toPlainText());
    data.append("\r\n");
    data.append("节点二湿度值");
    data.append(ui->textEdit_2->toPlainText());
    data.append("\r\n");
    data.append("节点二光照值");
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

void nodeTwo::on_pushButton_2_clicked()
{
    emit Signal_ShowLine2();
}
