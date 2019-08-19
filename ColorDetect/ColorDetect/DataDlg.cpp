#include "DataDlg.h"


extern QString g_data_path;

using namespace std;

DataDlg::DataDlg(QWidget *parent)
: QWidget(parent)
{
	ui.setupUi(this);

	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(21,85,141);color:rgb(255,255,255);}"); //���ñ�ͷ����ɫ
	ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.tableWidget->horizontalHeader()->setVisible(true);
	//	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.tableWidget->horizontalHeader()->setStretchLastSection(true); //���ó�������
	ui.tableWidget->setColumnWidth(0, 100);//���õ�һ�п��
	ui.tableWidget->setColumnWidth(1, 175);//���õ�һ�п��
	ui.tableWidget->setColumnWidth(2, 175);//���õ�һ�п��

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//���õ���ѡ��һ��
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);	//����ÿ�����ݲ��ɱ༭
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);	//����ֻ��ѡ��һ�У�����ѡ�����


	QDir dir(g_data_path);

	QStringList nameFilters;
	nameFilters << "*.txt";
	m_files = dir.entryList(nameFilters, QDir::Files | QDir::Readable, QDir::Name);


	for (int i = 0; i < m_files.size(); i++)
	{
		ui.listWidget->addItem(m_files[i].split('.')[0]);
	}

	connect(ui.listWidget, SIGNAL(itemSelectionChanged()), this, SLOT(openRecord()));
	connect(ui.btn_time_sel, SIGNAL(clicked()), this, SLOT(timeSel()));
	connect(ui.btn_user_sel, SIGNAL(clicked()), this, SLOT(userSel()));

	ui.time_start->setDateTime(QDateTime::currentDateTime());
	ui.time_end->setDateTime(QDateTime::currentDateTime());
}

DataDlg::~DataDlg()
{
}

void DataDlg::timeSel()
{
	ui.listWidget->clear();

	QDateTime startTime = ui.time_start->dateTime();
	QDateTime endTime = ui.time_end->dateTime();
	QDateTime time;

	if (startTime == endTime)
	{
		for (int i = 0; i < m_files.size(); i++)
		{
			ui.listWidget->addItem(m_files[i].split('.')[0]);
		}
	}
	else
	{
		for (int i = 0; i < m_files.size(); i++)
		{
			time = QDateTime::fromString(m_files[i].split('.')[0].split('#')[1], "yyyy-MM-dd-hh-mm-ss");

			if (time >= startTime&&time <= endTime)
				ui.listWidget->addItem(m_files[i].split('.')[0]);
		}
	}



}

void DataDlg::userSel()
{
	ui.listWidget->clear();
	QString username = ui.user->text();
	
	if (username == "")
	{
		for (int i = 0; i < m_files.size(); i++)
		{
			ui.listWidget->addItem(m_files[i].split('.')[0]);
		}
	}
	else
	{
		for (int i = 0; i < m_files.size(); i++)
		{
			if (m_files[i].split('#')[0] == username)
				ui.listWidget->addItem(m_files[i].split('.')[0]);
		}
	}


}



