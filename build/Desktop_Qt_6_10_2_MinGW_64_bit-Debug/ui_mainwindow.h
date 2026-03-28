/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
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
    QLabel *result_show;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_plusminus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_ctg;
    QLabel *result_show_result_operation;
    QPushButton *pushButton_bracket_left;
    QPushButton *pushButton_bracket_right;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QPushButton *pushButton_arctan;
    QPushButton *pushButton_arcctg;
    QPushButton *pushButton_square;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_del;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_10pow;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_log;
    QPushButton *pushButton_pi;
    QPushButton *pushButton_euler;
    QPushButton *pushButton_phi;
    QPushButton *pushButton_about;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(305, 468);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result_show = new QLabel(centralwidget);
        result_show->setObjectName("result_show");
        result_show->setGeometry(QRect(0, 40, 301, 41));
        QFont font;
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName("pushButton_ac");
        pushButton_ac->setGeometry(QRect(240, 196, 61, 61));
        pushButton_ac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #A8F000;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(180, 376, 61, 61));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  border: 1px solid gray;\n"
"color: white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(240, 316, 61, 61));
        QFont font1;
        font1.setPointSize(11);
        pushButton_divide->setFont(font1);
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_plusminus = new QPushButton(centralwidget);
        pushButton_plusminus->setObjectName("pushButton_plusminus");
        pushButton_plusminus->setGeometry(QRect(120, 376, 61, 61));
        pushButton_plusminus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 196, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 196, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName("pushButton_mul");
        pushButton_mul->setGeometry(QRect(240, 256, 61, 61));
        QFont font2;
        font2.setPointSize(12);
        pushButton_mul->setFont(font2);
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 196, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 256, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 256, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(180, 256, 61, 61));
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 256, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 316, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 316, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(180, 316, 61, 61));
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 316, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(0, 376, 61, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(240, 376, 61, 61));
        pushButton_equal->setFont(font1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #B23AD4;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(60, 376, 61, 61));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_dot->setFont(font3);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName("pushButton_cos");
        pushButton_cos->setGeometry(QRect(60, 109, 61, 30));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName("pushButton_sin");
        pushButton_sin->setGeometry(QRect(60, 80, 61, 30));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName("pushButton_tan");
        pushButton_tan->setGeometry(QRect(120, 109, 61, 30));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_ctg = new QPushButton(centralwidget);
        pushButton_ctg->setObjectName("pushButton_ctg");
        pushButton_ctg->setGeometry(QRect(120, 80, 61, 30));
        pushButton_ctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        result_show_result_operation = new QLabel(centralwidget);
        result_show_result_operation->setObjectName("result_show_result_operation");
        result_show_result_operation->setGeometry(QRect(0, 0, 301, 41));
        result_show_result_operation->setFont(font);
        result_show_result_operation->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_bracket_left = new QPushButton(centralwidget);
        pushButton_bracket_left->setObjectName("pushButton_bracket_left");
        pushButton_bracket_left->setGeometry(QRect(180, 138, 61, 30));
        pushButton_bracket_left->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_bracket_right = new QPushButton(centralwidget);
        pushButton_bracket_right->setObjectName("pushButton_bracket_right");
        pushButton_bracket_right->setGeometry(QRect(240, 138, 61, 30));
        pushButton_bracket_right->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_arcsin = new QPushButton(centralwidget);
        pushButton_arcsin->setObjectName("pushButton_arcsin");
        pushButton_arcsin->setGeometry(QRect(180, 109, 61, 30));
        pushButton_arcsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_arccos = new QPushButton(centralwidget);
        pushButton_arccos->setObjectName("pushButton_arccos");
        pushButton_arccos->setGeometry(QRect(180, 80, 61, 30));
        pushButton_arccos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_arctan = new QPushButton(centralwidget);
        pushButton_arctan->setObjectName("pushButton_arctan");
        pushButton_arctan->setGeometry(QRect(240, 80, 61, 30));
        pushButton_arctan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_arcctg = new QPushButton(centralwidget);
        pushButton_arcctg->setObjectName("pushButton_arcctg");
        pushButton_arcctg->setGeometry(QRect(240, 109, 61, 30));
        pushButton_arcctg->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_square = new QPushButton(centralwidget);
        pushButton_square->setObjectName("pushButton_square");
        pushButton_square->setGeometry(QRect(60, 138, 61, 30));
        pushButton_square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        pushButton_sqrt->setGeometry(QRect(120, 138, 61, 30));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName("pushButton_del");
        pushButton_del->setGeometry(QRect(180, 196, 61, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Source Code Pro Medium")});
        font4.setPointSize(10);
        pushButton_del->setFont(font4);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #A8F000;\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_del->setIconSize(QSize(30, 30));
        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName("pushButton_exp");
        pushButton_exp->setGeometry(QRect(0, 80, 61, 30));
        pushButton_exp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_10pow = new QPushButton(centralwidget);
        pushButton_10pow->setObjectName("pushButton_10pow");
        pushButton_10pow->setGeometry(QRect(0, 109, 61, 30));
        pushButton_10pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName("pushButton_pow");
        pushButton_pow->setGeometry(QRect(0, 138, 61, 30));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName("pushButton_ln");
        pushButton_ln->setGeometry(QRect(60, 167, 61, 30));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName("pushButton_log");
        pushButton_log->setGeometry(QRect(0, 167, 61, 30));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_pi = new QPushButton(centralwidget);
        pushButton_pi->setObjectName("pushButton_pi");
        pushButton_pi->setGeometry(QRect(120, 167, 61, 30));
        pushButton_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_euler = new QPushButton(centralwidget);
        pushButton_euler->setObjectName("pushButton_euler");
        pushButton_euler->setGeometry(QRect(180, 167, 61, 30));
        pushButton_euler->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_phi = new QPushButton(centralwidget);
        pushButton_phi->setObjectName("pushButton_phi");
        pushButton_phi->setGeometry(QRect(240, 167, 61, 30));
        pushButton_phi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_about = new QPushButton(centralwidget);
        pushButton_about->setObjectName("pushButton_about");
        pushButton_about->setGeometry(QRect(0, 436, 181, 31));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        pushButton_about->setFont(font5);
        pushButton_about->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"								stop:0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\203\321\207\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_plusminus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos x", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin x", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan x", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("MainWindow", "ctg x", nullptr));
        result_show_result_operation->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_bracket_left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_bracket_right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_arcsin->setText(QCoreApplication::translate("MainWindow", "arcsin x", nullptr));
        pushButton_arccos->setText(QCoreApplication::translate("MainWindow", "arccos x", nullptr));
        pushButton_arctan->setText(QCoreApplication::translate("MainWindow", "arctan x", nullptr));
        pushButton_arcctg->setText(QCoreApplication::translate("MainWindow", "arcctg x", nullptr));
        pushButton_square->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        pushButton_exp->setText(QCoreApplication::translate("MainWindow", "exp^( )", nullptr));
        pushButton_10pow->setText(QCoreApplication::translate("MainWindow", "10^( )", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "x^( )", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
        pushButton_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        pushButton_euler->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        pushButton_phi->setText(QCoreApplication::translate("MainWindow", "\317\206", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_about->setToolTip(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_about->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
