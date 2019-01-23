#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_9.h"

class test_9 : public QMainWindow
{
	Q_OBJECT

public:
	test_9(QWidget *parent = Q_NULLPTR);

private slots:
	int onsave();
private:
	Ui::test_9Class ui;
};
