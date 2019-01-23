#include <iostream>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node* next;
}Node;
typedef struct Node* staticlist;
staticlist CreateList(staticlist list,int *n)
{
	staticlist p,q;
	p = list;
	printf("请输入拉丁方阵的大小: ");
	scanf("%d", n);
	for (int i = 1; i <= *n;i++)
	{
		q = (Node*)malloc(sizeof(Node));
		q->data = i;
		if (list==NULL)
			list = q;
		else
			p->next = q;
		p = q;
	}
	p->next = list;
	return list;
}
status Latin(staticlist list,int n)
{
	staticlist p, q;
	int m = 0;
	p = list;
	while (m<n)
	{
		q = p;
		p = p->next;
		for (int i = 0; i < n;i++)
		{
			printf("%d ", q->data);
			q = q->next;
		}
		printf("\n");
		m++;
	}
	return OK;
}
int main()
{
	staticlist list;
	int n = 0;
	list = NULL;
	list = CreateList(list,&n);
	Latin(list,n);
	return OK;
}