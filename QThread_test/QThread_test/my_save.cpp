#include "my_save.h"
#include <QTime>
my_save::my_save(const QString &filename,const QString &filepath, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	QByteArray bytes_1 = filename.toLocal8Bit();
	const char* m_filename = bytes_1.data();
	QByteArray byte_2 = filepath.toLocal8Bit();
	const char* m_filepath = byte_2.data();
	save_thread = new mysave_thread(NULL);
	save_thread->creatTask(m_filename, m_filepath);
	mm_timeID = startTimer(0);
}

my_save::~my_save()
{
}
void my_save::timerEvent(QTimerEvent *event)
{
	if (event->timerId()==mm_timeID)
	{
		int status = save_thread->status();
		int progress = save_thread->progress();
		ui.progressBar->setValue(progress);
		if (status==1)
		{
			save_thread->destroyTask();
			delete save_thread;
			killTimer(mm_timeID);
			this->accept();
		}
	}
}
