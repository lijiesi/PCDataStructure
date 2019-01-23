#include <iostream>
#include <stdlib.h>
#include <time.h>
#define  OK 1
#define	 ERROR 0
#define  TRUE 1
#define  FALSE 0
using namespace std;
typedef int Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node* next;

}Node;
typedef struct Node* staticlist;
using namespace std;
status Lengthlist(staticlist list)
{
	staticlist p;
	int j = 0;
	p = list;
	while (p!=p->next)
	{
		j++;
		p = p->next;
	}
	cout <<"����ĳ���: "<< j << endl;
	return OK;
}
status CreateNoLoopList(staticlist list,Element n)
{
	staticlist p;
	list->next = NULL;
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 10;i++)
	{
		p = (Node*)malloc(sizeof(Node));
		n = rand() % 100 + 1;
		p->data = n;
		p->next = list->next;
		list->next = p;
	}
	return OK;
}
status CreateLoopList(staticlist list,Element n)
{
	srand((int)time(NULL));
	staticlist p;
	list->next = list;
	p = list;
	for (int i = 0; i < n;i++)
	{
		while (p->next!=list)
		{
			p = p->next;
		}
		staticlist s = (Node*)malloc(sizeof(Node));
		s->data = rand() % 100 + 1;
		s->next = p->next;
		p->next = s;
	}


	return OK;
}
status HasLoop1(staticlist list)
{
	staticlist p, q;
	p = list;
	q = list;
	while (p!=NULL&&q!=NULL&&q->next!=NULL)
	{
		p = p->next;
		if (q->next != NULL)
			q = q->next->next;
		if (p == q)
		{
			return 1;
		}
	}
	return 0;
}
status HasLoop2(staticlist list)
{
	staticlist p, q;
	q = list;
	int pos1 = 0;
	while (q)
	{
		staticlist p;
		p = list;
		int pos2 = 0;
		while (p)
		{
			if (p==q)
			{
				if (pos1==pos2)
				{
					break;
				} 
				else
				{
					return 1;
				}
			}
			p = p->next;
			pos2++;
		}
		q = q->next;
		pos1++;

	}
	return 0;
}
int main()
{
	staticlist list;
	list = (Node*)malloc(sizeof(Node));
	int e;
	while (1)
	{
		printf("\n1.�����޻�����\n2.�����л�������\n3.�ж��Ƿ��л�\n4.�˳�\n��ѡ��: ");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			CreateNoLoopList(list,20);
			printf("�ɹ������޻�����\n");
			break;
		case 2:
			CreateLoopList(list,20);
			printf("�ɹ������л�����\n");
			break;
		case 3:
			printf("����һ: \n\n");
			if (HasLoop1(list))
			{
				printf("�л�����\n");
			} 
			else
			{
				printf("�޻�����\n");
			}
			printf("������: \n\n");
			if (HasLoop2(list))
			{
				printf("�л�����\n");
			} 
			else
			{
				printf("�޻�����\n");
			}

			break;
		case 0:
			exit(true);
		}
	}
}