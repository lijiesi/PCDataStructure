#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_pressFlag = false;
}

MyWidget::~MyWidget()
{
}
void MyWidget::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);

	int width=this->width();
	int height = this->height();
	painter.setBrush(QColor(0x00, 0x00, 0x00));
	painter.drawRect(0, 0, width, height);
	painter.setPen(QColor(0xff, 0x00, 0x00));
	if (m_pressFlag)
	{
		for (int i = 0; i < m_points.size()-1;i++)
		{
			QPoint p1 = m_points[i];
			QPoint p2 = m_points[i + 1];
			painter.drawLine(p1, p2);
		}
	}
}
void MyWidget::mousePressEvent(QMouseEvent *event)
{
	m_points.clear();
	m_pressFlag = true;
}
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
	update();
	m_pressFlag = false;
}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_pressFlag)
	{
		QPoint pos = event->pos();
		qDebug("(%d,%d)", pos.x(), pos.y());
		m_points.append(pos);
		update();
	}

}
void MyWidget::mouseDoubleClickEvent(QMouseEvent *event)
{

}