#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qtool_test.h"

class Qtool_test : public QMainWindow
{
	Q_OBJECT

public:
	Qtool_test(QWidget *parent = Q_NULLPTR);

private slots:
	int btntool();
	int btncheck(bool checked);
private:
	Ui::Qtool_testClass ui;
};
