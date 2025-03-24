#include<iostream>
using namespace std;
void apple();
void banana();
int main()
{
	apple();
	apple();
	banana();
	banana();
	return 0;
}
void apple()
{
	cout << "Three blind mice" << endl;
	return;
}
void banana()
{
	cout << "See how they run" << endl;
	return;
}