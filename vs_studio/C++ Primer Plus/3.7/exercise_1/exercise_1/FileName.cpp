#include<iostream>
using namespace std;
int main()
{
	const int conversion = 12;
	int height;
	cout << "���������ߣ�Ӣ�磩��_____\b\b\b\b\b";
	cin >> height;
	int feet = height / conversion;
	int inch = height % conversion;
	cout << "������Ϊ" << feet << "Ӣ�ߣ�" << inch << "Ӣ�硣" << endl;
	return 0;
}
