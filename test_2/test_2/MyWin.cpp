#include "MyWin.h"

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	ok_push = new QPushButton(this);
	m_line = new QLineEdit(this);
	layout = new QVBoxLayout(this);


	layout->addWidget(ok_push);
	layout->addWidget(m_line);

	this->setLayout(layout);
}

MyWin::~MyWin()
{
}
