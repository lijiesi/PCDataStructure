#include "mysave_thread.h"
#include <QDebug>
#include <string.h>
mysave_thread::mysave_thread(QObject *parent)
	: QThread(parent)
{
}

mysave_thread::~mysave_thread()
{
}
int mysave_thread::creatTask(const char *filename, const char *filepath)
{
	strcpy(m_filename,filename);
	strcpy(m_filepath,filepath);
	m_filesize=0;
	bytesread=0;   
	m_status=0;


	start();
	return 0;
}
void mysave_thread::destroyTask()
{
	wait();
}
int mysave_thread::status()
{
	return m_status;
}
int mysave_thread::progress()
{
	if (m_filesize<=0)
	{
		return 0;
	}
	return bytesread * 100 / m_filesize;
}
void mysave_thread::run()
{
	FILE *fp = fopen(m_filepath, "wb");
	if (!fp)
	{
		m_status = -1;
		return;
	}
	m_filesize = strlen(m_filename);
	while (1)
	{
		int n = fwrite(m_filename, 1, 1, fp);
		if (bytesread>=m_filesize)
		{
			break;
		}
		bytesread += n;
		qDebug() << "sendl: " << bytesread;
		QThread::msleep(50);
	}
	fclose(fp);
	m_status = 1;
	qDebug() << "complete.....";
}