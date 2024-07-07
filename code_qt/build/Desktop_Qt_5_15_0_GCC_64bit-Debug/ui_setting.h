/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_temp_max;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_temp_min;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_humi_max;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_humi_min;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_light_max;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_light_min;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_power;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QString::fromUtf8("Setting"));
        Setting->resize(677, 906);
        gridLayout = new QGridLayout(Setting);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 80));
        pushButton->setMaximumSize(QSize(80, 80));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/ReturnSetting.png);"));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 241, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_7 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        label_7 = new QLabel(Setting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(200, 0));
        label_7->setMaximumSize(QSize(200, 16777215));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_11);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Setting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setMaximumSize(QSize(100, 16777215));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        doubleSpinBox_temp_max = new QDoubleSpinBox(Setting);
        doubleSpinBox_temp_max->setObjectName(QString::fromUtf8("doubleSpinBox_temp_max"));
        doubleSpinBox_temp_max->setMinimumSize(QSize(100, 0));
        doubleSpinBox_temp_max->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_temp_max->setCursor(QCursor(Qt::ArrowCursor));
        doubleSpinBox_temp_max->setValue(30.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox_temp_max);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox_temp_min = new QDoubleSpinBox(Setting);
        doubleSpinBox_temp_min->setObjectName(QString::fromUtf8("doubleSpinBox_temp_min"));
        doubleSpinBox_temp_min->setMinimumSize(QSize(100, 0));
        doubleSpinBox_temp_min->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_temp_min->setValue(10.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox_temp_min);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_8->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_humi_max = new QDoubleSpinBox(Setting);
        doubleSpinBox_humi_max->setObjectName(QString::fromUtf8("doubleSpinBox_humi_max"));
        doubleSpinBox_humi_max->setMinimumSize(QSize(100, 0));
        doubleSpinBox_humi_max->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_humi_max->setValue(90.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_humi_max);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setMaximumSize(QSize(100, 16777215));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox_humi_min = new QDoubleSpinBox(Setting);
        doubleSpinBox_humi_min->setObjectName(QString::fromUtf8("doubleSpinBox_humi_min"));
        doubleSpinBox_humi_min->setMinimumSize(QSize(100, 0));
        doubleSpinBox_humi_min->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_humi_min->setValue(10.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_humi_min);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_8->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setMaximumSize(QSize(100, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        doubleSpinBox_light_max = new QDoubleSpinBox(Setting);
        doubleSpinBox_light_max->setObjectName(QString::fromUtf8("doubleSpinBox_light_max"));
        doubleSpinBox_light_max->setMinimumSize(QSize(100, 0));
        doubleSpinBox_light_max->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_light_max->setMaximum(999.990000000000009);
        doubleSpinBox_light_max->setValue(600.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_light_max);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(Setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        doubleSpinBox_light_min = new QDoubleSpinBox(Setting);
        doubleSpinBox_light_min->setObjectName(QString::fromUtf8("doubleSpinBox_light_min"));
        doubleSpinBox_light_min->setMinimumSize(QSize(100, 0));
        doubleSpinBox_light_min->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_light_min->setMaximum(999.990000000000009);
        doubleSpinBox_light_min->setValue(10.000000000000000);

        horizontalLayout_6->addWidget(doubleSpinBox_light_min);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalSpacer_5 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(Setting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 0));
        label_8->setMaximumSize(QSize(100, 16777215));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_8);

        doubleSpinBox_power = new QDoubleSpinBox(Setting);
        doubleSpinBox_power->setObjectName(QString::fromUtf8("doubleSpinBox_power"));
        doubleSpinBox_power->setMinimumSize(QSize(100, 0));
        doubleSpinBox_power->setMaximumSize(QSize(100, 16777215));
        doubleSpinBox_power->setMaximum(100.000000000000000);
        doubleSpinBox_power->setValue(20.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBox_power);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        horizontalLayout_10->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout_5, 2, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 298, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 1);

        QWidget::setTabOrder(doubleSpinBox_power, doubleSpinBox_temp_max);
        QWidget::setTabOrder(doubleSpinBox_temp_max, doubleSpinBox_temp_min);
        QWidget::setTabOrder(doubleSpinBox_temp_min, doubleSpinBox_humi_max);
        QWidget::setTabOrder(doubleSpinBox_humi_max, pushButton);
        QWidget::setTabOrder(pushButton, doubleSpinBox_humi_min);
        QWidget::setTabOrder(doubleSpinBox_humi_min, doubleSpinBox_light_max);
        QWidget::setTabOrder(doubleSpinBox_light_max, doubleSpinBox_light_min);

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Form", nullptr));
        pushButton->setText(QString());
        label_7->setText(QCoreApplication::translate("Setting", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\346\212\245\350\255\246\345\200\274\350\256\276\347\275\256</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Setting", "\346\270\251\345\272\246\344\270\212\351\231\220\345\200\274", nullptr));
        label_2->setText(QCoreApplication::translate("Setting", "\346\270\251\345\272\246\344\270\213\351\231\220\345\200\274", nullptr));
        label_3->setText(QCoreApplication::translate("Setting", "\346\271\277\345\272\246\344\270\212\351\231\220\345\200\274", nullptr));
        label_4->setText(QCoreApplication::translate("Setting", "\346\271\277\345\272\246\344\270\213\351\231\220\345\200\274", nullptr));
        label_5->setText(QCoreApplication::translate("Setting", "\345\205\211\347\205\247\344\270\212\351\231\220\345\200\274", nullptr));
        label_6->setText(QCoreApplication::translate("Setting", "\345\205\211\347\205\247\344\270\213\351\231\220\345\200\274", nullptr));
        label_8->setText(QCoreApplication::translate("Setting", "\344\275\216\347\224\265\351\207\217\346\212\245\350\255\246\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
