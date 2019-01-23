#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:
	QPushButton *ok_push;
	QLineEdit *m_line;
	QVBoxLayout *layout;
};

