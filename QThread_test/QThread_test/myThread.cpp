#include "myThread.h"
#include <string.h>
#include <QDebug>
myThread::myThread(QObject *parent)
	: QThread(parent)
{
}

myThread::~myThread()
{
}

int myThread::creatTask(const char *filename)
{
	strcpy(m_filepath, filename);
	m_filesize = 0;
	bytesread = 0;
	m_status = 0;


	start();      //Æô¶¯Ïß³Ì
	return 0;
}
void myThread::destroyTask()
{
	wait();
}
int myThread::status()
{
	return m_status;
}
int myThread::progress()
{
	if (m_filesize<=0)
	{
		return 0;
	}
	return bytesread * 100 / m_filesize;
}


void myThread::run()
{
	FILE *fp = fopen(m_filepath, "rb");
	if (!fp)
	{
		m_status = -1;
		return;
	}
	fseek(fp, 0, SEEK_END);
	m_filesize = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	char buf[2048];
	int part = 0;
	while (1)
	{
		int n=fread(buf, 1, 2048, fp);
		if (n<=0)
		{
			break;
		}
		bytesread += n;
		part += n;
		qDebug() << "readl: " << bytesread;
		if (part>1024*32)
		{
			QThread::msleep(50);
			part = 0;
		}
	}
	fclose(fp);
	m_status = 1;
	qDebug() << "complete.....";
}