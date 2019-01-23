#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Timer.h"

class Timer : public QMainWindow
{
	Q_OBJECT

public:
	Timer(QWidget *parent = Q_NULLPTR);

	virtual void timerEvent(QTimerEvent *event);

private slots:
	int okstart();
	int okend();

private:
	int m_timeID;

private:
	Ui::TimerClass ui;

	
};
