#include<iostream>
const int ArSize = 8;
int sum_arr(const int *begin , const int *end);
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "total = " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "The first ate " << sum << endl;
	sum = sum_arr(cookies + 4, cookies + 8); //结尾是最后一个元素的下一个下标，即“超尾”
	cout << "The last four ate" << sum << endl;
	return 0;
}
int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}
	return total;
}