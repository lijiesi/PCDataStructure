#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	const char* buf = "2015-12-13";
	char text[128];
	int year, month, day;
	sscanf(buf, "%d-%d-%d", &year, &month, &day);
	printf("%d\n", year);
	printf("%d\n", month);
	printf("%d\n", day);
	sprintf_s(text, "%d/%d/%d", year, month, day);
	const char* filename = "C:/Users/Administrator/Desktop/aaa.txt";
	FILE *fp = fopen(filename, "wb");
	if (fp==NULL)
	{
		printf("failed open");
	}
	fwrite(text, 1, strlen(text), fp);
	fclose(fp);


	printf("%s\n", text);
	FILE *rp = fopen(filename, "rb");
	char test[4];
	while (!feof(rp))
	{
		int n = fread(test, 1, 4, rp);
		printf("%d\n", n);
		printf("%s\n", test);
	}
	fclose(rp);
	return 0;
}