void DataDlg::openRecord()
{

	QString fileName;

	fileName = ui.listWidget->currentItem()->text();
	QString filePath = g_data_path + fileName + ".txt";
	QString resultPath = g_data_path + fileName + ".dat";

	//	QMessageBox::information(NULL, "Title", filePath);

	QList<QString> lst;
	lst = fileName.split('-');

	QString startTime = lst[0] + '-' + lst[1] + '-' + lst[2] + ' ' + lst[3] + ':' + lst[4] + ':' + lst[5];

	ui.start_time->setText(startTime);

	ifstream fin_result(resultPath.toStdString());

	if (fin_result.fail())
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("û�м�����ļ�!"));

	}
	else
	{
		string tmp;
		int line = 0;

		int color_num = 1;
		getline(fin_result, tmp, '\n');

		color_num = QString::fromStdString(tmp).toInt();

		getline(fin_result, tmp, '\n');
		QList<QString> lst;
		lst = QString::fromStdString(tmp).split(' ');

		QString checkState, checkTime;

		checkTime = lst[0];
		checkState = lst[1];
		int t = checkState.toInt();
		switch (t)
		{
		case 0:
			checkState = QString::fromLocal8Bit("��ʱ");
			break;
		case 1:
			checkState = checkTime + QString::fromLocal8Bit("����");
			break;
		case 2:
			checkState = QString::fromLocal8Bit("�ֶ���ֹ");
			break;
		default:
			checkState = QString::fromLocal8Bit("����������");
			break;
		}

		ui.time_total->setText(checkTime);
		ui.check_state->setText(checkState);

		if (getline(fin_result, tmp, '\n') && color_num == 2)
		{
			QList<QString> lst;
			lst = QString::fromStdString(tmp).split(' ');

			QString checkState, checkTime;

			checkTime = lst[0];
			checkState = lst[1];
			int t = checkState.toInt();
			switch (t)
			{
			case 0:
				checkState = QString::fromLocal8Bit("��ʱ");
				break;
			case 1:
				checkState = checkTime + QString::fromLocal8Bit("����");
				break;
			case 2:
				checkState = QString::fromLocal8Bit("�ֶ���ֹ");
				break;
			default:
				checkState = QString::fromLocal8Bit("����������");
				break;
			}

			ui.time_total->setText(checkTime);
			ui.check_state_2->setText(checkState);
		}


	}
	fin_result.close();


	ifstream fin(filePath.toStdString());

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("û�м�������ļ�!"));

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
			QString time, r, g, b, area;
			for (int i = 1; i < line; i++)
			{
				getline(fin, tmp, '\n');


				QList<QString> lst;
				lst = QString::fromStdString(tmp).split(' ');

				time = lst[0];
				r = lst[1];
				g = lst[2];
				b = lst[3];

				ui.tableWidget->insertRow(i - 1);
				ui.tableWidget->setItem(i - 1, 0, new QTableWidgetItem(time));

				QString rgb = r + ',' + g + ',' + b;
				ui.tableWidget->setItem(i - 1, 1, new QTableWidgetItem(rgb));
			}

			/*getline(fin, tmp, '\n');
			QList<QString> lst;
			lst = QString::fromStdString(tmp).split(' ');

			totalTime = lst[0];
			checkState = lst[1];
			int t = checkState.toInt();
			switch (t)
			{
			case 0:
			checkState = QString::fromLocal8Bit("��ʱ");
			break;
			case 1:
			checkState = QString::fromLocal8Bit("��⵽��ֹ��ɫ");
			break;
			case 2:
			checkState = QString::fromLocal8Bit("�ֶ���ֹ");
			break;
			default:
			checkState = QString::fromLocal8Bit("����������");
			break;
			}

			ui.time_total->setText(totalTime);
			ui.check_state->setText(checkState);*/
		}
		else if (area_num == 2)
		{
			ui.tableWidget->setRowCount(0);
			QString time, r, g, b, r2, g2, b2, totalTime, checkState, area;

			for (int i = 1; i < line; i++)
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

			/*getline(fin, tmp, '\n');
			QList<QString> lst;
			lst = QString::fromStdString(tmp).split(' ');

			totalTime = lst[0];
			checkState = lst[1];

			int t = checkState.toInt();
			switch (t)
			{
			case 0:
			checkState = QString::fromLocal8Bit("��ʱ");
			break;
			case 1:
			checkState = QString::fromLocal8Bit("��⵽��ֹ��ɫ");
			break;
			case 2:
			checkState = QString::fromLocal8Bit("�ֶ���ֹ");
			break;
			default:
			checkState = QString::fromLocal8Bit("����������");
			break;
			}

			ui.time_total->setText(totalTime);
			ui.check_state->setText(checkState);
			*/
		}




	}

}
