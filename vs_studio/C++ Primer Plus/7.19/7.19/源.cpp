#include<iostream>
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
	using namespace std;
	double av[3] = { 1112.3,1542.6,2227.9 };

	const double* (*p1)(const double*, int) = f1; //函数指针，指向f1
	auto p2 = f2; //p2是函数指针，指向f2
	cout << "Using pointers to functions:\n";
	cout << " Address  Value\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;

	const double* (*pa[3])(const double*, int) = { f1,f2,f3 }; //函数指针数组

	auto pb = pa;
	cout << "\nUsing an array of pointers to functions:\n";
	cout << " Address  Value";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	cout << "\nUsing a pointer to a pointer to a function:\n";
	cout << " Address  Value\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3);
	//To be continued...
}
const double* f1(const double* ar, int n)
{
	return ar;
}
const double* f2(const double ar[], int n)
{
	return ar+1;
}
const double* f3(const double ar[], int n)
{
	return ar + 2;
}