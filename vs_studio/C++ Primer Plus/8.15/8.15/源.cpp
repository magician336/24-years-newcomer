#include<iostream>

template<class T> //����class��typename�ȼ�
T lesser(T a, T b)
{
	return a < b ? a : b;
}

int lesser(int a, int b)
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

int main()
{
	using namespace std;
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl;
	cout << lesser(x, y) << endl;
	cout << lesser<>(m, n) << endl; //������Ӧѡ��ģ�庯��
	cout << lesser<int>(x, y) << endl; //��ʽʵ������x��y��ǿ��ת��Ϊint
	return 0;
}