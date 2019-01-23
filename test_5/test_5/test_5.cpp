#include "test_5.h"
#include <QMessageBox>
test_5::test_5(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnok, SIGNAL(clicked()), this, SLOT(onbtnok()));
	connect(ui.password, SIGNAL(returnPressed()), this, SLOT(onLine()));
}
int test_5::onbtnok()
{
	QString user=ui.user->text();
	QString password=ui.password->text();
	if (user=="root" && password=="123456")
	{
		QMessageBox::information(this, "Ok", "good input");
	}
	else
	{
		QMessageBox::information(this, "Error", "bad input");
	}
	return 0;
}
int test_5::onLine()
{
	qDebug("press ok");
	onbtnok();
	return 0;
}