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
	cout << "以英制单位输入身高" << endl;
	cout << "_英尺\b\b\b\b\b";
	cin >> feet;
	cout << "_英寸\b\b\b\b\b";
	cin >> inch;
	cout << "以磅为单位输入体重：";
	cin >> pound;
	int height_inch = feet * feet_to_inch + inch;
	cout << "你的身高换算成英寸为" << height_inch << endl;
	float height_meter = height_inch * inch_to_meter;
	float kilogram = pound * pound_to_kilogram;
	cout << "你的体重换算成千克为" << kilogram << endl;
	float BMI = kilogram / (height_meter * height_meter);
	cout << "你的BMI为" << fixed<<setprecision(1)<<BMI << endl;
	return 0;
}