#include<iostream>
using namespace std;
int main()
{
	int distance;
	int gas;
	cout << "enter the distance(mile) the car covered:";
	cin >> distance;
	cout << "enter the gas the car consumed:";
	cin >> gas;
	float miles_per_gallon = float(distance) / float(gas);
	cout << "This car consumes 1 gallon to run " << miles_per_gallon << " miles." << endl;
	return 0;
}