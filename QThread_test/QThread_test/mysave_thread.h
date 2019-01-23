#pragma once

#include <QThread>

class mysave_thread : public QThread
{
	Q_OBJECT

public:
	mysave_thread(QObject *parent);
	~mysave_thread();


	int creatTask(const char *filename, const char *filepath);
	void destroyTask();
	int status();
	int progress();

private:
	void run();       //�߳���ں���

private:
	char m_filename[128];
	char m_filepath[128];
	int m_filesize;
	int bytesread;    //��ȡ��ȡ������
	int m_status;   //�����״̬
};
