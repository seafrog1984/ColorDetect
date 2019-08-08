#include "ColorDetect.h"
#define ROI_BORDER 2


int g_cur_shape = 0;
int g_shapeNum=1;
int g_sel1_done = 0;
int g_sel_flag = 0;//0：不选择区域；1：选择检测区域；2：选择颜色区域



using namespace std;
using namespace cv;

ColorDetect::ColorDetect(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	timer = new QTimer(this);
	
	connect(timer, SIGNAL(timeout()), this, SLOT(ReadFrame()));
	connect(ui.btn_start, SIGNAL(clicked()), this, SLOT(OpenCameraClicked()));//打开摄像头
	connect(ui.btn_stop, SIGNAL(clicked()), this, SLOT(CloseCameraClicked()));//关闭摄像头
	connect(ui.label, SIGNAL(updateShape()), this, SLOT(updateShape()));//更新选择区域

	connect(ui.btn_sel1, SIGNAL(clicked()), this, SLOT(sel1()));//选择区域1
	connect(ui.btn_sel2, SIGNAL(clicked()), this, SLOT(sel2()));//选择区域2
	connect(ui.btn_set_area1, SIGNAL(clicked()), this, SLOT(setArea1()));//设置区域1
	connect(ui.btn_set_area2, SIGNAL(clicked()), this, SLOT(setArea2()));//设置区域2

	connect(ui.btn_sel_color, SIGNAL(clicked()), this, SLOT(selColor()));//选择颜色区域
	connect(ui.btn_set_color, SIGNAL(clicked()), this, SLOT(setColor()));//设置颜色

	capture.open("D:\\1.avi");

	int sx, sy, w, h;
	ifstream fin("area1.ini");

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", "No area1!");
		
	}
	else
	{
		fin >> sx >> sy >> w >> h;

		ui.label->p1.setX(sx);
		ui.label->p1.setY(sy);
		ui.label->p2.setX(sx + w);
		ui.label->p2.setY(sy + h);
		ui.label->str1 = QString::fromLocal8Bit("区域1");

		g_sel1_done = 1;

		ui.area1_sx->setText(QString::number(sx));
		ui.area1_sy->setText(QString::number(sy));
		ui.area1_w->setText(QString::number(w));
		ui.area1_h->setText(QString::number(h));
	}
	fin.close();

	ifstream fin2("area2.ini");
	if (fin2.fail())
	{
		QMessageBox::information(NULL, "Title", "No area2!");

	}
	else
	{
		fin2>> sx >> sy >> w >> h;

		ui.label->p3.setX(sx);
		ui.label->p3.setY(sy);
		ui.label->p4.setX(sx + w);
		ui.label->p4.setY(sy + h);

		ui.label->str2 = QString::fromLocal8Bit("区域2");

		ui.area2_sx->setText(QString::number(sx));
		ui.area2_sy->setText(QString::number(sy));
		ui.area2_w->setText(QString::number(w));
		ui.area2_h->setText(QString::number(h));

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
		int r, g, b;
		fin3 >> r >> g >> b;

		ui.color_b->setText(QString::number(b));
		ui.color_g->setText(QString::number(g));
		ui.color_r->setText(QString::number(r));


		ui.label_8->setAutoFillBackground(true);
		QPalette p = ui.label_8->palette();
		p.setColor(QPalette::Window, QColor(r, g, b));
		ui.label_8->setPalette(p);
		ui.label_8->update();
	}



	timer->start(25);//开启定时器，一次25ms



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


