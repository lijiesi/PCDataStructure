#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_10A.h"
#include <QLineEdit>
class test_10A : public QMainWindow
{
	Q_OBJECT

public:
	test_10A(QWidget *parent = Q_NULLPTR);

private slots:
	int btnNew();
	int btnSave();

private:
	QLineEdit *myline;
private:
	Ui::test_10AClass ui;
};
