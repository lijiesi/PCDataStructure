#include "MyCircle.h"
#include <QPainter>
#include<QTimerEvent>
MyCircle::MyCircle(QWidget *parent)
	: QFrame(parent)
{
	m_times = 0;
	m_timeId = startTimer(500);
}

MyCircle::~MyCircle()
{
}
void MyCircle::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	
	if (m_times==0)
	{
		painter.setPen(Qt::NoPen);
		painter.setBrush(QColor(0x00, 0xff, 0x00));
		m_times++;
	}
	else
	{
		painter.setPen(Qt::NoPen);
		painter.setBrush(QColor(0x88, 0x88, 0x88));
		m_times = 0;
	}
	painter.drawEllipse(10, 10, 40, 40);
// 	int width = this->width();
// 	int Height = this->height();
// 	painter.setBrush(QBrush(QColor(0x00,0x00,0x00)));
// 	painter.drawRect(0, 0, width, Height);
// 
// 	QColor *green=new QColor(0xff, 0x00, 0x00);
// 	QPen *pen=new QPen(*green);
// 	painter.setPen(*pen);
// 
// 	painter.setBrush(QBrush(QColor(0x00, 0xff, 0x00)));
// 	QRectF rectangle(10, 20, 80, 60);
// 	painter.drawRoundedRect(rectangle,15, 15);
// 	//painter.drawEllipse(QPoint(200, 200), 100, 100);
// 	static const QPointF points[4]={
// 		QPointF(10, 80),
// 		QPointF(20, 10),
// 		QPointF(80, 30),
// 		QPointF(90, 70)
// 	};
// 	painter.drawConvexPolygon(points, 4);
}
void MyCircle::timerEvent(QTimerEvent *event)
{
	if (event->timerId()==m_timeId)
	{
		update();
	}
}