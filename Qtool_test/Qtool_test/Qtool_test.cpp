#include "Qtool_test.h"
#include <QMessageBox>
Qtool_test::Qtool_test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.ok_tool, SIGNAL(clicked()), this, SLOT(btntool()));
	connect(ui.ok_tool, SIGNAL(toggled(bool)), this, SLOT(btncheck(bool)));
}
int Qtool_test::btntool()
{
	QMessageBox::information(this, "ok", "good input");
	return 0;
}
int Qtool_test::btncheck(bool checked)
{
	if (checked == 1)
	{
		qDebug("good input");
	}
	else
	{
		qDebug("bad input");
	}
	return 0;
}