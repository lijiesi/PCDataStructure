#include "test_7A.h"
#include <stdio.h>
test_7A::test_7A(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	FILE *fp = fopen("C:/Users/Administrator/Desktop/lisijie.txt", "wb");
	fwrite("hello world", 1, 11, fp);
	fclose(fp);
}
