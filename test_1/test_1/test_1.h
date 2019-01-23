#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_1.h"

class test_1 : public QMainWindow
{
	Q_OBJECT

public:
	test_1(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_1Class ui;
};
