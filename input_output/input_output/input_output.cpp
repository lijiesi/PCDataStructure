#include <iostream>
#include <windows.h>
#include "engine.h"
#include "output.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
using namespace std;
//void output_coding(double *m, double *p, size_t M, size_t N);
int main()
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
	else
	{
		engEvalString(ep, "state = enableservice('AutomationServer',true);");
		engEvalString(ep, " state = enableservice('AutomationServer');");
		engEvalString(ep, "cd C:/Users/Administrator/Desktop");
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
		output_coding( *m,  p,  M,  N);
// 		for (int i = 0; i < N; i++)
// 		{
// 			for (int j = 0; j < M; j++)
// 			{
// 				m[j][i] = *p;
// 				p++;
// 			}
// 		}
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << m[i][j] << "\t";
			}
			cout << "\n";
		}
		//p = k;
		//Sleep(100);
		//engEvalString(ep, "a=input_coding(b)");
		//int d = mxGetN(c);
		// double *p = mxGetPr(c);
		// mxDestroyArray(T);
		// engClose(ep);
		return 0;
	}
}
