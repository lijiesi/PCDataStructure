#pragma once

#include <QDialog>
#include "ui_MyDialog.h"
#include "myThread.h"
class MyDialog : public QDialog
{
	Q_OBJECT

public:
	MyDialog(const QString &filepath,QWidget *parent = Q_NULLPTR);
	~MyDialog();
	virtual void timerEvent(QTimerEvent *event);

private:
	Ui::MyDialog ui;
	
	myThread *sendTask;
	int m_timeID;
};
