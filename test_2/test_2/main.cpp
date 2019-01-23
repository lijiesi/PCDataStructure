#include "test_2.h"
#include <QtWidgets/QApplication>
#include "MyWin.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//MyWin *q = new MyWin(NULL);
	//q->setGeometry(100, 100, 400, 300);
	//q->show();
	test_2 *w=new test_2();
	w->show();
	return a.exec();
}
