#include<iostream>
using namespace std;
int main()
{
	const float degrees_to_minutes = 60;
	const float minutes_to_seconds = 60;
	int degrees;
	int minutes;
	int seconds;
	cout << "以度分秒的形式输入你所在的维度" << endl;
	cout << "度：";
	cin >> degrees;
	cout << "分：";
	cin >> minutes;
	cout << "秒：";
	cin >> seconds;
	float to_degrees = (seconds / minutes_to_seconds) / degrees_to_minutes + minutes / degrees_to_minutes + degrees;
	cout << degrees << "度" << minutes << "分" << seconds << "秒等于" << to_degrees << "度。" << endl;
	return 0;
}