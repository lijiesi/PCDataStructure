#include "test_9B.h"
#include "ADD.h"
test_9B::test_9B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
// 	ADD *page = new ADD();
// 	ui.stackedWidget->insertWidget(1,page);
	connect(ui.btn_page1, SIGNAL(clicked()), this, SLOT(okpage_1()));
	connect(ui.btn_page2, SIGNAL(clicked()), this, SLOT(okpage_2()));
}
int test_9B::okpage_1()
{

	ui.stackedWidget->setCurrentIndex(0);
	return 0;
}
int test_9B::okpage_2()
{
	ui.stackedWidget->setCurrentIndex(1);
	return 0;
}