#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter your age:";
	int age;
	cin >> age;
	int month = age * 12;
	cout <<age<< " years = " << month << " month" << endl;
	return 0;
}