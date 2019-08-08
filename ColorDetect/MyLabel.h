#ifndef MYLABEL_H
#define MYLABEL_H
#include<QLabel>
#include<QString>
#include<QWidget>
#include<QMainWindow>
#include<QLine>
#include"QMessageBox"
#include<opencv2\core\core.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>


class MyLabel :public QLabel
{
	Q_OBJECT
public:
	MyLabel( QWidget *parent = 0);
	~MyLabel(){}
signals:

	void updateShape();

protected:

	void mouseReleaseEvent(QMouseEvent *event);  //抬起
	void mousePressEvent(QMouseEvent *event);    //按下
	void mouseMoveEvent(QMouseEvent *event);     //拖动
	void paintEvent(QPaintEvent *event);


public:

	QPoint p1, p2,p3,p4,p5,p6;

	QString str1, str2;

	int m_cur_shape;
	int m_shapeNum;

};

#endif // MYLABEL_H
