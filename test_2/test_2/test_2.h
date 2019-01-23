#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_2.h"

class test_2 : public QMainWindow
{
	Q_OBJECT

public:
	test_2(QWidget *parent = Q_NULLPTR);
	
private slots:
	int onbuttonshow(bool checked);


private:
	Ui::test_2Class ui;
};
