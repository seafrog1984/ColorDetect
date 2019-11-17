#include "LogDlg.h"

QString g_user;
QString g_pw;

LogDlg::LogDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.btn_log, SIGNAL(clicked()), this, SLOT(log()));

	/*User p1;
	p1.n = 2;
	strcpy(p1.username[0], "admin");
	strcpy(p1.username[1], "test");
	strcpy(p1.pw[0], "admin");
	strcpy(p1.pw[1], "test");
	QFile file("./stream.bat");
	if (!file.open(QIODevice::WriteOnly))
	{
		return;
	}
	writeData(file, p1);
	file.close();*/

	QFile file1("D:\\ColorConfig\\stream.bat");//.bat文件为二进制文件
	QFileInfo info("D:\\ColorConfig\\stream.bat");
	if (!file1.open(QIODevice::ReadOnly))
	{
		return;
	}
	readData(file1, m_udata, info.size());
	file1.close();

	ui.lineEdit_user->setText("admin");
	ui.lineEdit_pw->setText("admin");

}

LogDlg::~LogDlg()
{

}

void LogDlg::writeData(QFile &f, const User &item)
{
	QByteArray ba;
	ba.resize(sizeof(User));
	memset(ba.data(), 0, sizeof(User));
	memcpy(ba.data(), &item, sizeof(User));
	f.write( ba);

}
void LogDlg::readData(QFile &f, User &item,int len)
{
	QByteArray ba;
	ba.resize(len);

	ba = f.readAll();

	memcpy(&item, ba.data(), len);
}


void LogDlg::log()
{

	g_user = ui.lineEdit_user->text();
	g_pw = ui.lineEdit_pw->text();

	int log_flag = 0;
	int index = 0;
	for (int i = 0; i < m_udata.n; i++)
	{
		if (g_user == QString::fromStdString(m_udata.username[i]))
		{
			log_flag = 1;
			index = i;
			break;
		}
	}

	if (g_pw == QString::fromStdString(m_udata.pw[index]))
		log_flag = 2;

	if (log_flag == 2)
	{
		ColorDetect *w=new ColorDetect;	
	//	w->setWindowFlags(w->windowFlags()& ~Qt::WindowMaximizeButtonHint& ~Qt::WindowMinimizeButtonHint);
		//w->setWindowFlags(w->windowFlags()& ~Qt::WindowMaximizeButtonHint);
		w->showMaximized();

		this->setHidden(true);
	}
	else if (log_flag == 0)
	{
		m_msg=QString::fromLocal8Bit("用户名不正确");
		QMessageBox::information(NULL, "Title", m_msg);
	}
	else if (log_flag == 1)
	{
		m_msg = QString::fromLocal8Bit("密码不正确");
		QMessageBox::information(NULL, "Title", m_msg);
	}

}