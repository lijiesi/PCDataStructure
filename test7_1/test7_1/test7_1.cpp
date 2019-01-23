#include "test7_1.h"
#include "mydialog.h"
#include <QDebug>
test7_1::test7_1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnok, SIGNAL(clicked()), this, SLOT(onbtn()));
}
int test7_1::onbtn()
{
	mydialog dlg("lisijie",this);
	int ret=dlg.exec();
	if (ret==QDialog::Accepted)
	{
		qDebug() <<dlg.m_user <<"\n"<<dlg.m_password;
	}
	else
	{
		qDebug("bad input");
	}
	return 0;
}