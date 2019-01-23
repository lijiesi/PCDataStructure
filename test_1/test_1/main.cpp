#include "test_1.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWidget q;
	q.setGeometry(0,0,400, 300);
	//q.move(100, 50);
	q.show();
	test_1 w;
	w.show();
	return a.exec();
}
