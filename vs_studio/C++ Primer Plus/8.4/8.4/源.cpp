#include<iostream>
using namespace std;
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = " << wallet1;
	cout << " wallet2 = " << wallet2 << endl;

	cout << "Using reference to swap contents:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = " << wallet1;
	cout << "wallet2 = " << wallet2 << endl;

	cout << "Using pointers\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = " << wallet1;
	cout << " wallet2 = " << wallet2 << endl;

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = " << wallet1;
	cout << "wallet2 = " << wallet2 << endl;
	return 0;
}

void swapr(int& a, int& b) //使用引用
{
	int temp = a;
	a = b;
	b = temp;
}

void swapp(int* p, int* q) //使用指针
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

void swapv(int a, int b) //使用值
{
	int temp = a;
	a = b;
	b = temp;
}