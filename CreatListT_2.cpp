#include<iostream>
#include"ListFunction.h"
using namespace std;
void CreatListT_2(LNode*& head, Elemtype a[], int n)
{
	head = (LNode*)malloc(sizeof(LNode));
	head->next = nullptr;
	head->previous = nullptr;
	LNode* p = nullptr;
	LNode* r = head;
	for (int i = 0; i < n; i++)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->data = a[i];
		r->next = p;
		p->previous = r;
		r = p;
	}
	r->next = head;
	head->previous = r;
	cout << "successful" << endl;
}
