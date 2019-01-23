#include <iostream>
_declspec(dllexport) int add(int a, int b)
{
	printf("111\n");
	return a + b;
}