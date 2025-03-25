#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	long long world_pop;
	long long CN_pop;
	cout << "输入全球人口：";
	cin >> world_pop;
	cout << "输入中国人口：";
	cin >> CN_pop;
	double area = double(CN_pop) / double(world_pop) * 100;
	cout << "中国人口占全球人口的" << fixed << setprecision(3) << area << "%。" << endl;
	return 0;
}