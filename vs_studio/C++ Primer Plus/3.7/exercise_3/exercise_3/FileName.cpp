#include<iostream>
using namespace std;
int main()
{
	const float degrees_to_minutes = 60;
	const float minutes_to_seconds = 60;
	int degrees;
	int minutes;
	int seconds;
	cout << "�Զȷ������ʽ���������ڵ�ά��" << endl;
	cout << "�ȣ�";
	cin >> degrees;
	cout << "�֣�";
	cin >> minutes;
	cout << "�룺";
	cin >> seconds;
	float to_degrees = (seconds / minutes_to_seconds) / degrees_to_minutes + minutes / degrees_to_minutes + degrees;
	cout << degrees << "��" << minutes << "��" << seconds << "�����" << to_degrees << "�ȡ�" << endl;
	return 0;
}