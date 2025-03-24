#include<iostream>
/*数组名即地址*/
void show_martix(int (*ar)[4], int size);
int main()
{
	using namespace std;
	int martix[2][4] =
	{
		1,3,5,7,
		2,4,6,8
	};
	show_martix(martix, 2);
	return 0;
}
void show_martix(int (*ar)[4], int size)
{
	using namespace std;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << *(*(ar + i) + j);
		}
		cout << endl;
	}
}