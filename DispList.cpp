#include<iostream>
#include"ListFunction.h"
using namespace std;
void DispList(LNode* head)
{
	LNode* p = head->next;
	while (p != nullptr && p != head)
	{
		cout << p->data << " ";
		p = p->next;
	}
}