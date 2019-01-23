#include "test_qt.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <windows.h>
#include "engine.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
using namespace std;
int main(int argc, char *argv[])
{
	Engine *ep;
	mxArray *c;
	mxArray *T = mxCreateDoubleMatrix(1, 1, mxREAL);
	double time[1] = { 4 };
	if (!(ep = engOpen("\0")))
	{
		fprintf(stderr, "\ncan't start matlab engine\n");
		return EXIT_FAILURE;
	}
	else
	{
		fprintf(stderr, "\ncan start matlab engine\n");
		engEvalString(ep, "cd C:/Users/Administrator/Desktop");
		engEvalString(ep, "a=10;");
		memcpy((void *)mxGetPr(T), (void *)time, sizeof(time));
		engPutVariable(ep, "b", T);
		Sleep(100);
		engEvalString(ep, "c=test(a,b);");
		c = engGetVariable(ep, "c");
		double *p = mxGetPr(c);
	}
	QApplication a(argc, argv);
	test_qt w;
	w.show();
	engClose(ep);
	return a.exec();
}
