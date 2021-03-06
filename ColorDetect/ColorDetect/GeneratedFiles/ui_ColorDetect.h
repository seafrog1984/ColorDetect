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
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_ColorDetectClass
{
public:
    QAction *sysPara;
    QAction *colorSet;
    QAction *search;
    QAction *mainPage;
    QWidget *centralWidget;
    MyLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page_main;
    QLabel *label_46;
    QGroupBox *groupBox_6;
    QLabel *label_area2;
    QGroupBox *groupBox_5;
    QLabel *label_area1;
    QPushButton *btn_stop;
    QPushButton *btn_start;
    QPushButton *btn_test;
    QPushButton *btn_close_cam;
    QPushButton *btn_open_cam;
    QLabel *label_8;
    QLineEdit *color_num;
    QLabel *label_9;
    QLineEdit *detect_time1;
    QLabel *label_10;
    QLineEdit *detect_time2;
    QLineEdit *area1_r;
    QLabel *label_29;
    QLineEdit *area1_b;
    QLineEdit *area1_g;
    QLabel *label_30;
    QLabel *label_28;
    QLineEdit *area2_r;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_31;
    QLineEdit *area2_g;
    QLineEdit *area2_b;
    QPushButton *btn_play;
    QSlider *horizontalSlider;
    QLabel *slider_label;
    QLabel *label_min;
    QLabel *label_max;
    QWidget *page_sys;
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
    QLabel *label_13;
    QToolButton *btn_sel_num1;
    QToolButton *btn_sel_num2;
    QWidget *page_color;
    QGroupBox *groupBox_4;
    QToolButton *btn_sel_color;
    QLabel *label_25;
    QLineEdit *color_r;
    QLineEdit *color_g;
    QLabel *label_26;
    QLineEdit *color_b;
    QLabel *label_27;
    QToolButton *btn_set_color;
    QLabel *label_color;
    QGroupBox *groupBox_7;
    QToolButton *btn_sel_color_4;
    QLabel *label_40;
    QLineEdit *color_r_4;
    QLineEdit *color_g_4;
    QLabel *label_41;
    QLineEdit *color_b_4;
    QLabel *label_42;
    QToolButton *btn_set_color_4;
    QLabel *label_color_4;
    QGroupBox *groupBox_8;
    QToolButton *btn_sel_color_5;
    QLabel *label_43;
    QLineEdit *color_r_5;
    QLineEdit *color_g_5;
    QLabel *label_44;
    QLineEdit *color_b_5;
    QLabel *label_45;
    QToolButton *btn_set_color_5;
    QLabel *label_color_5;
    QLabel *label_24;
    QToolButton *btn_detect1;
    QToolButton *btn_detect2;
    QPushButton *btn_color_correct;
    QPushButton *btn_color_correct_2;
    QLabel *title;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ColorDetectClass)
    {
        if (ColorDetectClass->objectName().isEmpty())
            ColorDetectClass->setObjectName(QStringLiteral("ColorDetectClass"));
        ColorDetectClass->resize(1366, 716);
        ColorDetectClass->setStyleSheet(QLatin1String("QWidget#mainToolBar{\n"
"border-color: rgb(15, 21, 42);\n"
"background-color: rgb(15, 21, 42);\n"
"border-width:0px;\n"
"border-style: solid;\n"
"}\n"
"QStatusBar{\n"
"border-color: rgb(15, 21, 42);\n"
"background-color: rgb(15, 21, 42);\n"
"border:0px;\n"
"color:white;\n"
"}"));
        sysPara = new QAction(ColorDetectClass);
        sysPara->setObjectName(QStringLiteral("sysPara"));
        sysPara->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ColorDetect/SysPara"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/ColorDetect/SysPara-Sel"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/IRProc/ImgProc"), QSize(), QIcon::Selected, QIcon::Off);
        sysPara->setIcon(icon);
        colorSet = new QAction(ColorDetectClass);
        colorSet->setObjectName(QStringLiteral("colorSet"));
        colorSet->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ColorDetect/ColorSet"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/ColorDetect/ColorSet-Sel"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QStringLiteral(":/IRProc/ImgProc"), QSize(), QIcon::Selected, QIcon::Off);
        colorSet->setIcon(icon1);
        search = new QAction(ColorDetectClass);
        search->setObjectName(QStringLiteral("search"));
        search->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ColorDetect/Search"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/ColorDetect/Search-Sel"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QStringLiteral(":/IRProc/ImgProc"), QSize(), QIcon::Selected, QIcon::Off);
        search->setIcon(icon2);
        mainPage = new QAction(ColorDetectClass);
        mainPage->setObjectName(QStringLiteral("mainPage"));
        mainPage->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ColorDetect/Main"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/ColorDetect/Main-Sel"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QStringLiteral(":/IRProc/ImgProc"), QSize(), QIcon::Selected, QIcon::Off);
        mainPage->setIcon(icon3);
        centralWidget = new QWidget(ColorDetectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget{\n"
"border-color: rgb(15, 21, 42);\n"
"background-color: rgb(15, 21, 42);\n"
"border-width:0px;\n"
"\n"
"\n"
"}\n"
"QPushButton{\n"
"background-color:  rgb(22,68, 117);\n"
"background-image: url(:/ColorDetect/Bg);\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:  rgb(22,68, 117);\n"
"background-image: url(:/ColorDetect/Bg-sel);\n"
"color:white;\n"
"}\n"
"\n"
"QToolButton{\n"
"background-color:  rgb(22,68, 117);\n"
"background-image: url(:/ColorDetect/Bg);\n"
"color:white;\n"
"}\n"
"QToolButton:checked{\n"
"background-color:  rgb(22,68, 117);\n"
"background-image: url(:/ColorDetect/Bg-sel);\n"
"color:white;\n"
"}\n"
"QGroupBox{\n"
"background-color:rgb(22,68, 117);\n"
"color:white;\n"
"border:0px\n"
"}\n"
""));
        label = new MyLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 100, 640, 480));
        label->setMinimumSize(QSize(640, 480));
        label->setMaximumSize(QSize(640, 480));
        label->setStyleSheet(QStringLiteral("background-color:  rgb(22,68, 117);"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(660, 41, 500, 600));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_main = new QWidget();
        page_main->setObjectName(QStringLiteral("page_main"));
        page_main->setStyleSheet(QLatin1String("\n"
"QLineEdit{\n"
"background-color: rgb(22,68, 117);\n"
"color:white;\n"
"border:0px\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid #4A708B;\n"
"background: #C0C0C0;\n"
"height: 5px;\n"
"border-radius: 1px;\n"
"padding-left:-1px;\n"
"padding-right:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"    stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"    stop: 0 #5DCCFF, stop: 1 #1874CD);\n"
"border: 1px solid #4A708B;\n"
"height: 10px;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #575757;\n"
"border: 0px solid #777;\n"
"height: 10px;\n"
"border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, \n"
"    stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3p"
                        "x;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #2A8BDA, \n"
"    stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: #00009C;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}\n"
""));
        label_46 = new QLabel(page_main);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(170, 30, 141, 41));
        label_46->setStyleSheet(QStringLiteral("color:white;"));
        groupBox_6 = new QGroupBox(page_main);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(240, 130, 121, 100));
        groupBox_6->setStyleSheet(QStringLiteral(""));
        label_area2 = new QLabel(groupBox_6);
        label_area2->setObjectName(QStringLiteral("label_area2"));
        label_area2->setGeometry(QRect(30, 30, 60, 60));
        label_area2->setStyleSheet(QStringLiteral(""));
        groupBox_5 = new QGroupBox(page_main);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 130, 141, 100));
        groupBox_5->setStyleSheet(QStringLiteral(""));
        label_area1 = new QLabel(groupBox_5);
        label_area1->setObjectName(QStringLiteral("label_area1"));
        label_area1->setGeometry(QRect(40, 30, 60, 60));
        label_area1->setStyleSheet(QStringLiteral(""));
        btn_stop = new QPushButton(page_main);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setGeometry(QRect(230, 450, 127, 25));
        btn_start = new QPushButton(page_main);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(230, 410, 127, 25));
        btn_test = new QPushButton(page_main);
        btn_test->setObjectName(QStringLiteral("btn_test"));
        btn_test->setGeometry(QRect(70, 500, 127, 25));
        btn_close_cam = new QPushButton(page_main);
        btn_close_cam->setObjectName(QStringLiteral("btn_close_cam"));
        btn_close_cam->setGeometry(QRect(70, 450, 127, 25));
        btn_open_cam = new QPushButton(page_main);
        btn_open_cam->setObjectName(QStringLiteral("btn_open_cam"));
        btn_open_cam->setGeometry(QRect(70, 410, 127, 25));
        label_8 = new QLabel(page_main);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 290, 81, 20));
        label_8->setStyleSheet(QLatin1String("color:white;\n"
""));
        color_num = new QLineEdit(page_main);
        color_num->setObjectName(QStringLiteral("color_num"));
        color_num->setGeometry(QRect(210, 285, 113, 20));
        color_num->setReadOnly(true);
        label_9 = new QLabel(page_main);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 320, 101, 20));
        label_9->setStyleSheet(QStringLiteral("color:white;"));
        detect_time1 = new QLineEdit(page_main);
        detect_time1->setObjectName(QStringLiteral("detect_time1"));
        detect_time1->setGeometry(QRect(210, 315, 113, 20));
        detect_time1->setReadOnly(true);
        label_10 = new QLabel(page_main);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 350, 111, 20));
        label_10->setStyleSheet(QLatin1String("\n"
"color:white;\n"
""));
        detect_time2 = new QLineEdit(page_main);
        detect_time2->setObjectName(QStringLiteral("detect_time2"));
        detect_time2->setGeometry(QRect(210, 350, 113, 20));
        detect_time2->setReadOnly(true);
        area1_r = new QLineEdit(page_main);
        area1_r->setObjectName(QStringLiteral("area1_r"));
        area1_r->setGeometry(QRect(50, 230, 31, 20));
        label_29 = new QLabel(page_main);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 230, 16, 16));
        area1_b = new QLineEdit(page_main);
        area1_b->setObjectName(QStringLiteral("area1_b"));
        area1_b->setGeometry(QRect(170, 230, 31, 20));
        area1_g = new QLineEdit(page_main);
        area1_g->setObjectName(QStringLiteral("area1_g"));
        area1_g->setGeometry(QRect(110, 230, 31, 20));
        label_30 = new QLabel(page_main);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(150, 230, 16, 16));
        label_28 = new QLabel(page_main);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(90, 230, 21, 20));
        area2_r = new QLineEdit(page_main);
        area2_r->setObjectName(QStringLiteral("area2_r"));
        area2_r->setGeometry(QRect(270, 240, 31, 20));
        label_32 = new QLabel(page_main);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(250, 240, 16, 16));
        label_33 = new QLabel(page_main);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(370, 240, 16, 16));
        label_31 = new QLabel(page_main);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(310, 240, 16, 16));
        area2_g = new QLineEdit(page_main);
        area2_g->setObjectName(QStringLiteral("area2_g"));
        area2_g->setGeometry(QRect(330, 240, 31, 20));
        area2_b = new QLineEdit(page_main);
        area2_b->setObjectName(QStringLiteral("area2_b"));
        area2_b->setGeometry(QRect(390, 240, 31, 20));
        btn_play = new QPushButton(page_main);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        btn_play->setGeometry(QRect(230, 500, 127, 25));
        horizontalSlider = new QSlider(page_main);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(70, 550, 301, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        slider_label = new QLabel(page_main);
        slider_label->setObjectName(QStringLiteral("slider_label"));
        slider_label->setGeometry(QRect(190, 580, 72, 15));
        slider_label->setStyleSheet(QStringLiteral("color:white;"));
        label_min = new QLabel(page_main);
        label_min->setObjectName(QStringLiteral("label_min"));
        label_min->setGeometry(QRect(30, 570, 41, 20));
        label_min->setStyleSheet(QStringLiteral("color:white;"));
        label_max = new QLabel(page_main);
        label_max->setObjectName(QStringLiteral("label_max"));
        label_max->setGeometry(QRect(370, 570, 41, 20));
        label_max->setStyleSheet(QStringLiteral("color:white;"));
        stackedWidget->addWidget(page_main);
        page_sys = new QWidget();
        page_sys->setObjectName(QStringLiteral("page_sys"));
        page_sys->setStyleSheet(QLatin1String("QLabel{\n"
"background-color:rgb(22,68, 117);\n"
"color:white;\n"
"border:0px\n"
"}\n"
"QLineEdit{\n"
"background-color: rgb(15, 21, 42);\n"
"color:white;\n"
"border:0px\n"
"}\n"
""));
        groupBox = new QGroupBox(page_sys);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 280, 161, 201));
        btn_sel1 = new QToolButton(groupBox);
        btn_sel1->setObjectName(QStringLiteral("btn_sel1"));
        btn_sel1->setGeometry(QRect(10, 20, 127, 25));
        btn_sel1->setCheckable(true);
        btn_sel1->setAutoExclusive(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 91, 16));
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
        btn_set_area1->setGeometry(QRect(10, 160, 127, 25));
        groupBox_2 = new QGroupBox(page_sys);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(280, 280, 151, 201));
        btn_sel2 = new QToolButton(groupBox_2);
        btn_sel2->setObjectName(QStringLiteral("btn_sel2"));
        btn_sel2->setGeometry(QRect(10, 20, 127, 25));
        btn_sel2->setCheckable(true);
        btn_sel2->setAutoExclusive(true);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 60, 101, 16));
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
        btn_set_area2->setGeometry(QRect(10, 160, 127, 25));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 130, 16, 16));
        groupBox_3 = new QGroupBox(page_sys);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 90, 151, 151));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 20, 111, 16));
        label_20->setStyleSheet(QStringLiteral(""));
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
        label_23->setGeometry(QRect(20, 70, 111, 16));
        btn_set_time = new QToolButton(groupBox_3);
        btn_set_time->setObjectName(QStringLiteral("btn_set_time"));
        btn_set_time->setGeometry(QRect(10, 120, 127, 25));
        label_13 = new QLabel(page_sys);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 10, 271, 41));
        label_13->setStyleSheet(QLatin1String("\n"
"background-color: rgb(15, 21, 42);"));
        btn_sel_num1 = new QToolButton(page_sys);
        btn_sel_num1->setObjectName(QStringLiteral("btn_sel_num1"));
        btn_sel_num1->setGeometry(QRect(290, 110, 127, 25));
        btn_sel_num2 = new QToolButton(page_sys);
        btn_sel_num2->setObjectName(QStringLiteral("btn_sel_num2"));
        btn_sel_num2->setGeometry(QRect(290, 170, 127, 25));
        stackedWidget->addWidget(page_sys);
        page_color = new QWidget();
        page_color->setObjectName(QStringLiteral("page_color"));
        page_color->setStyleSheet(QLatin1String("QLineEdit{\n"
"background-color: rgb(15, 21, 42);\n"
"color:white;\n"
"border:0px\n"
"}\n"
""));
        groupBox_4 = new QGroupBox(page_color);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(270, 90, 191, 151));
        btn_sel_color = new QToolButton(groupBox_4);
        btn_sel_color->setObjectName(QStringLiteral("btn_sel_color"));
        btn_sel_color->setGeometry(QRect(20, 30, 90, 25));
        btn_sel_color->setCheckable(true);
        btn_sel_color->setAutoExclusive(true);
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
        label_26->setGeometry(QRect(70, 70, 16, 16));
        color_b = new QLineEdit(groupBox_4);
        color_b->setObjectName(QStringLiteral("color_b"));
        color_b->setGeometry(QRect(150, 70, 31, 20));
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(130, 70, 16, 16));
        btn_set_color = new QToolButton(groupBox_4);
        btn_set_color->setObjectName(QStringLiteral("btn_set_color"));
        btn_set_color->setGeometry(QRect(30, 110, 127, 25));
        label_color = new QLabel(groupBox_4);
        label_color->setObjectName(QStringLiteral("label_color"));
        label_color->setGeometry(QRect(130, 20, 30, 30));
        label_color->setStyleSheet(QStringLiteral(""));
        groupBox_7 = new QGroupBox(page_color);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(40, 300, 191, 151));
        btn_sel_color_4 = new QToolButton(groupBox_7);
        btn_sel_color_4->setObjectName(QStringLiteral("btn_sel_color_4"));
        btn_sel_color_4->setGeometry(QRect(30, 20, 90, 25));
        btn_sel_color_4->setCheckable(true);
        btn_sel_color_4->setAutoExclusive(true);
        label_40 = new QLabel(groupBox_7);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 70, 21, 16));
        color_r_4 = new QLineEdit(groupBox_7);
        color_r_4->setObjectName(QStringLiteral("color_r_4"));
        color_r_4->setGeometry(QRect(30, 70, 31, 20));
        color_g_4 = new QLineEdit(groupBox_7);
        color_g_4->setObjectName(QStringLiteral("color_g_4"));
        color_g_4->setGeometry(QRect(90, 70, 31, 20));
        label_41 = new QLabel(groupBox_7);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(70, 70, 16, 16));
        color_b_4 = new QLineEdit(groupBox_7);
        color_b_4->setObjectName(QStringLiteral("color_b_4"));
        color_b_4->setGeometry(QRect(150, 70, 31, 20));
        label_42 = new QLabel(groupBox_7);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(130, 70, 16, 16));
        btn_set_color_4 = new QToolButton(groupBox_7);
        btn_set_color_4->setObjectName(QStringLiteral("btn_set_color_4"));
        btn_set_color_4->setGeometry(QRect(30, 110, 127, 25));
        label_color_4 = new QLabel(groupBox_7);
        label_color_4->setObjectName(QStringLiteral("label_color_4"));
        label_color_4->setGeometry(QRect(130, 20, 30, 30));
        label_color_4->setStyleSheet(QStringLiteral(""));
        groupBox_8 = new QGroupBox(page_color);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(270, 300, 191, 151));
        btn_sel_color_5 = new QToolButton(groupBox_8);
        btn_sel_color_5->setObjectName(QStringLiteral("btn_sel_color_5"));
        btn_sel_color_5->setGeometry(QRect(20, 20, 90, 25));
        btn_sel_color_5->setCheckable(true);
        btn_sel_color_5->setAutoExclusive(true);
        label_43 = new QLabel(groupBox_8);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(10, 70, 21, 16));
        color_r_5 = new QLineEdit(groupBox_8);
        color_r_5->setObjectName(QStringLiteral("color_r_5"));
        color_r_5->setGeometry(QRect(30, 70, 31, 20));
        color_g_5 = new QLineEdit(groupBox_8);
        color_g_5->setObjectName(QStringLiteral("color_g_5"));
        color_g_5->setGeometry(QRect(90, 70, 31, 20));
        label_44 = new QLabel(groupBox_8);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(70, 70, 16, 16));
        color_b_5 = new QLineEdit(groupBox_8);
        color_b_5->setObjectName(QStringLiteral("color_b_5"));
        color_b_5->setGeometry(QRect(150, 70, 31, 20));
        label_45 = new QLabel(groupBox_8);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(130, 70, 16, 16));
        btn_set_color_5 = new QToolButton(groupBox_8);
        btn_set_color_5->setObjectName(QStringLiteral("btn_set_color_5"));
        btn_set_color_5->setGeometry(QRect(30, 110, 127, 25));
        label_color_5 = new QLabel(groupBox_8);
        label_color_5->setObjectName(QStringLiteral("label_color_5"));
        label_color_5->setGeometry(QRect(130, 20, 30, 30));
        label_color_5->setStyleSheet(QStringLiteral(""));
        label_24 = new QLabel(page_color);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(200, 20, 81, 41));
        label_24->setStyleSheet(QLatin1String("background-color: rgb(15, 21, 42);\n"
"color:white"));
        btn_detect1 = new QToolButton(page_color);
        btn_detect1->setObjectName(QStringLiteral("btn_detect1"));
        btn_detect1->setGeometry(QRect(70, 170, 127, 25));
        btn_detect2 = new QToolButton(page_color);
        btn_detect2->setObjectName(QStringLiteral("btn_detect2"));
        btn_detect2->setGeometry(QRect(70, 210, 127, 25));
        btn_color_correct = new QPushButton(page_color);
        btn_color_correct->setObjectName(QStringLiteral("btn_color_correct"));
        btn_color_correct->setGeometry(QRect(70, 90, 127, 25));
        btn_color_correct_2 = new QPushButton(page_color);
        btn_color_correct_2->setObjectName(QStringLiteral("btn_color_correct_2"));
        btn_color_correct_2->setGeometry(QRect(70, 130, 127, 25));
        stackedWidget->addWidget(page_color);
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(10, 10, 1150, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        title->setFont(font);
        title->setStyleSheet(QLatin1String("background-image: url(:/ColorDetect/Header);\n"
"color:yellow;\n"
""));
        title->setAlignment(Qt::AlignCenter);
        ColorDetectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ColorDetectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 26));
        ColorDetectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ColorDetectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(126, 100));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        ColorDetectClass->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ColorDetectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        ColorDetectClass->setStatusBar(statusBar);

        mainToolBar->addAction(mainPage);
        mainToolBar->addAction(sysPara);
        mainToolBar->addAction(colorSet);
        mainToolBar->addAction(search);

        retranslateUi(ColorDetectClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ColorDetectClass);
    } // setupUi

    void retranslateUi(QMainWindow *ColorDetectClass)
    {
        ColorDetectClass->setWindowTitle(QApplication::translate("ColorDetectClass", "\350\257\225\347\272\270\351\242\234\350\211\262\346\243\200\346\265\213", 0));
        sysPara->setText(QApplication::translate("ColorDetectClass", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
#ifndef QT_NO_TOOLTIP
        sysPara->setToolTip(QApplication::translate("ColorDetectClass", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
#endif // QT_NO_TOOLTIP
        colorSet->setText(QApplication::translate("ColorDetectClass", "\346\240\241\345\207\206", 0));
#ifndef QT_NO_TOOLTIP
        colorSet->setToolTip(QApplication::translate("ColorDetectClass", "\346\240\241\345\207\206", 0));
#endif // QT_NO_TOOLTIP
        search->setText(QApplication::translate("ColorDetectClass", "\350\256\260\345\275\225\346\237\245\350\257\242", 0));
#ifndef QT_NO_TOOLTIP
        search->setToolTip(QApplication::translate("ColorDetectClass", "\350\256\260\345\275\225\346\237\245\350\257\242", 0));
#endif // QT_NO_TOOLTIP
        mainPage->setText(QApplication::translate("ColorDetectClass", "\344\270\273\347\225\214\351\235\242", 0));
#ifndef QT_NO_TOOLTIP
        mainPage->setToolTip(QApplication::translate("ColorDetectClass", "\344\270\273\347\225\214\351\235\242", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
        label_46->setText(QApplication::translate("ColorDetectClass", "<html><head/><body><p><span style=\" font-size:26pt;\">\344\270\273\347\225\214\351\235\242</span></p></body></html>", 0));
        groupBox_6->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2722\350\267\237\350\270\252", 0));
        label_area2->setText(QString());
        groupBox_5->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\345\214\2721\350\267\237\350\270\252", 0));
        label_area1->setText(QString());
        btn_stop->setText(QApplication::translate("ColorDetectClass", "\345\201\234\346\255\242\346\243\200\346\265\213", 0));
        btn_start->setText(QApplication::translate("ColorDetectClass", "\345\274\200\345\247\213\346\243\200\346\265\213", 0));
        btn_test->setText(QApplication::translate("ColorDetectClass", "\345\257\274\345\205\245\350\247\206\351\242\221", 0));
        btn_test->setShortcut(QApplication::translate("ColorDetectClass", "Ctrl+T", 0));
        btn_close_cam->setText(QApplication::translate("ColorDetectClass", "\345\205\263\351\227\255\347\233\270\346\234\272", 0));
        btn_open_cam->setText(QApplication::translate("ColorDetectClass", "\346\211\223\345\274\200\347\233\270\346\234\272", 0));
        label_8->setText(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\351\242\234\350\211\262\346\225\260\357\274\232", 0));
        label_9->setText(QApplication::translate("ColorDetectClass", "\351\242\234\350\211\2621\346\243\200\346\265\213\346\227\266\351\227\264\357\274\232", 0));
        label_10->setText(QApplication::translate("ColorDetectClass", "\351\242\234\350\211\2622\346\243\200\346\265\213\346\227\266\351\227\264\357\274\232", 0));
        label_29->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        area1_b->setText(QString());
        label_30->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        label_28->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        label_32->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        label_33->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        label_31->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        area2_b->setText(QString());
        btn_play->setText(QApplication::translate("ColorDetectClass", "\346\232\202\345\201\234", 0));
        btn_play->setShortcut(QApplication::translate("ColorDetectClass", "Ctrl+T", 0));
        slider_label->setText(QApplication::translate("ColorDetectClass", "TextLabel", 0));
        label_min->setText(QApplication::translate("ColorDetectClass", "TextLabel", 0));
        label_max->setText(QApplication::translate("ColorDetectClass", "TextLabel", 0));
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
        label_13->setText(QApplication::translate("ColorDetectClass", "<html><head/><body><p><span style=\" font-size:26pt;\">\347\263\273\347\273\237\345\217\202\346\225\260\350\256\276\347\275\256</span></p></body></html>", 0));
        btn_sel_num1->setText(QApplication::translate("ColorDetectClass", "\350\256\276\347\275\2561\344\270\252\346\243\200\346\265\213\345\214\272", 0));
        btn_sel_num2->setText(QApplication::translate("ColorDetectClass", "\350\256\276\347\275\2562\344\270\252\346\243\200\346\265\213\345\214\272", 0));
        groupBox_4->setTitle(QApplication::translate("ColorDetectClass", "\345\210\235\345\247\213\351\242\234\350\211\262\350\256\276\345\256\232", 0));
        btn_sel_color->setText(QApplication::translate("ColorDetectClass", "\351\200\211\346\213\251\345\210\235\345\247\213\351\242\234\350\211\262", 0));
        label_25->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        label_26->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        color_b->setText(QString());
        label_27->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        btn_set_color->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        label_color->setText(QString());
        groupBox_7->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\351\242\234\350\211\2621\350\256\276\345\256\232", 0));
        btn_sel_color_4->setText(QApplication::translate("ColorDetectClass", "\351\200\211\346\213\251\346\243\200\346\265\213\351\242\234\350\211\2621", 0));
        label_40->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        label_41->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        color_b_4->setText(QString());
        label_42->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        btn_set_color_4->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        label_color_4->setText(QString());
        groupBox_8->setTitle(QApplication::translate("ColorDetectClass", "\346\243\200\346\265\213\351\242\234\350\211\2622\350\256\276\345\256\232", 0));
        btn_sel_color_5->setText(QApplication::translate("ColorDetectClass", "\351\200\211\346\213\251\346\243\200\346\265\213\351\242\234\350\211\2622", 0));
        label_43->setText(QApplication::translate("ColorDetectClass", "R:", 0));
        label_44->setText(QApplication::translate("ColorDetectClass", "G:", 0));
        color_b_5->setText(QString());
        label_45->setText(QApplication::translate("ColorDetectClass", "B:", 0));
        btn_set_color_5->setText(QApplication::translate("ColorDetectClass", "\347\241\256\345\256\232", 0));
        label_color_5->setText(QString());
        label_24->setText(QApplication::translate("ColorDetectClass", "<html><head/><body><p><span style=\" font-size:26pt;\">\346\240\241\345\207\206</span></p></body></html>", 0));
        btn_detect1->setText(QApplication::translate("ColorDetectClass", " \346\243\200\346\265\2131\346\254\241\351\242\234\350\211\262\345\217\230\345\214\226", 0));
        btn_detect2->setText(QApplication::translate("ColorDetectClass", " \346\243\200\346\265\2132\346\254\241\351\242\234\350\211\262\345\217\230\345\214\226", 0));
        btn_color_correct->setText(QApplication::translate("ColorDetectClass", "\347\233\270\346\234\272\351\242\234\350\211\262\346\240\241\346\255\243", 0));
        btn_color_correct_2->setText(QApplication::translate("ColorDetectClass", "\347\231\275\345\271\263\350\241\241", 0));
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ColorDetectClass: public Ui_ColorDetectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDETECT_H
