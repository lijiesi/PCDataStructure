#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_9B.h"

class test_9B : public QMainWindow
{
	Q_OBJECT

public:
	test_9B(QWidget *parent = Q_NULLPTR);

private slots:
	int okpage_1();
	int okpage_2();

private:
	Ui::test_9BClass ui;
};
