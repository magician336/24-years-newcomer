#include<iostream>
using namespace std;

double celsius_fahrenheit(double n)
{
	return n * 1.8 + 32.0;
}
int main()
{
	double celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degrees Celsius is " << celsius_fahrenheit(celsius) << " degrees Fahrenheit." << endl;
	return 0;
}