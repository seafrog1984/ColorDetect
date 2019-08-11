#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ColorDetect.h"
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
#include <QTimer>
#include <QFileDialog>
#include <fstream>
#include <iostream> 
#include "ColorDll.h"
#include <QDateTime>
//#include <windows.h>
#include "DataDlg.h"

#include <afxwin.h>
#include "MVImage.h"
#include "MVGigE.h"
#include "MVCamProptySheet.h"
#include <qtwinextras/qwinfunctions.h>

Q_GUI_EXPORT QPixmap qt_pixmapFromWinHBITMAP(HBITMAP bitmap, int hbitmapFormat = 0);

using namespace cv;

class ColorDetect : public QMainWindow
{
	Q_OBJECT

public:
	ColorDetect(QWidget *parent = Q_NULLPTR);
	~ColorDetect();

	HANDLE m_hCam;
	MVImage m_image;
	MV_PixelFormatEnums m_PixelFormat;
	BOOL	m_bLive;
	cv::Mat	m_cvSrc;


	int OnStreamCB(MV_IMAGE_INFO *pInfo);


	VideoCapture capture;
	QTimer *timer;
	QTimer *detect_timer;

	Mat frame;

	int m_sx1, m_sy1, m_w1, m_h1;
	int m_sx2, m_sy2, m_w2, m_h2;

	int m_time_inter;//检测间隔时间min
	int m_time_total;//检测终止时间min
	int m_cur_time;//距离开始的时间min
	QString m_data_path;//数据保存目录
	QString m_data_file;//数据文件
	QString m_result_file;//结果文件

	int m_dst_r, m_dst_g, m_dst_b;//目标颜色
	int m_th;//颜色判断阈值

	DataDlg *dlg;

private:
	Ui::ColorDetectClass ui;

private slots:

	void detect();//检测函数
	void ReadFrame();
	void OpenCameraClicked();//打开相机
	void CloseCameraClicked();//关闭相机
	void start();//开始检测
	void stop();//停止检测

	void updateShape();//更新区域

	void sel1();//选择区域1
	void sel2();//选择区域2
	void selColor();//选择颜色区域

	void setArea1();//设置区域1
	void setArea2();//设置区域2
	void setColor();//设置终止颜色

	void setTime();//设置时间

	void search();//查询

public:
	void check();//确认检测函数

};
