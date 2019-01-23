#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_11A.h"

class test_11A : public QMainWindow
{
	Q_OBJECT

public:
	test_11A(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_11AClass ui;
};
