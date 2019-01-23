#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test7_1.h"

class test7_1 : public QMainWindow
{
	Q_OBJECT

public:
	test7_1(QWidget *parent = Q_NULLPTR);
private slots:
	int onbtn();
private:
	Ui::test7_1Class ui;
};
