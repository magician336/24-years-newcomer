#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long world_pop;
	long long CN_pop;
	cout << "����ȫ���˿ڣ�";
	cin >> world_pop;
	cout << "�����й��˿ڣ�";
	cin >> CN_pop;
	double area = double(CN_pop) / double(world_pop) * 100;
	cout << "�й��˿�ռȫ���˿ڵ�" << fixed << setprecision(3) << area << "%��" << endl;
	return 0;
}