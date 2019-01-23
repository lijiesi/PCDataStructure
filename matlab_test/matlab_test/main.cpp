#include "matlab_test.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "engine.h"
#pragma  comment(lib,"libeng.lib")
#pragma  comment(lib,"libmx.lib")
#pragma  comment(lib,"libmat.lib")
int main(int argc, char *argv[])
{
	Engine *ep;
	if (!(ep = engOpen("\0")))
	{
		fprintf(stderr, "\ncan't start MATLAB engine\n");
		return EXIT_FAILURE;
	}
	QApplication a(argc, argv);
	matlab_test w;
	w.show();
	return a.exec();
}
