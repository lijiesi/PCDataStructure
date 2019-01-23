#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_matlab_test.h"

class matlab_test : public QMainWindow
{
	Q_OBJECT

public:
	matlab_test(QWidget *parent = Q_NULLPTR);

private:
	Ui::matlab_testClass ui;
};
