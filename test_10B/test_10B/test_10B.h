#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_10B.h"

class test_10B : public QMainWindow
{
	Q_OBJECT

public:
	test_10B(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_10BClass ui;
};
