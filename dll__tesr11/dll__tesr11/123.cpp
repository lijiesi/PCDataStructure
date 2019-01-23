#include<iostream>
#include "mydll.h"
#pragma comment(lib,"my.lib")
int main()
{
	printf("result: %d\n", add(10, 15));
	printf("%s\n", "ÄãºÃ");
}