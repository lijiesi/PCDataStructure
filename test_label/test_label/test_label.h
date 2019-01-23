#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_label.h"

class test_label : public QMainWindow
{
	Q_OBJECT

public:
	test_label(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_labelClass ui;
};
