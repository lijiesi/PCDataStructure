#include "test_11A.h"
#include <QtWidgets/QApplication>
#include "MyCircle.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_11A w;
	w.show();
// 	MyCircle w(NULL);
// 	w.resize(400, 300);
// 	w.move(590, 300);
// 	w.show();
	return a.exec();
}