//void ColorDetect::CalRGB(Mat &img, int &sx, int &sy, int &imgw, int &imgh, int &r, int &g, int &b)
//{
//	Rect rect(sx, sy, imgw, imgh);
//	Mat roi;
//	img(rect).copyTo(roi);
//
//
//	Mat channel[3];
//	split(roi, channel);
//	imshow("original", img);
//	imshow("B", channel[0]);
//	imshow("G", channel[1]);
//	imshow("R", channel[2]);
//
//	cv::Scalar tempVal;
//	int bgr[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//
//		tempVal = mean(channel[i]);
//
//		bgr[i] = (int)(tempVal.val[0] + 0.5);
//	}
//
//	b = bgr[0];
//	g = bgr[1];
//	r = bgr[2];
//}
//
//int ColorDetect::CalROI(Mat &img, int &sx, int &sy, int &imgw, int &imgh, int roi_border)
//{
//
//	Rect rect1(sx, sy, imgw, imgh);
//	Mat roi1;
//	img(rect1).copyTo(roi1);
//
//	//imshow("test", roi1);
//	Mat roi_gray;
//	cvtColor(roi1, roi_gray, CV_BGR2GRAY);
//
//	double value = mean(roi_gray)[0] * 0.95;
//
//	Mat seg;
//	cv::threshold(roi_gray, seg, value, 255, THRESH_BINARY_INV);
//
//	//imshow("seg", seg);
//
//	int col_start = 0;
//	for (int col = 0; col < seg.cols; col++)
//	{
//		if (seg.at<uchar>(seg.rows / 2, col) != 0)
//		{
//			col_start = col;
//			break;
//		}
//	}
//	col_start = col_start + roi_border;
//	int col_end = seg.cols - 1;
//	for (int col = seg.cols - 1; col >= 0; col--)
//	{
//		if (seg.at<uchar>(seg.rows / 2, col) != 0)
//		{
//			col_end = col;
//			break;
//		}
//	}
//	col_end = col_end - roi_border;
//	int row_start = 0;
//	for (int row = 0; row < seg.rows; row++)
//	{
//		if (seg.at<uchar>(row, col_start) != 0)
//		{
//			row_start = row;
//			break;
//		}
//	}
//	row_start = row_start + roi_border;
//	int row_end = 0;
//	for (int row = seg.rows - 1; row >= 0; row--)
//	{
//		if (seg.at<uchar>(row, col_start) != 0)
//		{
//			row_end = row;
//			break;
//		}
//	}
//	row_end = row_end - roi_border;
//
//	int roi_w = col_end - col_start;
//	int roi_h = row_end - row_start;
//	if (roi_w > 0 && roi_h > 0)
//	{
//		//Rect rect(col_start, row_start, roi_w, roi_h);
//
//		sx = sx + col_start;
//		sy = sy + row_start;
//		imgw = roi_w;
//		imgh = roi_h;
//
//	}
//	else
//	{
//		return -1;
//	}
//
//	return 0;
//
//}

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

		CalRGB(frame, sx, sy, w, h, r, g, b);

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
			int ret=CalROI(frame, sx, sy, w, h, ROI_BORDER);

			if (ret == -1)
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域选择不正确！"));
				return;
			}

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
			int ret=CalROI(frame, sx, sy, w, h, ROI_BORDER);
			if (ret == -1)
			{
				QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("区域选择不正确！"));
				return;
			}

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

	//imshow("test", frame);
	QImage image = QImage((const uchar*)frame.data, frame.cols, frame.rows, QImage::Format_RGB888).rgbSwapped();
	ui.label->setPixmap(QPixmap::fromImage(image));
}

//打开摄像头
void ColorDetect::OpenCameraClicked()
{
	//capture.open(0);//打开摄像头
	QString filename;
	filename = QFileDialog::getOpenFileName(this, tr("Select avi"), "", tr("Data (*.avi)"));
	if (filename.isEmpty())
	{
		return;
	}
	char*  path;
	QByteArray t = filename.toLatin1(); // must
	path = t.data();

	capture.open(path);
	

	timer->start(25);//开启定时器，一次25ms
}

//关闭摄像头
void ColorDetect::CloseCameraClicked()
{
	timer->stop();//关闭定时器
	capture.release();//释放图像
}
