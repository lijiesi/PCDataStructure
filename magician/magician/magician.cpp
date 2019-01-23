#include <iostream>
#include <stdlib.h>
#define ERROR 0
#define OK 1
#define TRUE 1
#define  FALSE 0
#define carNumber 13
using namespace std;
typedef int Element;
typedef int status;
typedef struct Node
{
	Element data;
	struct Node* next;
}Node;
typedef struct Node* staticlist;
staticlist CreateLoopList(staticlist list)
{
	staticlist p,q;
	p = list;
	for (int i = 0; i < carNumber;i++)
	{
		q = (Node*)malloc(sizeof(Node));
		q->data = 0;
		if (list==NULL)
		{
			list = q;
		}
		else
		{
			p->next = q;
		}
		p = q;
	}
	p->next = list;
	return list;
}
status ListShow(staticlist list)
{
	staticlist p;
	p = list;
	while (p->next!=list)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("%d\t", p->data);
	cout << "\n";
	return OK;
}
status DestoryLoopList(staticlist list)
{
// 	staticlist p;
// 	staticlist buf[carNumber];
// 	p = list;
// 	for (int i = 0; i < carNumber; i++)
// 	{
// 		buf[i] = p;
// 		p = p->next;
// 	}
// 	for (int i = 0; i < carNumber; i++)
// 	{
// 		free(buf[i]);
// 	}
// 	list = NULL;
// 	return OK;
	staticlist p, q;
	p = list;
	for (int i = 0; i < carNumber;i++)
	{
		q = p;
		p = q->next;
		free(q);
	}
	list = NULL;
	return OK;
}
status magician(staticlist list)
{
	staticlist p;
	int j;
	int countnumber = 2;
	p = list;
	p->data = 1;
	while (1)
	{
		for (j = 0; j < countnumber; j++)
		{
			p = p->next;
			if (p->data != 0)
			{
				j--;
			}
		}
		if (p->data == 0)
		{
			p->data = countnumber;
			countnumber++;
			if (countnumber==14)
			{
				break;
			}
		}
	}
	return OK;
}
int main()
{
	staticlist list;
	list = NULL;
	list=CreateLoopList(list);
	ListShow(list);
	magician(list);
	for (int i = 0; i < carNumber;i++)
	{
		printf("ºÚÌÒ%d \t", list->data);
		list = list->next;
	}
	printf("\n");
	DestoryLoopList(list);
	return OK;
}