/********************************************************************************
** Form generated from reading UI file 'ColorDetect.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDETECT_H
#define UI_COLORDETECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_ColorDetectClass
{
public:
    QWidget *centralWidget;
    MyLabel *label;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QGroupBox *groupBox;
    QToolButton *btn_sel1;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *area1_sx;
    QLineEdit *area1_sy;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *area1_h;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *area1_w;
    QToolButton *btn_set_area1;
    QGroupBox *groupBox_2;
    QToolButton *btn_sel2;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *area2_sx;
    QLineEdit *area2_sy;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *area2_h;
    QLabel *label_19;
    QLineEdit *area2_w;
    QToolButton *btn_set_area2;
    QLabel *label_18;
    QGroupBox *groupBox_3;
    QLabel *label_20;
    QLineEdit *time_inter;
    QLabel *label_21;
    QLineEdit *time_total;
    QLabel *label_22;
    QLabel *label_23;
    QToolButton *btn_set_time;
    QGroupBox *groupBox_4;
    QToolButton *btn_sel_color;
    QLabel *label_25;
    QLineEdit *color_r;
    QLineEdit *color_g;
    QLabel *label_26;
    QLineEdit *color_b;
    QLabel *label_27;
    QToolButton *btn_set_color;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ColorDetectClass)
    {
        if (ColorDetectClass->objectName().isEmpty())
            ColorDetectClass->setObjectName(QStringLiteral("ColorDetectClass"));
        ColorDetectClass->resize(1204, 746);
        centralWidget = new QWidget(ColorDetectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new MyLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 640, 480));
        label->setStyleSheet(QStringLiteral("background-color: rgb(163, 163, 163);"));
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(180, 600, 93, 28));
        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setGeometry(QRect(370, 600, 93, 28));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(740, 50, 161, 201));
        btn_sel1 = new QToolButton(groupBox);
        btn_sel1->setObjectName(QStringLiteral("btn_sel1"));
        btn_sel1->setGeometry(QRect(20, 30, 81, 18));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 71, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 71, 16));
        area1_sx = new QLineEdit(groupBox);
        area1_sx->setObjectName(QStringLiteral("area1_sx"));
        area1_sx->setGeometry(QRect(30, 80, 31, 20));
        area1_sy = new QLineEdit(groupBox);
        area1_sy->setObjectName(QStringLiteral("area1_sy"));
        area1_sy->setGeometry(QRect(100, 80, 31, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 16, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 80, 16, 16));
        area1_h = new QLineEdit(groupBox);
        area1_h->setObjectName(QStringLiteral("area1_h"));
        area1_h->setGeometry(QRect(110, 130, 31, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 130, 16, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 130, 16, 16));
        area1_w = new QLineEdit(groupBox);
        area1_w->setObjectName(QStringLiteral("area1_w"));
        area1_w->setGeometry(QRect(40, 130, 31, 20));
        btn_set_area1 = new QToolButton(groupBox);
        btn_set_area1->setObjectName(QStringLiteral("btn_set_area1"));
        btn_set_area1->setGeometry(QRect(50, 170, 37, 18));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(950, 50, 151, 201));
        btn_sel2 = new QToolButton(groupBox_2);
        btn_sel2->setObjectName(QStringLiteral("btn_sel2"));
        btn_sel2->setGeometry(QRect(20, 30, 81, 18));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 60, 71, 16));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 110, 71, 16));
        area2_sx = new QLineEdit(groupBox_2);
        area2_sx->setObjectName(QStringLiteral("area2_sx"));
        area2_sx->setGeometry(QRect(30, 80, 31, 20));
        area2_sy = new QLineEdit(groupBox_2);
        area2_sy->setObjectName(QStringLiteral("area2_sy"));
        area2_sy->setGeometry(QRect(100, 80, 31, 20));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 80, 16, 16));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 80, 16, 16));
        area2_h = new QLineEdit(groupBox_2);
        area2_h->setObjectName(QStringLiteral("area2_h"));
        area2_h->setGeometry(QRect(100, 130, 31, 20));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(80, 130, 16, 16));
        area2_w = new QLineEdit(groupBox_2);
        area2_w->setObjectName(QStringLiteral("area2_w"));
        area2_w->setGeometry(QRect(30, 130, 31, 20));
        btn_set_area2 = new QToolButton(groupBox_2);
        btn_set_area2->setObjectName(QStringLiteral("btn_set_area2"));
        btn_set_area2->setGeometry(QRect(50, 170, 37, 18));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 130, 16, 16));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(740, 280, 151, 151));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 20, 81, 16));
        time_inter = new QLineEdit(groupBox_3);
        time_inter->setObjectName(QStringLiteral("time_inter"));
        time_inter->setGeometry(QRect(20, 40, 71, 20));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(100, 40, 31, 16));
        time_total = new QLineEdit(groupBox_3);
        time_total->setObjectName(QStringLiteral("time_total"));
        time_total->setGeometry(QRect(20, 90, 71, 20));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(100, 90, 31, 16));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 70, 81, 16));
        btn_set_time = new QToolButton(groupBox_3);
        btn_set_time->setObjectName(QStringLiteral("btn_set_time"));
        btn_set_time->setGeometry(QRect(40, 120, 37, 18));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(920, 280, 191, 151));
        btn_sel_color = new QToolButton(groupBox_4);
        btn_sel_color->setObjectName(QStringLiteral("btn_sel_color"));
        btn_sel_color->setGeometry(QRect(30, 40, 81, 18));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 70, 21, 16));
        color_r = new QLineEdit(groupBox_4);
        color_r->setObjectName(QStringLiteral("color_r"));
        color_r->setGeometry(QRect(30, 70, 31, 20));
        color_g = new QLineEdit(groupBox_4);
        color_g->setObjectName(QStringLiteral("color_g"));
        color_g->setGeometry(QRect(90, 70, 31, 20));
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(70, 70, 21, 16));
        color_b = new QLineEdit(groupBox_4);
        color_b->setObjectName(QStringLiteral("color_b"));
        color_b->setGeometry(QRect(150, 70, 31, 20));
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(130, 70, 21, 16));
        btn_set_color = new QToolButton(groupBox_4);
        btn_set_color->setObjectName(QStringLiteral("btn_set_color"));
        btn_set_color->setGeometry(QRect(70, 110, 37, 18));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 20, 30, 30));
        ColorDetectClass->setCentralWidget(centralWidget);
        groupBox->raise();
        label->raise();
        btn_start->raise();
        btn_stop->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        menuBar = new QMenuBar(ColorDetectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1204, 23));
        ColorDetectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ColorDetectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ColorDetectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ColorDetectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ColorDetectClass->setStatusBar(statusBar);

        retranslateUi(ColorDetectClass);

        QMetaObject::connectSlotsByName(ColorDetectClass);
    } // setupUi

    void retranslateUi(QMainWindow *ColorDetectClass)
    {
        ColorDetectClass->setWindowTitle(QApplication::translate("ColorDetectClass", "ColorDetect", 0));
        label->setText(QString());
        btn_start->setText(QApplication::translate("ColorDetectClass", "Start", 0));
        btn_stop->setText(QApplication::translate("ColorDetectClass", "Stop", 0));
        groupBox->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2721", 0));
        btn_sel1->setText(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2721\351\200\211\346\213\251", 0));
        label_2->setText(QApplication::translate("ColorDetectClass", "\350\265\267\345\247\213\347\202\271\345\235\220\346\240\207\357\274\232", 0));
        label_3->setText(QApplication::translate("ColorDetectClass", "\345\214\272\345\237\237\345\244\247\345\260\217\357\274\232", 0));
        label_4->setText(QApplication::translate("ColorDetectClass", "x:", 0));
        label_5->setText(QApplication::translate("ColorDetectClass", "y:", 0));
        label_6->setText(QApplication::translate("ColorDetectClass", "\345\256\275\357\274\232", 0));
        label_7->setText(QApplication::translate("ColorDetectClass", "\351\253\230\357\274\232", 0));
        btn_set_area1->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        groupBox_2->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2722", 0));
        btn_sel2->setText(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2722\351\200\211\346\213\251", 0));
        label_14->setText(QApplication::translate("ColorDetectClass", "\350\265\267\345\247\213\347\202\271\345\235\220\346\240\207\357\274\232", 0));
        label_15->setText(QApplication::translate("ColorDetectClass", "\345\214\272\345\237\237\345\244\247\345\260\217\357\274\232", 0));
        label_16->setText(QApplication::translate("ColorDetectClass", "x:", 0));
        label_17->setText(QApplication::translate("ColorDetectClass", "y:", 0));
        label_19->setText(QApplication::translate("ColorDetectClass", "\351\253\230\357\274\232", 0));
        btn_set_area2->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        label_18->setText(QApplication::translate("ColorDetectClass", "\345\256\275\357\274\232", 0));
        groupBox_3->setTitle(QApplication::translate("ColorDetectClass", "\346\227\266\351\227\264\350\256\276\345\256\232", 0));
        label_20->setText(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\351\227\264\351\232\224\346\227\266\351\227\264\357\274\232", 0));
        label_21->setText(QApplication::translate("ColorDetectClass", "\345\210\206\351\222\237", 0));
        label_22->setText(QApplication::translate("ColorDetectClass", "\345\210\206\351\222\237", 0));
        label_23->setText(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\347\273\210\346\255\242\346\227\266\351\227\264\357\274\232", 0));
        btn_set_time->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        groupBox_4->setTitle(QApplication::translate("ColorDetectClass", "\351\242\234\350\211\262\350\256\276\345\256\232", 0));
        btn_sel_color->setText(QApplication::translate("ColorDetectClass", "\351\200\211\346\213\251\351\242\234\350\211\262\345\214\272\345\237\237", 0));
        label_25->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        label_26->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        color_b->setText(QString());
        label_27->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        btn_set_color->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorDetectClass: public Ui_ColorDetectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDETECT_H
