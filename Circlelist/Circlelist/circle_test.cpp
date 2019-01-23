#include <iostream>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define  FALSE 0
#define TRUE 1
typedef int Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node *next;
}Node;
typedef struct Node *staticlist;
status Init_list(staticlist list)
{
	staticlist l, p;
	printf("����ڵ��ֵ,����0����\n");
	l = list;
	int temp;
	while (1)
	{
		fflush(stdin);
		scanf("%d", &temp);
		if (temp == 0)
		{
			if (list->next==NULL)
			{
				l->next = list;
			}
			return OK;
		}
		if (l->next == NULL)
		{
			p = (Node*)malloc(sizeof(Node));
			p->data = temp;
			l->next = p;
			p->next = list;
		}
		else
		{
			while (l->next!=list)
			{
				l = l->next;
			}
			p = (Node*)malloc(sizeof(Node));
			p->data = temp;
			l->next = p;
			p->next = list;
		}
	}
	
	return OK;
}
status Lengthlist(staticlist list)
{
	int j=0;
	staticlist p;
	p = list;
	if (p->next ==list)
	{
		j = 0;
	}
	else
	{
		while (p->next != list)
		{
			p = p->next;
			j++;
		}
	}
	return j;
}
status travel_list(staticlist list)
{
	staticlist p;
	p = list->next;
	if (p==list)
	{
		printf("������Ϊ: 0\n");
	}
	while (p!=list)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}
status Insertlist(staticlist list, int i, Element *e)
{
	int j;
	staticlist p, s;
	if (Lengthlist(list)==0)
	{
		return ERROR;
	}
	if (i<1||i>Lengthlist(list))
	{
		return ERROR;
	}
	if (i==Lengthlist(list))
	{
		s = (Node *)malloc(sizeof(Node));
		p = list;
		while (p->next->next!=list)
		{
			p = p->next;
		}
		s->data = *e;
		s->next = p->next;
		p->next = s;
	} 
	else
	{
		p = list;
		for (j = 1; j < i;j++)
		{
			p = p->next;
		}
		s = (Node *)malloc(sizeof(Node));
		s->data = *e;
		s->next = p->next;
		p->next = s;
	}
	return OK;
}
status Deletelist(staticlist list,int i,Element *e)
{
	int j;
	staticlist p, q;
	if (Lengthlist(list)==0)
	{
		return ERROR;
	}
	if (i<1||i>Lengthlist(list))
	{
		return ERROR;
	}
	if (i == Lengthlist(list))
	{
		p = list;
		while (p->next->next != list)
		{
			p = p->next;
		}
		q = p->next;
		*e = p->data;
		p->next = q->next;
		free(q);
	}
	else
	{
		p = list;
		for (j = 1; j <i ; j++)
		{
			p = p->next;
		}
		q = p->next;
		*e = p->data;
		p->next = q->next;
		free(q);
	}
	return OK;
}
int main()
{
	staticlist list;
	list = (Node*)malloc(sizeof(Node));
	list->next = NULL;
	char temp = '1';
	printf("1.��ʼ������\n2. ����ڵ�\n3.ɾ���ڵ�\n4.Լɪ������\n0.�˳�\n");
	while (1)
	{
		scanf("%c", &temp);
		switch (temp)
		{
		case '1':
			Init_list(list);
			printf("��ʼ�����ѭ������ĳ���: %d\n", Lengthlist(list));
			travel_list(list);
			break;
		case '2':
			int i;
			int e;
			printf("����������λ��\n");
			scanf("%d", &i);
			printf("������ֵ\n");
			scanf("%d", &e);
			Insertlist(list, i, &e);
			printf("����������\n");
			travel_list(list);
			break;
		case '3':
			int location;
			int m;
			scanf("%d", &location);
			printf("������ɾ����λ��\n");
			Deletelist(list, location,&m);
			printf("ɾ���������\n");
			travel_list(list);
			break;
		case '4':
			int n;
			staticlist p;
			p = list->next;
			while (p!=p->next)
			{
				printf("����������: ");
				scanf("%d", &n);
				n = n - 1;
				for (int f = 1; f <n;f++)
				{
					p = p->next;
					
				}
				staticlist temp;
				temp = p->next;
				printf("%d->", temp->data);
				printf("\n");
				p->next = temp->next;
				free(temp);
				p = p->next;
			}
			printf("%d", p->data);
			break;
		case  '0':
			exit(0);
		}
	}
	return OK;
}