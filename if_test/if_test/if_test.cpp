// if_test.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "if_test.h"


// ���ǵ���������һ��ʾ��
IF_TEST_API int nif_test=0;

// ���ǵ���������һ��ʾ����
IF_TEST_API int fnif_test(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� if_test.h
Cif_test::Cif_test()
{
	return;
}
