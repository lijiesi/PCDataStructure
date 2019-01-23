#pragma once

#include <QFrame>

class MyCircle : public QFrame
{
	Q_OBJECT

private:
	void paintEvent(QPaintEvent * event);
	void timerEvent(QTimerEvent *event);
public:
	MyCircle(QWidget *parent);
	~MyCircle();
	int m_timeId;
	int m_times;
};
