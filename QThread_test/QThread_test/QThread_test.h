#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QThread_test.h"

class QThread_test : public QMainWindow
{
	Q_OBJECT

public:
	QThread_test(QWidget *parent = Q_NULLPTR);

private slots:
	int oksearch();
	int oksend();
	int oksave();

private:
	Ui::QThread_testClass ui;
};
