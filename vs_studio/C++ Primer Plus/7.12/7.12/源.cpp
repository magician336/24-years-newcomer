#include<iostream>
#include<cmath>

struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

polar rect_to_polar(rect xypos)
{
	polar pol;
	pol.distance = sqrt(pow(xypos.x, 2) + pow(xypos.y, 2));
	pol.angle = atan2(xypos.y, xypos.x);
	return pol;
}
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.295577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degress\n";
}