#include<iostream>
using namespace std;
double conversion(double n)
{
	return n * 63240;
}
int main()
{
	double light_years;
	cout << "Enter the number of light years: ";
	cin >> light_years;
	cout << light_years << " light years = " << conversion(light_years) << " astromonical units.";
	return 0;
}