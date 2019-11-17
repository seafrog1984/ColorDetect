/********************************************************************************
** Form generated from reading UI file 'DataDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATADLG_H
#define UI_DATADLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataDlg
{
public:
    QTableWidget *tableWidget;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QLineEdit *check_state_2;
    QLabel *label_7;
    QLineEdit *start_time;
    QLabel *label_3;
    QLineEdit *time_total;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *check_state;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QDateTimeEdit *time_start;
    QDateTimeEdit *time_end;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_time_sel;
    QLabel *label_8;
    QLineEdit *user;
    QPushButton *btn_user_sel;

    void setupUi(QWidget *DataDlg)
    {
        if (DataDlg->objectName().isEmpty())
            DataDlg->setObjectName(QStringLiteral("DataDlg"));
        DataDlg->resize(910, 638);
        DataDlg->setStyleSheet(QLatin1String("QWidget#DataDlg{\n"
"border-color: rgb(15, 21, 42);\n"
"background-color: rgb(15, 21, 42);\n"
"border-width:0px;\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"background-color:  rgb(15, 21, 42);\n"
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
"QLabel{\n"
"background-color:rgb(22,68, 117);\n"
"color:white;\n"
"border:0px\n"
"}\n"
"QLineEdit{\n"
"background-color: rgb(15, 21, 42);\n"
"color:white;\n"
"border:0px\n"
"}\n"
"\n"
""));
        tableWidget = new QTableWidget(DataDlg);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(390, 150, 450, 431));
        listWidget = new QListWidget(DataDlg);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 160, 261, 421));
        groupBox = new QGroupBox(DataDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(360, 30, 501, 571));
        check_state_2 = new QLineEdit(groupBox);
        check_state_2->setObjectName(QStringLiteral("check_state_2"));
        check_state_2->setGeometry(QRect(320, 68, 111, 20));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 70, 54, 12));
        start_time = new QLineEdit(groupBox);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setGeometry(QRect(100, 35, 141, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 38, 81, 16));
        time_total = new QLineEdit(groupBox);
        time_total->setObjectName(QStringLiteral("time_total"));
        time_total->setGeometry(QRect(320, 35, 51, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 70, 54, 12));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 38, 54, 12));
        check_state = new QLineEdit(groupBox);
        check_state->setObjectName(QStringLiteral("check_state"));
        check_state->setGeometry(QRect(100, 68, 141, 20));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 35, 31, 16));
        groupBox_2 = new QGroupBox(DataDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 29, 311, 571));
        time_start = new QDateTimeEdit(groupBox_2);
        time_start->setObjectName(QStringLiteral("time_start"));
        time_start->setGeometry(QRect(70, 30, 161, 22));
        time_start->setCalendarPopup(true);
        time_end = new QDateTimeEdit(groupBox_2);
        time_end->setObjectName(QStringLiteral("time_end"));
        time_end->setGeometry(QRect(70, 60, 161, 22));
        time_end->setCalendarPopup(true);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 54, 12));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 65, 54, 12));
        btn_time_sel = new QPushButton(groupBox_2);
        btn_time_sel->setObjectName(QStringLiteral("btn_time_sel"));
        btn_time_sel->setGeometry(QRect(240, 40, 61, 23));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 100, 54, 12));
        user = new QLineEdit(groupBox_2);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(70, 95, 113, 20));
        user->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        btn_user_sel = new QPushButton(groupBox_2);
        btn_user_sel->setObjectName(QStringLiteral("btn_user_sel"));
        btn_user_sel->setGeometry(QRect(240, 95, 61, 23));
        groupBox_2->raise();
        groupBox->raise();
        tableWidget->raise();
        listWidget->raise();

        retranslateUi(DataDlg);

        QMetaObject::connectSlotsByName(DataDlg);
    } // setupUi

    void retranslateUi(QWidget *DataDlg)
    {
        DataDlg->setWindowTitle(QApplication::translate("DataDlg", "\346\243\200\346\265\213\350\256\260\345\275\225\346\237\245\350\257\242", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DataDlg", "\345\214\272\345\237\2371 \351\242\234\350\211\262", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DataDlg", "\345\214\272\345\237\2372 \351\242\234\350\211\262", 0));
        groupBox->setTitle(QApplication::translate("DataDlg", "\350\256\260\345\275\225\350\257\246\346\203\205\357\274\232", 0));
        check_state_2->setText(QString());
        label_7->setText(QApplication::translate("DataDlg", "\351\242\234\350\211\2622\357\274\232", 0));
        label_3->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_6->setText(QApplication::translate("DataDlg", "\351\242\234\350\211\2621\357\274\232", 0));
        label_4->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\346\227\266\351\225\277\357\274\232", 0));
        label_5->setText(QApplication::translate("DataDlg", "\345\210\206\351\222\237", 0));
        groupBox_2->setTitle(QApplication::translate("DataDlg", "\346\243\200\346\265\213\350\256\260\345\275\225\345\210\227\350\241\250\357\274\232", 0));
        label->setText(QApplication::translate("DataDlg", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_2->setText(QApplication::translate("DataDlg", "\347\273\210\346\255\242\346\227\266\351\227\264\357\274\232", 0));
        btn_time_sel->setText(QApplication::translate("DataDlg", "\347\255\233\351\200\211", 0));
        label_8->setText(QApplication::translate("DataDlg", "\346\223\215\344\275\234\345\221\230\357\274\232", 0));
        btn_user_sel->setText(QApplication::translate("DataDlg", "\347\255\233\351\200\211", 0));
    } // retranslateUi

};

namespace Ui {
    class DataDlg: public Ui_DataDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATADLG_H
