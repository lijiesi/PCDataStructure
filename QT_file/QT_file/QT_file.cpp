#include "QT_file.h"
#include <QFileDialog>
#include<QDebug>
#include "GBK.h"
QT_file::QT_file(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btn_open, SIGNAL(clicked()), this, SLOT(onopen()));
	connect(ui.btn_save, SIGNAL(clicked()), this, SLOT(onsave()));
}
int QT_file::onopen()
{
	QString filename = QFileDialog::getOpenFileName(this,GBK::ToUnicode("选择文件"));
	if (filename.length()>0)
	{
		string str = GBK::FromUnicode(filename);
		FILE *fp = fopen(str.c_str(),"rb");
		fseek(fp, 0, SEEK_END);
		int filesize=ftell(fp);
		fseek(fp, 0, SEEK_SET);
		char *buf = new char[filesize + 1];
		int n = fread(buf, 1, filesize, fp);
		if (n>0)
		{
			buf[n] = 0;
			ui.btn_show->setPlainText(GBK::ToUnicode(buf));
		}
		delete[] buf;
		fclose(fp);
	}
// 	QString filepath = QFileDialog::getOpenFileName(this,QString::fromLocal8Bit("选择文件"));
// 	if (filepath.length()>0)
// 	{
// 		QByteArray bytes = filepath.toLocal8Bit();
// 		const char* filename = bytes.data();
// 		FILE *fp = fopen(filename, "rb");
// 		fseek(fp, 0, SEEK_END);
// 		int filesize = ftell(fp);
// 		fseek(fp, 0, SEEK_SET);
// 		char* buf = new char[filesize+1];
// 		int n = fread(buf,1,filesize,fp);
// 		if (n>0)
// 		{
// 			buf[n] = 0;
// 			ui.btn_show->setPlainText(QString::fromLocal8Bit(buf));
// 		}
// 	}
	return 0;
}
int QT_file::onsave()
{
// 	QString filepath = QFileDialog::getSaveFileName(this, QString::fromLocal8Bit("保存"));
// 	if (filepath.length()>0)
// 	{
// 		QString text = ui.btn_show->toPlainText();
// 		QByteArray bytes_1 = text.toLocal8Bit();
// 		const char* gbk_text = bytes_1.data();
// 
// 		QByteArray  bytes_2= filepath.toLocal8Bit();
// 		const char* gbk_filepath = bytes_2.data();
// 		FILE *fp = fopen(gbk_filepath, "wb");
// 		fwrite(gbk_text, 1, strlen(gbk_text), fp);
// 		fclose(fp);
// 	}
	QString filepath = QFileDialog::getSaveFileName(this,GBK::ToUnicode("保存"));
	if (filepath.length() > 0)
	{
		QString text = ui.btn_show->toPlainText();
		string gbk_text = GBK::FromUnicode(text);
		string gbk_filepath = GBK::FromUnicode(filepath);
		FILE *fp = fopen(gbk_filepath.c_str(), "wb");
		fwrite(gbk_text.c_str(), 1, gbk_text.length(), fp);
		fclose(fp);
	}
	return 0;
}