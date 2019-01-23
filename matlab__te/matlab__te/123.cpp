#include <iostream>
#include "engine.h"
#pragma comment(lib,"libeng.lib")
#pragma comment(lib,"libmx.lib")
#pragma comment(lib,"libmat.lib")
int main()
{
	Engine *ep;

	if (!(ep = engOpen("\0")))
	{
		fprintf(stderr, "\ncan't start MATLAB engine\n");
		return EXIT_FAILURE;
	}
	else
	{
		fprintf(stderr, "\ncan start MATLAB engine\n");
		engEvalString(ep, "x=0:0.01:2*pi;y=sin(x);plot(x,y);");
	}
	return 0;
}