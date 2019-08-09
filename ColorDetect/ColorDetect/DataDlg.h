#pragma once

#include <QWidget>
#include "ui_DataDlg.h"
#include <QDir>
#include <QMessageBox>
#include <fstream>
#include <iostream> 

class DataDlg : public QWidget
{
	Q_OBJECT

public:
	DataDlg(QWidget *parent = Q_NULLPTR);
	~DataDlg();

private:
	Ui::DataDlg ui;

public slots:

	void openRecord();

};
