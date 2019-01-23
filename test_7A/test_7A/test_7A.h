#pragma once

#include <QtWidgets/QWidget>
#include "ui_test_7A.h"

class test_7A : public QWidget
{
	Q_OBJECT

public:
	test_7A(QWidget *parent = Q_NULLPTR);

private:
	Ui::test_7AClass ui;
};
