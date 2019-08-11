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

	int m_time_inter;//�����ʱ��min
	int m_time_total;//�����ֹʱ��min
	int m_cur_time;//���뿪ʼ��ʱ��min
	QString m_data_path;//���ݱ���Ŀ¼
	QString m_data_file;//�����ļ�
	QString m_result_file;//����ļ�

	int m_dst_r, m_dst_g, m_dst_b;//Ŀ����ɫ
	int m_th;//��ɫ�ж���ֵ

	DataDlg *dlg;

private:
	Ui::ColorDetectClass ui;

private slots:

	void detect();//��⺯��
	void ReadFrame();
	void OpenCameraClicked();//�����
	void CloseCameraClicked();//�ر����
	void start();//��ʼ���
	void stop();//ֹͣ���

	void updateShape();//��������

	void sel1();//ѡ������1
	void sel2();//ѡ������2
	void selColor();//ѡ����ɫ����

	void setArea1();//��������1
	void setArea2();//��������2
	void setColor();//������ֹ��ɫ

	void setTime();//����ʱ��

	void search();//��ѯ

public:
	void check();//ȷ�ϼ�⺯��

};
