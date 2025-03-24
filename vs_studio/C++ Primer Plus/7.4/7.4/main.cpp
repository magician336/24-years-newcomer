/*Ŀǰ����������ݶ�����ĳ��ֽ����Ϸ����ʽ�����в�Ʊ���ò���
�ߴӿ�Ƭ��ѡ��һ����Ŀ��ѡ����磬��51��������ѡȡ6������
�󣬲�Ʊ�����߽������ȡ6���������������ѡ�����������6����ȫ
��ͬ����Ӯ�ô�Լ��������Ԫ�Ľ������ǵĺ����������н��ļ��ʡ�*/
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
