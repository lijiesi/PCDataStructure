#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_5.h"

class test_5 : public QMainWindow
{
	Q_OBJECT

public:
	test_5(QWidget *parent = Q_NULLPTR);

private slots:
	int onbtnok();
	int onLine();

private:
	Ui::test_5Class ui;
};
