/*目前，美国许多州都采用某种纸牌游戏的形式来发行彩票，让参与
者从卡片中选择一定数目的选项。例如，从51个数字中选取6个。随
后，彩票管理者将随机抽取6个数。如果参与者选择的数字与这6个完全
相同，将赢得大约几百万美元的奖金。我们的函数将计算中奖的几率。*/
#include<iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << " of winning.\n";
		cout << "Next two numbers(q to quit): ";
	}
	cout << "Bye\n";
	return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
