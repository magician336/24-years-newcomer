#include<iostream>
using namespace std;
int main()
{
	short num_1 = 80;
	unsigned short num_2 = 42110;
	long long num_3 = 3000000000;
	char grade = 65;
	cout << num_1 << endl << num_2 << endl << num_3 << endl << grade << endl;
	char grade_2 = 'A';
	char char_88 = 88;
	int num_char_88 = char_88;
	cout << "char_88 is " << char_88 << endl << "it's number is " << num_char_88 << endl;
	double x1 = 100.0;
	double x2 = 55.2;
	int y = int(x1) + int(x2);
	cout << y << endl;
	int y2 = double(x1) + double(x2);
	cout << y2 << endl;
	return 0;
}