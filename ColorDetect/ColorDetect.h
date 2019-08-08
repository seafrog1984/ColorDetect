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




using namespace cv;

class ColorDetect : public QMainWindow
{
	Q_OBJECT

public:
	ColorDetect(QWidget *parent = Q_NULLPTR);

	VideoCapture capture;
	QTimer *timer;
	Mat frame;

private:
	Ui::ColorDetectClass ui;

private slots:
	void ReadFrame();
	void OpenCameraClicked();
	void CloseCameraClicked();
	void updateShape();

	void sel1();
	void sel2();
	void selColor();

	void setArea1();
	void setArea2();
	void setColor();

public:
	void CalROI(Mat &img, Mat &roi, int sx, int sy, int imgw, int imgh);
	void CalRGB(Mat &img, int &r, int &g, int &b);

};
