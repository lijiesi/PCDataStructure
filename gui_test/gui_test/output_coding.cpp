#include <iostream>
#include "output_coding.h"
void output_coding(double *m, double *p, size_t M, size_t N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			*(m + j*N + i) = *p;
			p++;
		}
	}
}