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
	cout << "����һ��������";
	cin >> sec;
	day = sec / sec_to_min / min_to_hour / hour_to_day;
	sec = sec % (sec_to_min * min_to_hour * hour_to_day);//������������һ�������õ�������Ϊʣ������
	hour = sec / sec_to_min / min_to_hour;//��ʣ����������Сʱ
	sec = sec % (sec_to_min * min_to_hour);//ʣ����������һСʱ�����õ�����
	min = sec / sec_to_min;//��ʣ�������������
	sec = sec % sec_to_min;
	cout << sec << "���൱��" << day << "��"<<hour<<"Сʱ"<<min<<"����"<<sec<<"�롣"<< endl;
	return 0;
}