#pragma once

#include <QThread>

class myThread : public QThread
{
	Q_OBJECT

public:
	myThread(QObject *parent);
	~myThread();

	int creatTask(const char *filename);
	void destroyTask();
	int status();
	int progress();

private:
	void run();       //线程入口函数

private:
	char m_filepath[128];
	int m_filesize;
	int bytesread;    //获取读取数据量
	int m_status;   //任务的状态
};
