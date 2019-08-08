#include "ColorDetect.h"

#define ROI_BORDER 2


int g_cur_shape = 0;
int g_shapeNum=1;
int g_sel1_done = 0;
int g_sel_flag = 0;//0：不选择区域；1：选择检测区域；2：选择颜色区域
int g_start_flag = 0;


using namespace std;
using namespace cv;

ColorDetect::ColorDetect(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	timer = new QTimer(this);
	detect_timer = new QTimer(this);
	
	connect(timer, SIGNAL(timeout()), this, SLOT(ReadFrame()));
	connect(detect_timer, SIGNAL(timeout()), this, SLOT(detect()));

	connect(ui.btn_open_cam, SIGNAL(clicked()), this, SLOT(OpenCameraClicked()));//打开摄像头
	connect(ui.btn_close_cam, SIGNAL(clicked()), this, SLOT(CloseCameraClicked()));//关闭摄像头
	connect(ui.btn_start, SIGNAL(clicked()), this, SLOT(start()));//打开摄像头
	connect(ui.btn_stop, SIGNAL(clicked()), this, SLOT(stop()));//关闭摄像头

	connect(ui.label, SIGNAL(updateShape()), this, SLOT(updateShape()));//更新选择区域

	connect(ui.btn_sel1, SIGNAL(clicked()), this, SLOT(sel1()));//选择区域1
	connect(ui.btn_sel2, SIGNAL(clicked()), this, SLOT(sel2()));//选择区域2
	connect(ui.btn_set_area1, SIGNAL(clicked()), this, SLOT(setArea1()));//设置区域1
	connect(ui.btn_set_area2, SIGNAL(clicked()), this, SLOT(setArea2()));//设置区域2

	connect(ui.btn_sel_color, SIGNAL(clicked()), this, SLOT(selColor()));//选择颜色区域
	connect(ui.btn_set_color, SIGNAL(clicked()), this, SLOT(setColor()));//设置颜色

	connect(ui.btn_set_time, SIGNAL(clicked()), this, SLOT(setTime()));//设置时间

	capture.open("D:\\1.avi");

	QDir dir;
	m_data_path = dir.currentPath() + "//Data//";
	if (!dir.exists(m_data_path))
	{
		bool res = dir.mkpath(m_data_path);
		//		qDebug() << "新建目录是否成功" << res;
	}


	ifstream fin("area1.ini");

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", "No area1!");
		
	}
	else
	{
		fin >> m_sx1 >> m_sy1 >> m_w1 >> m_h1;

		ui.label->p1.setX(m_sx1);
		ui.label->p1.setY(m_sy1);
		ui.label->p2.setX(m_sx1 + m_w1);
		ui.label->p2.setY(m_sy1 + m_h1);
		ui.label->str1 = QString::fromLocal8Bit("区域1");

		g_sel1_done = 1;

		ui.area1_sx->setText(QString::number(m_sx1));
		ui.area1_sy->setText(QString::number(m_sy1));
		ui.area1_w->setText(QString::number(m_w1));
		ui.area1_h->setText(QString::number(m_h1));
	}
	fin.close();

	ifstream fin2("area2.ini");
	if (fin2.fail())
	{
		QMessageBox::information(NULL, "Title", "No area2!");

	}
	else
	{
		fin2 >> m_sx2 >> m_sy2 >> m_w2 >> m_h2;

		ui.label->p3.setX(m_sx2);
		ui.label->p3.setY(m_sy2);
		ui.label->p4.setX(m_sx2 + m_w2);
		ui.label->p4.setY(m_sy2 + m_h2);

		ui.label->str2 = QString::fromLocal8Bit("区域2");

		ui.area2_sx->setText(QString::number(m_sx2));
		ui.area2_sy->setText(QString::number(m_sy2));
		ui.area2_w->setText(QString::number(m_w2));
		ui.area2_h->setText(QString::number(m_h2));

		g_shapeNum = 2;
		ui.label->update();
	}
	fin2.close();

	ifstream fin3("color.ini");
	if (fin3.fail())
	{
		QMessageBox::information(NULL, "Title", "No color!");

	}
	else
	{
		fin3 >> m_dst_r >> m_dst_g >> m_dst_b;

		ui.color_b->setText(QString::number(m_dst_b));
		ui.color_g->setText(QString::number(m_dst_g));
		ui.color_r->setText(QString::number(m_dst_r));


		ui.label_8->setAutoFillBackground(true);
		QPalette p = ui.label_8->palette();
		p.setColor(QPalette::Window, QColor(m_dst_r, m_dst_g, m_dst_r));
		ui.label_8->setPalette(p);
		ui.label_8->update();
	}
	fin3.close();

	ifstream fin_time("time.ini");
	if (fin_time.fail())
	{
		QMessageBox::information(NULL, "Title", "No time!");

	}
	else
	{
		fin_time >> m_time_inter >> m_time_total;

		ui.time_inter->setText(QString::number(m_time_inter));
		ui.time_total->setText(QString::number(m_time_total));
	
	}
	fin_time.close();

	m_th = 3;

	//timer->start(25);//开启定时器，一次25ms



}

