#pragma once

#include <QFrame>

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	void paintEvent(QPaintEvent *event);

private:
	int simple();
	int dynamic();
};
