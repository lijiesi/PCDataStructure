#include "test_10C.h"

test_10C::test_10C(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.oksearch, SIGNAL(clicked()), this, SLOT(btnsearch()));
	connect(ui.okline, SIGNAL(returnPressed()), this, SLOT(btnreturn()));
}
int test_10C::btnsearch()
{
	return 0;
}
void test_10C::btnreturn()
{
	qDebug("123");
}