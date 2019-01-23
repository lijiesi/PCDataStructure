#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_9_2.h"

class test_9_2 : public QMainWindow
{
	Q_OBJECT

public:
	test_9_2(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_9_2Class ui;

private slots:
	int okadd();
	int okdelete();
	int okchanged(int);
};
