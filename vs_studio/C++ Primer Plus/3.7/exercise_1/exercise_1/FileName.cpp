#include<iostream>
using namespace std;
int main()
{
	const int conversion = 12;
	int height;
	cout << "输入你的身高（英寸）：_____\b\b\b\b\b";
	cin >> height;
	int feet = height / conversion;
	int inch = height % conversion;
	cout << "你的身高为" << feet << "英尺，" << inch << "英寸。" << endl;
	return 0;
}
