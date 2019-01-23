#include<iostream>
#include <stdio.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define  TRUE 1
#define  FALSE 0
typedef int status;
typedef int Element;
typedef struct
{
	Element data[20];
	int length;

}sqlist;
status Getlist(sqlist *list, int i,	Element *e)
{
	if (list->length == 0)
	{
		return ERROR;
	}
	if (i<1||i>list->length)
	{
		return ERROR;
	}
	*e = list->data[i - 1];
	return OK;
}
status Insertlist(sqlist *list, int i, Element *e)
{
	if (list->length == MAXSIZE)
	{
		return ERROR;
	}
	if (i<1 || i>list->length+1)
	{
		return ERROR;
	}
	for (int k = list->length - 1; k>= i - 1;k--)
	{
		list->data[k+1] = list->data[k];
	}
	list->data[i - 1] = *e;
	list->length++;
	return OK;
}
status Deletelist(sqlist *list, int i, Element *e)
{
	if (list->length == 0)
	{
		return ERROR;
	}
	if (i<1 || i>list->length)
	{
		return ERROR;
	}
	for (int k = i - 1; k <= list->length-1;k++)
	{
		list->data[k] = list->data[k + 1];
	}
	*e = list->data[i - 1];
	list->length--;
	return OK;
}
int main()
{
	sqlist list;
	list.length = 0;
	for (int i = 1; i <= 5;i++)
	{
		Insertlist(&list, i, &i);
		printf("%d\n", list.data[i - 1]);
	}
	int e;
	Deletelist(&list, 5, &e);
	return 0;
}
