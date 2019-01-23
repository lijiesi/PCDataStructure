#include "test_chinese.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_chinese w;
	w.show();
	return a.exec();
}
