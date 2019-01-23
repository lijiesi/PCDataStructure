#include "Timer.h"
#include <QTime>
#include <QDebug>
Timer::Timer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	
	connect(ui.btnstart, SIGNAL(clicked()), this, SLOT(okstart()));
	connect(ui.btnEnd, SIGNAL(clicked()), this, SLOT(okend()));
	
}
void Timer::timerEvent(QTimerEvent *event)
{
	if (event->timerId() == m_timeID)
	{
		QTime now = QTime::currentTime();
		QString text = now.toString("HH:mm:ss");
		qDebug() << text;
		ui.timeLabel->setText(text);
	}
}
int Timer::okstart()
{
	m_timeID = startTimer(1000);
	return 0;
}
int Timer::okend()
{
	killTimer(m_timeID);
	return 0;
}
