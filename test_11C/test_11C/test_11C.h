#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_11C.h"

class test_11C : public QMainWindow
{
	Q_OBJECT

public:
	test_11C(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_11CClass ui;
};
