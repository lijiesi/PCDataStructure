#pragma once

#include <QDialog>
#include "ui_my_save.h"
#include "mysave_thread.h"
class my_save : public QDialog
{
	Q_OBJECT

public:
	my_save(const QString &filename,const QString &filepath, QWidget *parent = Q_NULLPTR);
	~my_save();

	virtual void timerEvent(QTimerEvent *event);


private:
	Ui::my_save ui;
	mysave_thread *save_thread;
	int mm_timeID;
};
