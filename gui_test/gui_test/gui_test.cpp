#include "gui_test.h"
#include <iostream>
#include <windows.h>
#include "engine.h"
#include "output_coding.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
using namespace std;
gui_test::gui_test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(
		ui.ok_push, SIGNAL(clicked(bool)), this, SLOT(onshow(bool)));
}
int gui_test::onshow(bool checked)
{
Engine *ep;
mxArray *c;
mxArray *T = mxCreateDoubleMatrix(4, 3, mxREAL);
double time[4][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10, 11, 12 } };
if (!(ep = engOpen("\0")))
{
fprintf(stderr, "\ncan't start matlab engine\n");
return EXIT_FAILURE;
}
int nstatus = engSetVisible(ep, false);
if (nstatus!=0)
{
	cout << "设置MATLAB显示失败" << endl;
	return EXIT_FAILURE;
} 
else
{
engEvalString(ep, "state = enableservice('AutomationServer',true);");
engEvalString(ep, " state = enableservice('AutomationServer');");
/*engEvalString(ep, "cd C:/Users/Administrator/Desktop");
memcpy((void *)mxGetPr(T), (void *)time, sizeof(time));
engPutVariable(ep, "b", T);
engEvalString(ep, "a=input_coding(b)");
engEvalString(ep, "c=a;");
c = engGetVariable(ep, "c");
double *p = mxGetPr(c);
size_t M = mxGetM(c);    //获得行
size_t N = mxGetN(c);    //获得列
double m[4][3];
double *k = p;
output_coding(*m, p, M, N);
for (int i = 0; i < M;i++)
{
	for (int j = 0; j < N;j++)
	{
		ui.btnshow->append(QString::number(m[i][j]));

	}
}
*/
engEvalString(ep, "cd C:/Users/Administrator/Desktop/论文/遗传+人工势场/遗传+人工势场(代码)");
engEvalString(ep, "max_generation=100;");
Sleep(100);
engEvalString(ep, "xfollow1=main(max_generation);");
engEvalString(ep, "c=xfollow1;");
c = engGetVariable(ep, "c");
double *p = mxGetPr(c);
size_t M = mxGetM(c);    //获得行
size_t N = mxGetN(c);    //获得列
double m[1][71];
double *k = p;
output_coding(*m, p, M, N);
for (int i = 0; i < M; i++)
{
	for (int j = 0; j < N; j++)
	{
		ui.btnshow->append(QString::number(m[i][j]));

	}
}
// mxDestroyArray(T);
// engClose(ep);
}
return 0;
}