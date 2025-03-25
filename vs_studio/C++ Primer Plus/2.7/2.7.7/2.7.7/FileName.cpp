#include<iostream>
using namespace std;
void time(int n1,int n2)
{
	cout << "Time: " << n1 << " : " << n2;
	return;
}

int main()
{
	int hours;
	cout << "Enter the number of hours: ";
	cin >> hours;
	int minutes;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	time(hours, minutes);
	return 0;
}