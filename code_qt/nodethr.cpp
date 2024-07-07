#include "nodethr.h"
#include "ui_nodethr.h"

nodeThr::nodeThr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::nodeThr)
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

nodeThr::~nodeThr()
{
    delete ui;
}

void nodeThr::on_pushButton_Return_clicked()
{
    emit Signal_Return();
}

void nodeThr::Slot_CurrentTime()
{
    ui->label_currentTime->setText(strCurrentTime);
}

int mutex3;
int mutex_power3;
void nodeThr::Slot_SerialProcess(int index)
{
    if(state_nodeThr)
    {
        if(mutex3 == 0)
        {
            mutex3 = 1;
            ui->textEdit_4->append(currentTimeMessage + ": 节点三已上线!");
            number_on++;
            number_off--;
        }
        if(index & 0x100 == 1)
        {
            ui->textEdit->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点三温度异常");
            error7 = 1;
        }
        else
        {
            ui->textEdit->setTextColor(Qt::black);
            error7 = 0;
        }
        if(index & 0x200 == 1)
        {
            ui->textEdit_2->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点三光照异常");
            error8 = 1;
        }
        else
        {
            ui->textEdit_2->setTextColor(Qt::black);
            error8 = 0;
        }
        if(index & 0x400 == 1)
        {
            ui->textEdit_3->setTextColor(Qt::red);
            ui->textEdit_4->append(currentTimeMessage + ": 节点三湿度异常");
            error9 = 1;
        }
        else
        {
            ui->textEdit_3->setTextColor(Qt::black);
            error9 = 0;
        }
        if(index & 0x800 == 1)
        {
            if(mutex_power3 == 0)
            {
                mutex_power3 = 1;
                ui->textEdit_4->append(currentTimeMessage + ": 节点三电量过低！!");
            }

            error12 = 1;
        }
        else
        {
            mutex_power3 = 0;
            error12 = 0;
        }
        ui->textEdit->append(currentTimeMessage + ": " + temp3 + "℃");
        ui->textEdit_2->append(currentTimeMessage + ": " + humi3 + "%RH");
        ui->textEdit_3->append(currentTimeMessage + ": " + light3 + "lm");
        ui->progressBar->setValue(power3.toInt());
    }
    else
    {
        if(mutex3)
        {
            mutex3 = 0;
            ui->textEdit_4->append(currentTimeMessage + ": 节点三下线!!!");
            number_on--;
            number_off++;
        }
    }
}

void nodeThr::on_pushButton_clicked()
{
    if (ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::information(this, "提示", "数据内容空");
        return;
    }
    QString data;
    data.append("节点三温度值");
    data.append(ui->textEdit->toPlainText());
    data.append("\r\n");
    data.append("节点三湿度值");
    data.append(ui->textEdit_2->toPlainText());
    data.append("\r\n");
    data.append("节点三光照值");
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

void nodeThr::on_pushButton_2_clicked()
{
    emit Signal_ShowLine3();
}
