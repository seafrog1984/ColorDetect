#include "DataDlg.h"


extern QString g_data_path;

using namespace std;

DataDlg::DataDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(21,85,141);color:rgb(255,255,255);}"); //设置表头背景色
	ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.tableWidget->horizontalHeader()->setVisible(true);
//	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.tableWidget->horizontalHeader()->setStretchLastSection(true); //设置充满表宽度
	ui.tableWidget->setColumnWidth(0, 60);//设置第一列宽度
	ui.tableWidget->setColumnWidth(1, 150);//设置第一列宽度

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//设置单击选择一行
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);	//设置每行内容不可编辑
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);	//设置只能选择一行，不能选择多行


	QDir dir(g_data_path);

	QStringList nameFilters;
	nameFilters << "*.txt";
	QStringList files = dir.entryList(nameFilters, QDir::Files | QDir::Readable, QDir::Name);

	for (int i = 0; i < files.size(); i++)
	{
		ui.listWidget->addItem(files[i]);
	}

	connect(ui.listWidget, SIGNAL(itemSelectionChanged()), this, SLOT(openRecord()));

}

DataDlg::~DataDlg()
{
}

void DataDlg::openRecord()
{

	QString fileName;

	fileName = ui.listWidget->currentItem()->text();
	QString filePath = g_data_path + fileName;

//	QMessageBox::information(NULL, "Title", filePath);

	QList<QString> lst;
	lst = fileName.split('.')[0].split('-');

	QString startTime = lst[0] + '-' + lst[1] + '-' + lst[2] + ' ' + lst[3] + ':' + lst[4];

	ui.start_time->setText(startTime);

	ifstream fin(filePath.toStdString());

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", "No area1!");

	}
	else
	{
		string tmp;
		int line = 0;
		while (getline(fin, tmp, '\n'))
		{
			line++;
		}

		fin.close();

		fin.open(filePath.toStdString());

		if (fin.fail())
		{
			QMessageBox::information(NULL, "Title", "No area1!");

		}

		int area_num = 1;
		getline(fin, tmp, '\n');

		area_num = QString::fromStdString(tmp).toInt();

		if (area_num == 1)
		{
			ui.tableWidget->setRowCount(0);
			QString time,r, g, b,totalTime, checkState,area;
			for (int i = 1; i < line-1; i++)
			{
				getline(fin,tmp,'\n');
				

				QList<QString> lst;
				lst = QString::fromStdString (tmp).split(' ');

				time = lst[0];
				r = lst[1];
				g = lst[2];
				b = lst[3];

				ui.tableWidget->insertRow(i-1);
				ui.tableWidget->setItem(i-1, 0, new QTableWidgetItem(time));

				QString rgb = r + ',' + g + ',' + b;
				ui.tableWidget->setItem(i - 1, 1, new QTableWidgetItem(rgb));
			}

			getline(fin, tmp, '\n');
			QList<QString> lst;
			lst = QString::fromStdString(tmp).split(' ');

			totalTime = lst[0];
			checkState = lst[1];
			int t = checkState.toInt();
			switch (t)
			{
			case 0:
				checkState = QString::fromLocal8Bit("超时");
				break;
			case 1:
				checkState = QString::fromLocal8Bit("检测到终止颜色");
				break;
			case 2:
				checkState = QString::fromLocal8Bit("手动终止");
				break;
			default:
				checkState = QString::fromLocal8Bit("非正常结束");
				break;
			}

			ui.time_total->setText(totalTime);
			ui.check_state->setText(checkState);
		}
		else if (area_num == 2)
		{
			ui.tableWidget->setRowCount(0);
			QString time, r, g, b, r2, g2, b2, totalTime, checkState, area;

			for (int i = 1; i < line - 1; i++)
			{
				getline(fin, tmp, '\n');


				QList<QString> lst;
				lst = QString::fromStdString(tmp).split(' ');

				time = lst[0];
				r = lst[1];
				g = lst[2];
				b = lst[3];
				r2 = lst[4];
				g2 = lst[5];
				b2 = lst[6];

				ui.tableWidget->insertRow(i - 1);
				ui.tableWidget->setItem(i - 1, 0, new QTableWidgetItem(time));

				QString rgb = r + ',' + g + ',' + b;
				ui.tableWidget->setItem(i - 1, 1, new QTableWidgetItem(rgb));

				QString rgb2 = r2 + ',' + g2 + ',' + b2;
				ui.tableWidget->setItem(i - 1, 2, new QTableWidgetItem(rgb2));
			}

			getline(fin, tmp, '\n');
			QList<QString> lst;
			lst = QString::fromStdString(tmp).split(' ');

			totalTime = lst[0];
			checkState = lst[1];

			int t = checkState.toInt();
			switch (t)
			{
			case 0:
				checkState = QString::fromLocal8Bit("超时");
				break;
			case 1:
				checkState = QString::fromLocal8Bit("检测到终止颜色");
				break;
			case 2:
				checkState = QString::fromLocal8Bit("手动终止");
				break;
			default:
				checkState = QString::fromLocal8Bit("非正常结束");
				break;
			}

			ui.time_total->setText(totalTime);
			ui.check_state->setText(checkState);

		}




	}

}
