#include "QThread_test.h"
#include <QFileDialog>
#include "MyDialog.h"
#include "my_save.h"
QThread_test::QThread_test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnSearch, SIGNAL(clicked()), this, SLOT(oksearch()));
	connect(ui.btnSend, SIGNAL(clicked()), this, SLOT(oksend()));
	connect(ui.btnSave, SIGNAL(clicked()), this, SLOT(oksave()));
}
int QThread_test::oksearch()
{
	QString filepath = QFileDialog::getOpenFileName(this,QString::fromLocal8Bit("选择文件"));
	if (filepath.length()>0)
	{
		//QByteArray bytes = filepath.toLocal8Bit();
		//const char* m_filepath = bytes.data();
		ui.btnshow->setText(filepath);
	}

	return 0;
}
int QThread_test::oksend()
{
	QString filepath = ui.btnshow->text();
	MyDialog dlg_send(filepath,this);
	dlg_send.exec();
	return 0;
}
int QThread_test::oksave()
{
	QString filepath = QFileDialog::getSaveFileName(this, QString::fromLocal8Bit("传送"));
	if (filepath.length()>0)
	{
		QString filename = ui.btnshow->text();
		my_save dlg_save(filename, filepath, this);
		dlg_save.exec();
	}
	return 0;
}