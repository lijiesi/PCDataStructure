#pragma once

#include <QFrame>
#include<QMouseEvent>
class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent * event);

private:
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseDoubleClickEvent(QMouseEvent *event);

	int m_pressFlag;
	QVector<QPoint> m_points;

};
