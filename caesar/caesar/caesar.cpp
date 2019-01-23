#include <iostream>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define  FALSE 0
typedef char Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node *prior;
	struct Node *next;
}Node;
typedef struct Node* staticlsit;
status CreateList(staticlsit list)
{
	staticlsit p, q;
	int i;
	list->next = list->prior = NULL;
	p = list;
	for (i = 0; i < 26;i++)
	{
		q = (Node*)malloc(sizeof(Node));
		q->data = 'A' + i;
		q->prior = p;
		q->next = p->next;
		p->next = q;
		p = q;
	}
	p->next = list->next;
	list->next->prior = p;
	return OK;
}
staticlsit Caesar(staticlsit list,int n)
{
	if (n>0)
	{
		for (int i = 0; i < n;i++)
		{
			list = list->next;
		}
	}
	else
	{
		list = list->next;
		for (int i = 1; i > n;i--)
		{
			list = list->prior;
		}
	}
	return list;
}
int main()
{
	staticlsit list;
	int i, n;
	list = (Node*)malloc(sizeof(Node));
	CreateList(list);
	printf("请输入一个整数: ");
	scanf("%d", &n);
	list=Caesar(list,n);
	for (i = 0; i < 26;i++)
	{
		list = list->next;
		printf("%c ", list->data);
		
	}
	printf("\n");
	return 0;
}