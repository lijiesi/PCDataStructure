// if_test.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "if_test.h"


// 这是导出变量的一个示例
IF_TEST_API int nif_test=0;

// 这是导出函数的一个示例。
IF_TEST_API int fnif_test(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 if_test.h
Cif_test::Cif_test()
{
	return;
}
