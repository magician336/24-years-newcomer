#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int feet_to_inch = 12;
	const float inch_to_meter = 0.0254;
	const float pound_to_kilogram = 0.4536;
	int feet;
	int inch;
	float pound;
	cout << "��Ӣ�Ƶ�λ�������" << endl;
	cout << "_Ӣ��\b\b\b\b\b";
	cin >> feet;
	cout << "_Ӣ��\b\b\b\b\b";
	cin >> inch;
	cout << "�԰�Ϊ��λ�������أ�";
	cin >> pound;
	int height_inch = feet * feet_to_inch + inch;
	cout << "�����߻����Ӣ��Ϊ" << height_inch << endl;
	float height_meter = height_inch * inch_to_meter;
	float kilogram = pound * pound_to_kilogram;
	cout << "������ػ����ǧ��Ϊ" << kilogram << endl;
	float BMI = kilogram / (height_meter * height_meter);
	cout << "���BMIΪ" << fixed<<setprecision(1)<<BMI << endl;
	return 0;
}