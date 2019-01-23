#include <iostream>
#include <stdlib.h>
#include <time.h>
#define ERROR 1
#define  OK 1
#define  FALSE 1
#define TRUE 1
typedef int Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node *next;

}Node;
typedef struct Node *staticlist;
status Lengtlist(staticlist list)
{
	int j=0;
	staticlist p;
	p = list;
	while (p->next)
	{
		p = p->next;
		j++;
	}
	return j;
}
status Creatlist(staticlist list, int n)
{
	staticlist p, s;
	p = list;
	srand(int(time(NULL)));
	for (int i = 0; i < n;i++)
	{
		s = (Node*)malloc(sizeof(Node));
		s->data = rand() % 100 + 1;
		printf("%d\t", s->data);
		while(p->next)
		{
			p = p->next;
		}
		p->next = s;
		s->next = NULL;
	}
	return OK;
}
status Tencent_test(staticlist list,Element *e)
{
	staticlist l, p;
	l = p = list;
	while (l->next)
	{
		if (l->next->next)
		{
			l = l->next->next;
			p = p->next;
		} 
		else
		{
			l = l->next;
		}
	}
	*e= p->data;
	return OK;
}
status	Deletelist(staticlist list)
{
	staticlist p,q;
	p = list->next;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	list->next = NULL;
	return OK;
}
int main()
{
	staticlist list;
	list = (Node *)malloc(sizeof(Node));
	list->next = NULL;
	int k = 20;
	Creatlist(list, k);
	printf("链表的长度:%d\n", Lengtlist(list));
	Deletelist(list);
	printf("链表的长度:%d\n", Lengtlist(list));
// 	char pop='1';
// 	while (pop!='0')
// 	{
// 		scanf("%c", &pop);
// 		switch (pop)
// 		{
// 		case '1':
// 			int e;
// 			Creatlist(list, k);
// 			Tencent_test(list, &e);
// 			printf("%d\n", e);
// 			break;
// 		case '0':
// 			exit(1);
// 
// 		}
// 	}
	return OK;
}