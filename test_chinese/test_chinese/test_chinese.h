#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_chinese.h"

class test_chinese : public QMainWindow
{
	Q_OBJECT

public:
	test_chinese(QWidget *parent = Q_NULLPTR);
private slots:
	int onshow();

private:
	Ui::test_chineseClass ui;
};
