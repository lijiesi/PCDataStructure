#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_11D.h"

class test_11D : public QMainWindow
{
	Q_OBJECT

public:
	test_11D(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_11DClass ui;
};
