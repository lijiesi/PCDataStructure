#include <iostream>
#include <stdlib.h>
#define ERROR 1
#define OK 1
#define FALSE 0
#define TRUE 1
#define MAXSIZE 30
typedef char Element;
typedef int status;
typedef struct 
{
	Element data;
	int cur;

}staticlist[MAXSIZE];
//��ʼ����̬����

status Initlist(staticlist list)
{
	int i;
	for (i = 0; i < MAXSIZE - 1;i++)
	{
		list[i].cur = i + 1;
	}
	list[MAXSIZE - 1].cur = 0;
	return OK;
}
//��ȡ��̬����ĳ�������
status Lengthlist(staticlist list)
{
	int j = 0;
	int i = list[MAXSIZE - 1].cur;
	while (i)
	{
		i = list[i].cur;
		j++;
	}
	return j;
}
//��ȡ�����ÿ�������
status MALLOC_SSL(staticlist list)
{
	int i;
	i = list[0].cur;
	if (list[0].cur)
	{
		list[0].cur = list[i].cur;
	}
	return i;
}
//��̬�����������
status Insertlist(staticlist list, int i, Element e)
{
	int j, k;
	k = MAXSIZE - 1;
	if (i<1||i>Lengthlist(list)+1)
	{
		return ERROR;
	}
	j = MALLOC_SSL(list);
	if (j)
	{
		list[j].data = e;
		for (int l = 1; l <= i-1; l++)
		{
			k = list[k].cur;
		}
		list[j].cur = list[k].cur;
		list[k].cur = j;
	}
	return OK;
}
status free_DDL(staticlist list, int j)
{
	list[j].cur = list[0].cur;
	list[0].cur = j;
	return OK;
}
status Deletelist(staticlist list, int i)
{
	int j,k;
	k = MAXSIZE - 1;
	if (i<1||i>Lengthlist(list))
	{
		return ERROR;
	}
	for (int l = 0; l <= i - 1;l++)
	{
		k = list[k].cur;
	}
	j = list[k].cur;
	list[k].cur = list[j].cur;
	free_DDL(list, j);
	return OK;
}
int main()
{
	staticlist list;
	int i = Initlist(list);
	printf("��ʼ����̬����ĳ��ȣ�%d\n", Lengthlist(list));
	Insertlist(list, 1, 'F');
	Insertlist(list, 1, 'E');
	Insertlist(list, 1, 'D');
	Insertlist(list, 1, 'B');
	Insertlist(list, 1, 'A');
	printf("��ʼ����̬����ĳ��ȣ�%d\n", Lengthlist(list));
	Insertlist(list, 3, 'C');
	printf("��ʼ����̬����ĳ��ȣ�%d\n", Lengthlist(list));
	Deletelist(list, 4);
	printf("��ʼ����̬����ĳ��ȣ�%d\n", Lengthlist(list));
	Insertlist(list, 2, 'K');
	return 0;
}