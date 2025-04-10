#include<iostream>

template<class T> //这里class与typename等价
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
	cout << lesser<>(m, n) << endl; //编译器应选择模板函数
	cout << lesser<int>(x, y) << endl; //显式实例化，x和y被强制转换为int
	return 0;
}