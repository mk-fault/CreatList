#include<iostream>
#include"ListFunction.h"
using namespace std;
void CreatListT(LNode*& head, Elemtype a[], int n)
{
	head = (LNode*)malloc(sizeof(LNode));
	head->next = nullptr;
	LNode* p = nullptr;
	LNode* r = head;
	for (int i = 0; i < n; i++)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->data = a[i];
		r->next = p;
		r = p;
	}
	r->next = nullptr;
	cout << "successful" << endl;
}
