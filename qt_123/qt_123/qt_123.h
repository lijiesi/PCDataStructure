#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_123.h"

class qt_123 : public QMainWindow
{
	Q_OBJECT

public:
	qt_123(QWidget *parent = Q_NULLPTR);

private:
	Ui::qt_123Class ui;
};
