#include "test_2.h"

test_2::test_2(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
	connect(ui.ok_button, SIGNAL(clicked(bool)), this, SLOT(onbuttonshow(bool)));
	
	
}


int test_2::onbuttonshow(bool checked)
{
	ui.ok_show->setPlainText("hello world");
	return 0;
}