#include "qt_123.h"
#include <QtWidgets/QApplication>
#include<QtGui/QWidgetList>
#include <iostream>
#include "engine.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
int main(int argc, char *argv[])
{
	Engine *ep;
	if (!(ep = engOpen("\0")))
	{
		fprintf(stderr, "\ncan't start matlab engine\n");
		return EXIT_FAILURE;
	}
	else
	{
		engEvalString(ep, "x=0:0.01:2*pi;y=sin(x);plot(x,y);");
	}
	QApplication a(argc, argv);
	qt_123 w;
	w.show();
	return a.exec();
}
