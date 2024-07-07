/********************************************************************************
** Form generated from reading UI file 'nodeoneline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODEONELINE_H
#define UI_NODEONELINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_nodeoneline
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QChartView *graphicsView;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *nodeoneline)
    {
        if (nodeoneline->objectName().isEmpty())
            nodeoneline->setObjectName(QString::fromUtf8("nodeoneline"));
        nodeoneline->resize(913, 780);
        nodeoneline->setMinimumSize(QSize(80, 80));
        gridLayout = new QGridLayout(nodeoneline);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(nodeoneline);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton = new QPushButton(nodeoneline);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 80));
        pushButton->setMaximumSize(QSize(80, 80));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/Return.png);"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        label_3 = new QLabel(nodeoneline);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 100));
        label_3->setMaximumSize(QSize(100, 100));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/node1.png);"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(nodeoneline);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        comboBox = new QComboBox(nodeoneline);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(80, 0));
        comboBox->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(nodeoneline);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 80));
        pushButton_3->setMaximumSize(QSize(80, 80));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/Output1.png);"));

        verticalLayout->addWidget(pushButton_3);

        label_2 = new QLabel(nodeoneline);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 20));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        graphicsView = new QChartView(nodeoneline);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(graphicsView, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);


        retranslateUi(nodeoneline);

        QMetaObject::connectSlotsByName(nodeoneline);
    } // setupUi

    void retranslateUi(QWidget *nodeoneline)
    {
        nodeoneline->setWindowTitle(QCoreApplication::translate("nodeoneline", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("nodeoneline", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\267\245\344\270\232\346\227\240\347\272\277\347\211\251\350\201\224\347\275\221\344\274\240\346\204\237\347\263\273\347\273\237</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("nodeoneline", "<html><head/><body><p><span style=\" font-size:18pt;\">\350\212\202 \347\202\271 \344\270\200 \346\225\260 \346\215\256 \346\233\262 \347\272\277</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("nodeoneline", "\346\270\251\345\272\246\346\233\262\347\272\277", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("nodeoneline", "\346\271\277\345\272\246\346\233\262\347\272\277", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("nodeoneline", "\345\205\211\347\205\247\346\233\262\347\272\277", nullptr));

        pushButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("nodeoneline", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\346\225\260\346\215\256\345\257\274\345\207\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nodeoneline: public Ui_nodeoneline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODEONELINE_H
