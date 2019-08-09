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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QLineEdit *start_time;
    QLabel *label_4;
    QLineEdit *time_total;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *check_state;
    QListWidget *listWidget;

    void setupUi(QWidget *DataDlg)
    {
        if (DataDlg->objectName().isEmpty())
            DataDlg->setObjectName(QStringLiteral("DataDlg"));
        DataDlg->resize(688, 529);
        label = new QLabel(DataDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 15, 91, 16));
        label_2 = new QLabel(DataDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 10, 54, 16));
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
        tableWidget->setGeometry(QRect(260, 100, 360, 401));
        label_3 = new QLabel(DataDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 40, 81, 16));
        start_time = new QLineEdit(DataDlg);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setGeometry(QRect(350, 37, 113, 20));
        label_4 = new QLabel(DataDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 40, 54, 12));
        time_total = new QLineEdit(DataDlg);
        time_total->setObjectName(QStringLiteral("time_total"));
        time_total->setGeometry(QRect(540, 37, 51, 20));
        label_5 = new QLabel(DataDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(600, 40, 54, 12));
        label_6 = new QLabel(DataDlg);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 70, 54, 12));
        check_state = new QLineEdit(DataDlg);
        check_state->setObjectName(QStringLiteral("check_state"));
        check_state->setGeometry(QRect(350, 70, 111, 20));
        listWidget = new QListWidget(DataDlg);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 70, 201, 431));

        retranslateUi(DataDlg);

        QMetaObject::connectSlotsByName(DataDlg);
    } // setupUi

    void retranslateUi(QWidget *DataDlg)
    {
        DataDlg->setWindowTitle(QApplication::translate("DataDlg", "\346\243\200\346\265\213\350\256\260\345\275\225\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\350\256\260\345\275\225\345\210\227\350\241\250\357\274\232", 0));
        label_2->setText(QApplication::translate("DataDlg", "\350\256\260\345\275\225\350\257\246\346\203\205\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DataDlg", "\345\214\272\345\237\2371 \351\242\234\350\211\262", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DataDlg", "\345\214\272\345\237\2372 \351\242\234\350\211\262", 0));
        label_3->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_4->setText(QApplication::translate("DataDlg", "\346\243\200\346\265\213\346\227\266\351\225\277\357\274\232", 0));
        label_5->setText(QApplication::translate("DataDlg", "\345\210\206\351\222\237", 0));
        label_6->setText(QApplication::translate("DataDlg", "\347\273\210\346\255\242\347\212\266\346\200\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class DataDlg: public Ui_DataDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATADLG_H
