#include<iostream>
template<typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template<>void Swap<job>(job& j1, job& j2); //显式具体化 template后有<>
void Show(job& j);

int main()
{
	using namespace std;
	cout.precision(2); //
	cout.setf(ios::fixed, ios::floatfield);
/*precision(2)控制的是总有效位数（2位），fixed启用定点表示法，floatfield表示清除之前的浮点格式标志。
当启用定点表示法后，precision(2)的含义变更为控制小数点后的精度
作用范围：
这两行代码会影响后续所有 cout 输出，直到被其他格式设置覆盖。

​恢复默认格式：
使用 cout.unsetf(ios::floatfield) 可恢复默认的浮点数格式。

​补零行为：
若数值小数位数不足，fixed 模式会自动补零，例如 2.5 会显示为 2.50。
cout.setf(ios::fixed, ios::floatfield)表示先清除先前的格式（ios::floatfield的作用）
，再设置定点十进制输出格式（ios::fixed)，ios::floatfield不能单独使用*/
	int i = 10, j = 20;//
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using complier-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i , j = " << i << ", " << j << ",\n";

	job sue = { "Susan", 73000.60, 7 };
	job sidney = { "Sidney", 78060.72, 9 };
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);
	return 0;
}

template<typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<>void Swap<job>(job& j1, job& j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job& j)
{
	using namespace std;
	cout << j.name << ": $" << j.salary
		<< " on floor " << j.floor << endl;
}