// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� IF_TEST_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// IF_TEST_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef IF_TEST_EXPORTS
#define IF_TEST_API __declspec(dllexport)
#else
#define IF_TEST_API __declspec(dllimport)
#endif

// �����Ǵ� if_test.dll ������
class IF_TEST_API Cif_test {
public:
	Cif_test(void);
	// TODO:  �ڴ�������ķ�����
};

extern IF_TEST_API int nif_test;

IF_TEST_API int fnif_test(void);
