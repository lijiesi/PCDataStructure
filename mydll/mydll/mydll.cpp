// mydll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "mydll.h"


// ���ǵ���������һ��ʾ��
MYDLL_API int nmydll=0;

// ���ǵ���������һ��ʾ����
MYDLL_API int fnmydll(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� mydll.h
Cmydll::Cmydll()
{
	return;
}
