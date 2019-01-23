#include "MyDialog.h"
#include <QTime>
MyDialog::MyDialog(const QString &filepath,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	sendTask = new myThread(NULL);
	QByteArray bytes = filepath.toLocal8Bit();
	const char* m_filepath = bytes.data();
	sendTask->creatTask(m_filepath);
	m_timeID = startTimer(0);
}

MyDialog::~MyDialog()
{
}
void MyDialog::timerEvent(QTimerEvent *event)
{
	if (event->timerId()==m_timeID)
	{
		int status = sendTask->status();
		int progress = sendTask->progress();
		ui.progressBar->setValue(progress);
		if (status ==1)
		{
			sendTask->destroyTask();
			delete sendTask;
			killTimer(m_timeID);
			this->accept();
		}
	}
}