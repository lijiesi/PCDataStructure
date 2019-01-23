#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_gui_test.h"

class gui_test : public QMainWindow
{
	Q_OBJECT

public:
	gui_test(QWidget *parent = Q_NULLPTR);

private slots:
	int onshow(bool checked);

private:
	Ui::gui_testClass ui;
};
