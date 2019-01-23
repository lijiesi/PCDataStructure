#include "mydialog.h"

mydialog::mydialog(const char* user,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.btnuser->setText(user);
	connect(ui.btncheck, SIGNAL(clicked()), this, SLOT(onok()));
	connect(ui.btncancel, SIGNAL(clicked()), this, SLOT(oncancel()));
	connect(ui.btnuser, SIGNAL(returnPressed()), this, SLOT(onpress()));
}

mydialog::~mydialog()
{
}
int mydialog::onok()
{
	m_user=ui.btnuser->text();
	m_password=ui.btnpassword->text();
	accept();
	return 0;
}
int mydialog::oncancel()
{
	reject();
	return 0;
}
int mydialog::onpress()
{
	onok();
	return 0;
}
