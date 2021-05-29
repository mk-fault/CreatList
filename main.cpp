#include<iostream>
#include"ListFunction.h"
using namespace std;
int main()
{
	LNode* head = nullptr;
	Elemtype a[20];
	int n;
	cout << "请输入个数n:" << endl;
	cin >> n;
	cout << "请输入待建数据:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	CreatListT_2(head, a, n);
	DispList(head);
}