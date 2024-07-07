/********************************************************************************
** Form generated from reading UI file 'nodeone.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODEONE_H
#define UI_NODEONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nodeOne
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Return;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_currentTime;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *textEdit_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *nodeOne)
    {
        if (nodeOne->objectName().isEmpty())
            nodeOne->setObjectName(QString::fromUtf8("nodeOne"));
        nodeOne->resize(1026, 848);
        gridLayout = new QGridLayout(nodeOne);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label_6 = new QLabel(nodeOne);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_Return = new QPushButton(nodeOne);
        pushButton_Return->setObjectName(QString::fromUtf8("pushButton_Return"));
        pushButton_Return->setMinimumSize(QSize(80, 80));
        pushButton_Return->setMaximumSize(QSize(80, 80));
        pushButton_Return->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/Return.png);"));

        horizontalLayout_2->addWidget(pushButton_Return);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_4 = new QLabel(nodeOne);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(120, 60));
        label_4->setMaximumSize(QSize(120, 60));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_4);

        progressBar = new QProgressBar(nodeOne);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(120, 20));
        progressBar->setMaximumSize(QSize(120, 20));
        progressBar->setValue(24);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(progressBar);


        horizontalLayout_2->addLayout(verticalLayout_9);

        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_currentTime = new QLabel(nodeOne);
        label_currentTime->setObjectName(QString::fromUtf8("label_currentTime"));
        label_currentTime->setMinimumSize(QSize(200, 0));
        label_currentTime->setMaximumSize(QSize(200, 16777215));
        label_currentTime->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_currentTime);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        pushButton = new QPushButton(nodeOne);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 80));
        pushButton->setMaximumSize(QSize(80, 80));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/Output1.png);"));

        verticalLayout_7->addWidget(pushButton);

        label_7 = new QLabel(nodeOne);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 20));
        label_7->setMaximumSize(QSize(16777215, 20));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pushButton_2 = new QPushButton(nodeOne);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 80));
        pushButton_2->setMaximumSize(QSize(80, 80));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/PIC/Series1.png);"));

        verticalLayout_8->addWidget(pushButton_2);

        label_8 = new QLabel(nodeOne);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 20));
        label_8->setMaximumSize(QSize(16777215, 20));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);


        horizontalLayout_2->addLayout(verticalLayout_8);

        horizontalSpacer_6 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(nodeOne);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(400, 0));
        label_5->setMaximumSize(QSize(400, 16777215));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        textEdit_4 = new QTextEdit(nodeOne);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setMinimumSize(QSize(400, 0));
        textEdit_4->setMaximumSize(QSize(400, 16777215));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 222, 179);"));
        textEdit_4->setReadOnly(true);

        verticalLayout->addWidget(textEdit_4);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(nodeOne);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(400, 0));
        label->setMaximumSize(QSize(400, 16777215));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        textEdit = new QTextEdit(nodeOne);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMinimumSize(QSize(400, 0));
        textEdit->setMaximumSize(QSize(400, 16777215));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 222, 179);"));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(nodeOne);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(400, 0));
        label_2->setMaximumSize(QSize(400, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        textEdit_2 = new QTextEdit(nodeOne);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMinimumSize(QSize(400, 0));
        textEdit_2->setMaximumSize(QSize(400, 16777215));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 222, 179);"));
        textEdit_2->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(nodeOne);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(400, 0));
        label_3->setMaximumSize(QSize(400, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        textEdit_3 = new QTextEdit(nodeOne);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setMinimumSize(QSize(400, 0));
        textEdit_3->setMaximumSize(QSize(400, 16777215));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 222, 179);"));
        textEdit_3->setReadOnly(true);

        verticalLayout_4->addWidget(textEdit_3);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 154, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 1, 1, 1);

        label_7->raise();
        label_8->raise();
        progressBar->raise();

        retranslateUi(nodeOne);

        QMetaObject::connectSlotsByName(nodeOne);
    } // setupUi

    void retranslateUi(QWidget *nodeOne)
    {
        nodeOne->setWindowTitle(QCoreApplication::translate("nodeOne", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\267\245\344\270\232\346\227\240\347\272\277\347\211\251\350\201\224\347\275\221\344\274\240\346\204\237\347\263\273\347\273\237</span></p></body></html>", nullptr));
        pushButton_Return->setText(QString());
        label_4->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\350\212\202\347\202\271\344\270\200</span></p></body></html>", nullptr));
        label_currentTime->setText(QString());
        pushButton->setText(QString());
        label_7->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\260\346\215\256\345\257\274\345\207\272</span></p></body></html>", nullptr));
        pushButton_2->setText(QString());
        label_8->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\225\260\346\215\256\346\233\262\347\272\277</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p><span style=\" font-size:12pt;\">\346\227\245\345\277\227</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ff0000;\">\346\270\251\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0055ff;\">\346\271\277\345\272\246\345\200\274</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("nodeOne", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffaa00;\">\345\205\211\347\205\247\345\200\274</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nodeOne: public Ui_nodeOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODEONE_H
