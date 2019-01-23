#include "gui_test.h"
#include <QtWidgets/QApplication>
#include "MyWin.h"

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	//MyWin w;
	//w.show();
	gui_test w;
	w.show();
	return a.exec();
}
