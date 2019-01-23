#include "test_9_2.h"
#include <QTextEdit>
test_9_2::test_9_2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnadd, SIGNAL(clicked()), this, SLOT(okadd()));
	connect(ui.btndelete, SIGNAL(clicked()), this, SLOT(okdelete()));
	connect(ui.tabWidget, SIGNAL(currentChanged(int )), this, SLOT(okchanged(int)));
}
int test_9_2::okadd()
{
	QTextEdit *text = new QTextEdit();
	ui.tabWidget->addTab(text, QString::fromLocal8Bit("ÎÄ¼ş"));
	return 0;
}
int test_9_2::okdelete()
{
	int index = ui.tabWidget->currentIndex();
	ui.tabWidget->removeTab(index);
	return 0;
}
int test_9_2::okchanged(int checked)
{
	return 0;
}