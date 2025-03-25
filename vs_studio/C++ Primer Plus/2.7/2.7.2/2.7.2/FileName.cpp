#include<iostream>
using namespace std;
int main()
{
	double distance;
	cout << "long-码换算器" << endl;
	cout << "请输入一个以long为单位的距离：";
	cin >> distance;
	double yard = distance * 220;
	cout << distance << " long等于" << yard << "码" << endl;
		return 0;
}