void ColorDetect::detect()
{
	if (g_start_flag)
	{
		QDateTime current_time = QDateTime::currentDateTime();
		QString timestr = current_time.toString("yyyy-MM-dd-hh-mm"); //设置显示的格式
		m_data_file = m_data_path + timestr + ".dat";
		
		g_start_flag = 0;

		fstream fout(m_data_file.toStdString(), ios::app);
		if (fout.fail())
		{
			QMessageBox::information(NULL, "Title", "open file fail:" + m_data_file);
		}

		fout << g_shapeNum << endl;
		fout.close();
	}

	fstream fout(m_data_file.toStdString(), ios::app);
	if (fout.fail())
	{
		QMessageBox::information(NULL, "Title", "open file fail:" + m_data_file);
	}

	int r, g, b;
	if (!frame.empty())
	{
		CalRGB(frame, m_sx1, m_sy1, m_w1, m_h1, r, g, b);
	}
	else
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("图像为空！"));
		return;
	}

	ui.area1_b->setText(QString::number(b));
	ui.area1_g->setText(QString::number(g));
	ui.area1_r->setText(QString::number(r));


	ui.label_area1->setAutoFillBackground(true);
	QPalette p = ui.label_area1->palette();
	p.setColor(QPalette::Window, QColor(r, g, b));
	ui.label_area1->setPalette(p);
	ui.label_area1->update();

	fout <<m_cur_time << ' '<< r << ' ' << g << ' ' << b;

	int r2=0, g2=0, b2=0;
	if (g_shapeNum == 2)
	{

		if (!frame.empty())
		{
			CalRGB(frame, m_sx2, m_sy2, m_w2, m_h2, r2, g2, b2);
		}
		else
		{
			QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("图像为空！"));
			return;
		}

		ui.area2_b->setText(QString::number(b2));
		ui.area2_g->setText(QString::number(g2));
		ui.area2_r->setText(QString::number(r2));


		ui.label_area2->setAutoFillBackground(true);
		QPalette p = ui.label_area2->palette();
		p.setColor(QPalette::Window, QColor(r2, g2, b2));
		ui.label_area2->setPalette(p);
		ui.label_area2->update();

		fout << " " << r2 << ' ' << g2 << ' ' << b2;
	}
	fout << endl;

	if (CompareRGB(r, g, b, m_dst_r, m_dst_g, m_dst_b, m_th) == 0)
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域1检测到终止颜色！"));

		fout <<m_cur_time << ' ' << 1 << ' '<<1<<endl;
		fout.close();
		detect_timer->stop();
		return;
	}
	if (CompareRGB(r2, g2, b2, m_dst_r, m_dst_g, m_dst_b, m_th) == 0)
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域2检测到终止颜色！"));

		fout << m_cur_time << ' ' << 1 << ' ' << 2 << endl;
		fout.close();
		detect_timer->stop();
		return;
	}

	if (m_cur_time >= m_time_total)
	{
		QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("终止时间到！"));

		fout << m_cur_time << ' ' << 0 << ' ' << 0 << endl;//总时间；是否检测到目标颜色（0-未检测到；1-检测到；2-手动停止）；检测到颜色区域（0-未检测到；1-区域1；2-区域2）
		fout.close();
		detect_timer->stop();
		return;

	}

	fout.close();

	m_cur_time += m_time_inter;

}

