#include <iostream>
#include <stdio.h>
#define MAXSIZE 20
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
typedef struct Node* Linklist;
status AddList(Linklist list,int i,Element *e)
{
	Linklist  p,s;
	p = list;
	s = (Node *)malloc(sizeof(Node));
	//ͷ�巨
	s->data = *e;
	s->next = p->next;
	list->next = s;
	//β�巨
	// 	while (p->next)
	// 	{
	// 		p = p->next;
	// 	}
// 	p->next = s;
// 	s->next = NULL;
// 	s->next = p->next;
// 	p->next = s;
	return OK;
}
status Insertlist(Linklist list, int i, Element *e)
{
	int j = 1;
	Linklist p, s;
	p = list;
	while (p  && j<i)
	{
		p = p->next;
		j++;
	}
	if (!p||j>i)
	{
		return ERROR;
	}
	s = (Node *)malloc(sizeof(Node));
	s->data = *e;
	s->next = p->next;
	p->next = s;
	return OK;
}
status Deletelist(Linklist *list, int i, Element *e)
{
	int j = 1;
	Linklist p, q;
	p = *list;
	while (p&&j<i)
	{
		p = p->next;
		j++;
	}
	if (!p || j>i)
	{
		return ERROR;
	}
	q = p->next;
	*e = q->data;
	p->next = q->next;
	free(q);
	return 0;
}
int main()
{
	Linklist list = (Node *)malloc(sizeof(Node));
	list->next = NULL;
	for (int i = 1; i <= 5;i++)
	{
		AddList(list, i, &i);
	}
	int m = 3;
	Insertlist(list, 2, &m);
	int e;
	Deletelist(&list, 1, &e);
	return 0;
}