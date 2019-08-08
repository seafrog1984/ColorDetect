#include<QLabel>
#include<QPainter>
#include<QMouseEvent>
#include <QKeyEvent>
#include <QLine>
#include"MyLabel.h"

using namespace cv;

#define IMAGE_WIDTH  384//原始图像宽
#define IMAGE_HEIGHT 288//原始图像高



extern int g_cur_shape;
extern int g_shapeNum;
extern int g_sel_flag;



MyLabel::MyLabel( QWidget* parent)
:QLabel(parent)
{
	//connect(this, SIGNAL(clicked()), this, SLOT(slotClicked()));
	//connect(this, SIGNAL(sig_GetOneFrame(QImage)), this, SLOT(slotGetOneFrame(QImage)));
	p1 = QPoint(0, 0);
	p2 = QPoint(0, 0);//QPoint构造函数
	p3 = QPoint(0, 0);
	p4 = QPoint(0, 0);//QPoint构造函数
	p5 = QPoint(0, 0);
	p6 = QPoint(0, 0);//QPoint构造函数
	str1 = "";
	str2 = "";

	m_shapeNum = g_shapeNum;
	m_cur_shape = g_cur_shape;

}


void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{

	if (g_sel_flag==1)
	{
		g_sel_flag = 0;
		update();
		emit updateShape();
	}
	else if (g_sel_flag == 2)
	{
		update();
		emit updateShape();
	}


	
}

void MyLabel::mousePressEvent(QMouseEvent *event)
{
	if (g_sel_flag==1)
	{
		m_cur_shape = g_cur_shape;
		m_shapeNum = g_shapeNum;

		if (m_cur_shape == 0)
		{
			p1 = event->pos();
			str1 = QString::fromLocal8Bit("区域1");
		}
		else
		{
			p3 = event->pos();
			str2 = QString::fromLocal8Bit("区域2");
		}
	}
	else if (g_sel_flag == 2)
	{
		p5 = event->pos();
	}

}

void MyLabel::mouseMoveEvent(QMouseEvent *event)
{
	if (g_sel_flag==1)
	{
		if (m_cur_shape == 0)
		{
			p2 = event->pos();
		}
		else
		{
			p4 = event->pos();
		}
	}
	else if (g_sel_flag == 2)
	{
		p6 = event->pos();
	}

	update();
}


void MyLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	QPainter painter(this);

	if (g_sel_flag == 2)
	{
		painter.drawRect(QRect(p5.x(), p5.y(), p6.x() - p5.x(), p6.y() - p5.y()));
	}
	else
	{
		painter.drawText(p1.x(), p1.y()-10, str1);
		painter.drawRect(QRect(p1.x(),p1.y(),p2.x()-p1.x(),p2.y()-p1.y()));
		painter.drawText(p3.x(), p3.y()-10, str2);
		painter.drawRect(QRect(p3.x(), p3.y(), p4.x() - p3.x(), p4.y() - p3.y()));
	}


}
