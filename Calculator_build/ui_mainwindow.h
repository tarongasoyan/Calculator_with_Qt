/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result;
    QPushButton *pushButton;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_tok;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_div;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(239, 369);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result = new QLabel(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(0, 0, 241, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(241);
        sizePolicy.setVerticalStretch(61);
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        result->setFont(font);
        result->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 70, 61, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(61);
        sizePolicy1.setVerticalStretch(61);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName("pushButton_plus_minus");
        pushButton_plus_minus->setGeometry(QRect(60, 70, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_plus_minus->sizePolicy().hasHeightForWidth());
        pushButton_plus_minus->setSizePolicy(sizePolicy1);
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_tok = new QPushButton(centralwidget);
        pushButton_tok->setObjectName("pushButton_tok");
        pushButton_tok->setGeometry(QRect(120, 70, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_tok->sizePolicy().hasHeightForWidth());
        pushButton_tok->setSizePolicy(sizePolicy1);
        pushButton_tok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 130, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 130, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 130, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 190, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 190, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 190, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 250, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 250, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 250, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(0, 310, 121, 61));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"																		stop:0 #dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(120, 310, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy1);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(180, 310, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName("pushButton_mul");
        pushButton_mul->setGeometry(QRect(180, 130, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy1);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_sub = new QPushButton(centralwidget);
        pushButton_sub->setObjectName("pushButton_sub");
        pushButton_sub->setGeometry(QRect(180, 190, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy1);
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(180, 250, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName("pushButton_div");
        pushButton_div->setGeometry(QRect(180, 70, 61, 61));
        sizePolicy1.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy1);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "                                    0 ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_tok->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