void ColorDetect::setTime()
{

	ofstream fout("time.ini");

	m_time_inter = ui.time_inter->text().toInt();
	m_time_total = ui.time_total->text().toInt();

	fout << m_time_inter << ' ' << m_time_total;

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("时间设置成功"));
}

void ColorDetect::setColor()
{
	g_sel_flag = 0;

	ofstream fout("color.ini");

	int r, g, b;
	r = ui.color_r->text().toInt();
	g = ui.color_g->text().toInt();
	b = ui.color_b->text().toInt();

	fout << r << ' ' << g << ' ' <<b;

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("颜色设置成功"));
}

void ColorDetect::selColor()
{
	g_sel_flag = 2;
}

void ColorDetect::sel1()
{
	g_cur_shape = 0;
	g_shapeNum = 1;
	g_sel1_done = 1;
	g_sel_flag = 1;
}

void ColorDetect::sel2()
{
	if (g_sel1_done)
	{
		g_cur_shape = 1;
		g_shapeNum = 2;
		g_sel_flag = 1;
	}
	else
	{
		QMessageBox::information(this, "Warning", QString::fromLocal8Bit("请先设置区域1！"));
		return;
	}

}

void ColorDetect::setArea1()
{
	int sx, sy, w, h;

	sx = ui.area1_sx->text().toInt();
	sy = ui.area1_sy->text().toInt();
	w = ui.area1_w->text().toInt();
	h = ui.area1_h->text().toInt();

	ofstream fout("area1.ini");

	fout << sx << ' ' << sy << ' ' << w << ' ' <<h;

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域1设置成功"));
}


void ColorDetect::setArea2()
{
	int sx, sy, w, h;

	sx = ui.area2_sx->text().toInt();
	sy = ui.area2_sy->text().toInt();
	w = ui.area2_w->text().toInt();
	h = ui.area2_h->text().toInt();

	ofstream fout("area2.ini");

	fout << sx << ' ' << sy << ' ' << w << ' ' << h;

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域2设置成功"));
}


