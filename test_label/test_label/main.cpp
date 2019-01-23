#include "test_label.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_label w;
	w.show();
	return a.exec();
}
