#include "test_10A.h"

test_10A::test_10A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	myline = new QLineEdit();
	myline->setMaximumWidth(50);
	ui.mainToolBar->insertWidget(ui.actionNew,myline);
	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(btnNew()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(btnSave()));
}
int test_10A::btnNew()
{
	return 0;
}
int test_10A::btnSave()
{
	return 0;
}