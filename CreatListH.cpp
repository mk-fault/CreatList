#include<iostream>
#include"ListFunction.h"
using namespace std;
void CreatListH(LNode*& head, Elemtype a[], int n)
{
	head = (LNode*)malloc(sizeof(LNode));
	head->next = nullptr;
	LNode* p = nullptr;
	for (int i = 0; i < n; i++)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->next = nullptr;
		p->data = a[i];
		p->next = head->next;
		head->next = p;
	}
	cout << "successful" << endl;
}
