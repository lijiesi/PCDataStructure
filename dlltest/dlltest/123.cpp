#include <iostream>
#pragma comment(lib,"my.lib")

_declspec(dllimport) int add(int a, int b);

int main()
{
	printf("result: %d\n", add(16, 14));
	return 0;
}