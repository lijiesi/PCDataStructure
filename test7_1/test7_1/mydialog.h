#pragma once

#include <QDialog>
#include "ui_mydialog.h"

class mydialog : public QDialog
{
	Q_OBJECT

public:
	mydialog(const char* user,QWidget *parent = Q_NULLPTR);
	~mydialog();

private slots:
	int onok();
	int oncancel();
	int onpress();
public:
	QString m_user;
	QString m_password;

private:
	Ui::mydialog ui;
};
