#include<iostream>
using namespace std;
int main()
{
	const int sec_to_min = 60;
	const int min_to_hour = 60;
	const int hour_to_day = 24;
	long long sec;
	long long min;
	long long hour;
	long long day;
	cout << "输入一个秒数：";
	cin >> sec;
	day = sec / sec_to_min / min_to_hour / hour_to_day;
	sec = sec % (sec_to_min * min_to_hour * hour_to_day);//用总秒数除以一天秒数得到的余数为剩余秒数
	hour = sec / sec_to_min / min_to_hour;//用剩余秒数计算小时
	sec = sec % (sec_to_min * min_to_hour);//剩余秒数除以一小时秒数得到余数
	min = sec / sec_to_min;//用剩余秒数计算分钟
	sec = sec % sec_to_min;
	cout << sec << "秒相当于" << day << "天"<<hour<<"小时"<<min<<"分钟"<<sec<<"秒。"<< endl;
	return 0;
}