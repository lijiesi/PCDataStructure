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
	void run();       //�߳���ں���

private:
	char m_filepath[128];
	int m_filesize;
	int bytesread;    //��ȡ��ȡ������
	int m_status;   //�����״̬
};
