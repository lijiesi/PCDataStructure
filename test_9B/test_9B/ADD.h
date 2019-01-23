#pragma once

#include <QWidget>
#include "ui_ADD.h"

class ADD : public QWidget
{
	Q_OBJECT

public:
	ADD(QWidget *parent = Q_NULLPTR);
	~ADD();

private:
	Ui::ADD ui;
};
