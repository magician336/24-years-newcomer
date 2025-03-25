#include<iostream>
char* buildstr(char c, int n);
int main()
{
	using namespace std;
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter a integer: ";
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps << endl;
	
	return 0;
}
char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1]; //为空值字符留出空间
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}