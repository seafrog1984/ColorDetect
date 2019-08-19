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


struct _Area{
	int sx;
	int sy;
	int w;
	int h;
};

typedef struct _Area Area;

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
	QTimer *ctimer;

	Mat frame;

	int m_sx1, m_sy1, m_w1, m_h1;
	int m_sx2, m_sy2, m_w2, m_h2;
	Area area[2];

	int m_time_inter;//检测间隔时间min
	int m_time_total;//检测终止时间min
	int m_cur_time;//距离开始的时间min
	QString m_data_path;//数据保存目录
	QString m_data_file;//数据文件
	QString m_result_file;//结果文件
	QString m_company;//公司名称

	int m_dst_r, m_dst_g, m_dst_b;//目标颜色
	int m_th;//颜色判断阈值

	Scalar m_color[3];//颜色：0-初始颜色；1-检测颜色1；2-检测颜色2 ; BGR顺序
	int m_color_num;//颜色数

	DataDlg *dlg;

	QPalette m_pcolor[3];

	QLabel *currentTimeLabel;//显示系统时间
	QLabel *stateLabel;//显示系统状态
	QLabel *detectLabel;//显示检测时间
	QLabel *userLabel;//显示登录用户
	QLabel *interLabel;//显示间隔时间
	QLabel *totalLabel;//显示终止时间


private:
	Ui::ColorDetectClass ui;

	void mainPage();//参数设置
	void sysPara();//参数设置
	void colorSet();//颜色校准
	void search();//查询

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


	void setSelNum1();//设置1个检测区
	void setSelNum2();//设置2个检测区
	void setArea1();//设置区域1
	void setArea2();//设置区域2

	void colorCorrect();//相机颜色校准
	void setDetectNum1();//设置检测1次颜色变化
	void setDetectNum2();//设置检测2次颜色变化
	void selColor();//选择颜色区域
	void setColor();//设置校准颜色

	void setTime();//设置时间


	void test();

	void time_update();//更新时间

public:
	void check();//确认检测函数


};