void ColorDetect::updateShape()
{
	int sx, sy, ex, ey,w,h;
	if (g_sel_flag == 2)
	{
		sx = ui.label->p5.x();
		sy = ui.label->p5.y();
		ex = ui.label->p6.x();
		ey = ui.label->p6.y();

		w = ex - sx;
		h = ey - sy;

		Mat roi;

		int ret=CalROI(frame, sx, sy, w, h,ROI_BORDER);

		if (ret == -1)
		{
			QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域选择不正确！"));
			return;
		}

		ui.label->p5.setX(sx);
		ui.label->p5.setY(sy);
		ui.label->p6.setX(sx + w);
		ui.label->p6.setY(sy + h);

		int r, g, b;
		if (!frame.empty())
		{
			CalRGB(frame, sx, sy, w, h, r, g, b);
		}
		else
		{
			QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("图像为空！"));
			return;
		}

		ui.color_b->setText(QString::number(b));
		ui.color_g->setText(QString::number(g));
		ui.color_r->setText(QString::number(r));


		ui.label_8->setAutoFillBackground(true);
		QPalette p = ui.label_8->palette();
		p.setColor(QPalette::Window, QColor(r, g, b));
		ui.label_8->setPalette(p);
		ui.label_8->update();


	}
	else
	{
		if (g_cur_shape == 0)
		{
			sx = ui.label->p1.x();
			sy = ui.label->p1.y();
			ex = ui.label->p2.x();
			ey = ui.label->p2.y();

			ui.area1_sx->setText(QString::number(sx));
			ui.area1_sy->setText(QString::number(sy));
			ui.area1_w->setText(QString::number(ex - sx));
			ui.area1_h->setText(QString::number(ey - sy));

			w = ex - sx;
			h = ey - sy;
			int ret;
			if (!frame.empty())
			{
				ret=CalROI(frame, sx, sy, w, h, ROI_BORDER);
			}
			else
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("图像为空！"));
				return;
			}

			if (ret == -1)
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域选择不正确！"));
				return;
			}

			m_sx1 = sx;
			m_sy1 = sy;
			m_w1 = w;
			m_h1 = h;
			ui.label->p1.setX(sx);
			ui.label->p1.setY(sy);
			ui.label->p2.setX(sx + w);
			ui.label->p2.setY(sy + h);
			ui.label->str1 = QString::fromLocal8Bit("区域1");

			ui.area1_sx->setText(QString::number(sx));
			ui.area1_sy->setText(QString::number(sy));
			ui.area1_w->setText(QString::number(w));
			ui.area1_h->setText(QString::number(h));


		}
		else
		{
			sx = ui.label->p3.x();
			sy = ui.label->p3.y();
			ex = ui.label->p4.x();
			ey = ui.label->p4.y();

			ui.area2_sx->setText(QString::number(sx));
			ui.area2_sy->setText(QString::number(sy));
			ui.area2_w->setText(QString::number(ex - sx));
			ui.area2_h->setText(QString::number(ey - sy));

			w = ex - sx;
			h = ey - sy;
			int ret;
			if (!frame.empty())
			{
				ret = CalROI(frame, sx, sy, w, h, ROI_BORDER);
			}
			else
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("图像为空！"));
				return;
			}
			if (ret == -1)
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域选择不正确！"));
				return;
			}

			m_sx2 = sx;
			m_sy2 = sy;
			m_w2 = w;
			m_h2 = h;

			ui.label->p3.setX(sx);
			ui.label->p3.setY(sy);
			ui.label->p4.setX(sx + w);
			ui.label->p4.setY(sy + h);

			ui.label->str2 = QString::fromLocal8Bit("区域2");

			ui.area2_sx->setText(QString::number(sx));
			ui.area2_sy->setText(QString::number(sy));
			ui.area2_w->setText(QString::number(w));
			ui.area2_h->setText(QString::number(h));

		}

	}
}

void ColorDetect::ReadFrame()
{
	//获取图像帧
	capture >> frame;
	/*
	//将抓取到的帧,转换为QImage格式,QImage::Format_RGB888使用24位RGB格式（8-8-8）存储图像
	//此时没有使用rgbSwapped()交换所有像素的红色和蓝色分量的值，底色偏蓝
	QImage image = QImage((const uchar*)frame.data,frame.cols, frame.rows,QImage::Format_RGB888);
	//将图片显示到label上
	ui->label->setPixmap(QPixmap::fromImage(image));
	*/
	//将视频显示到label上

	QImage image = QImage((const uchar*)frame.data, frame.cols, frame.rows, QImage::Format_RGB888).rgbSwapped();
	ui.label->setPixmap(QPixmap::fromImage(image));
}

//打开摄像头
void ColorDetect::OpenCameraClicked()
{
	//capture.open(0);//打开摄像头
	//QString filename;
	//filename = QFileDialog::getOpenFileName(this, tr("Select avi"), "", tr("Data (*.avi)"));
	//if (filename.isEmpty())
	//{
	//	return;
	//}
	//char*  path;
	//QByteArray t = filename.toLatin1(); // must
	//path = t.data();

	//capture.open(path);
	
	timer->start(25);//开启定时器，一次25ms
}

//关闭摄像头
void ColorDetect::CloseCameraClicked()
{
	timer->stop();//关闭定时器

	detect_timer->stop();
	capture.release();//释放图像
}

void ColorDetect::start()
{
	m_cur_time = 0;
	g_start_flag = 1;
	detect();
	detect_timer->start(m_time_inter * 1000 * 60);

}

void ColorDetect::stop()
{
	detect_timer->stop();
	fstream fout(m_data_file.toStdString(), ios::app);
	if (fout.fail())
	{
		QMessageBox::information(NULL, "Title", "open file fail:" + m_data_file);
	}

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("手动停止检测！"));

	fout << m_cur_time << ' ' << 2 << ' ' << 0 << endl;
	fout.close();


}