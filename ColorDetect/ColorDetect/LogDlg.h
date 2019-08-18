#pragma once

#include <QWidget>
#include "ui_LogDlg.h"
#include <QFile>
#include <QFileInfo>
#include <QByteArray>
#include <vector>
#include <string.h>

#include "ColorDetect.h"

using namespace std;

//½á¹¹Ìå
struct User
{
	int n;
	char username[10][20];
	char pw[10][20];
};



class LogDlg : public QWidget
{
	Q_OBJECT

public:
	LogDlg(QWidget *parent = Q_NULLPTR);
	~LogDlg();

	void writeData(QFile &f,const User &item);
	void readData(QFile &f, User &item,int len);

	User m_udata;
	QString m_msg;

private:
	Ui::LogDlg ui;

private slots:
	void log();
};
