#pragma once
typedef int Elemtype;
typedef struct LNode
{
	Elemtype data;
	struct LNode* next;
	struct LNode* previous;
}LNode;
void CreatListT(LNode*& head, Elemtype a[], int n);
void CreatListT_2(LNode*& head, Elemtype a[], int n);
void CreatListH(LNode*& head, Elemtype a[], int n);
void DispList(LNode* head);