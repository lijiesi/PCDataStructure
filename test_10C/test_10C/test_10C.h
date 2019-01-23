#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_10C.h"

class test_10C : public QMainWindow
{
	Q_OBJECT

public:
	test_10C(QWidget *parent = Q_NULLPTR);

private slots:
	int btnsearch();
	void btnreturn();
private:
	Ui::test_10CClass ui;
};
