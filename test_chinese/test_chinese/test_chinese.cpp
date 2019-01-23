#include "test_chinese.h"
#include "GBK.h"
test_chinese::test_chinese(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btn_ok, SIGNAL(clicked()), this, SLOT(onshow()));
}
int test_chinese::onshow()
{
	//QString str = "中国";
	//ui.btn_line->setText(str);
	//QString str = QString::fromLocal8Bit("中国");
	//ui.btn_line->setText(str);
// 	QString str = ui.btn_line->text();
// 	QByteArray byte = str.toLocal8Bit();
// 	const char *gbk = byte.data();
	//ui.btn_line->setText(GBK::ToUnicode("你好中国"));
	string text = GBK::FromUnicode(ui.btn_line->text());
	return 0;
}