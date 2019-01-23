#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_file.h"

class QT_file : public QMainWindow
{
	Q_OBJECT

public:
	QT_file(QWidget *parent = Q_NULLPTR);

private slots:
	int onopen();
	int onsave();
private:
	Ui::QT_fileClass ui;
};
