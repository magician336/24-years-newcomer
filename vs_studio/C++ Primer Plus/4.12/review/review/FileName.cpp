//�������иó��򣬴�Դ��������ڲ鿴���д������д����
#include<iostream>
#include<cstring>
#include<vector>
#include<array>

using namespace std;
int main()
{
	/*1.��������������ݣ�
	a��actor����30��char��ɵ����顣
	b��betsie����100��short��ɵ����顣
	c��chuck����13��float��ɵ����顣
	d��dipsea����64��long double��ɵ����顣*/
	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	//2.ʹ��ʹ��ģ����array�������������������1��
	array<char, 30> actor;
	array<short,100> betsie;
	array<float, 13> chuck;
	array<long double, 64> dipsea;
	//3������һ������5��Ԫ�ص�int���飬��������ʼ��Ϊǰ5����������
	int arrayNum[5]={ 1,3,5,7,9 };
	//4����дһ����䣬������3�������һ��Ԫ�غ����һ��Ԫ�صĺ͸�������even��
	int even = arrayNum[0] + arrayNum[4];
	//5����дһ����䣬��ʾfloat����ideas�еĵ�2��Ԫ�ص�ֵ��
	float ideas[4] = { 1,2,3,4 };
	cout << ideas[1] << endl;
	//6������һ��char�����飬�������ʼ��Ϊ�ַ�����cheeseburger����
	char lunch[] = "cheeseburger";
	//7������һ��string���󣬲������ʼ��Ϊ�ַ�����Waldorf Salad����
	string spring = "Waldorf Salad";
	/*8�����һ��������Ľṹ�������ṹ��Ӧ������Ʒ�֡���������
	������λΪ��˾���ͳ��ȣ�Ӣ�磬����С������*/
	struct fish {
		char species[40];
		int weight;
		double length;
	};//�����ṹʱ���������ƺ��޵Ⱥţ����֮���÷ֺ�����β�����������÷ֺ�
	/*9������һ������8�ж���Ľṹ�ı��������������г�ʼ����*/
	fish Jim =
	{
		"Jim",
		20,
		12.2
	};//�ṹ�������ƺ��еȺţ���ֵ�м��ö��ţ����������÷ֺ�
	/*10����enum����һ����ΪResponse�����ͣ�������Yes��No��
Maybe��ö����������Yes��ֵΪ1��NoΪ0��MaybeΪ2��*/
	enum Response { No��Yes, Maybe };//û�еȺ�
	/*11������ted��һ��double������������һ��ָ��ted��ָ�룬��ʹ��
��ָ������ʾted��ֵ��*/
	double ted = 3.1415926;
	double* pn = &ted;
	cout << *pn << endl;
	/*12������treacle��һ������10��Ԫ�ص�float���飬������һ��ָ��
treacle�ĵ�һ��Ԫ�ص�ָ�룬��ʹ�ø�ָ������ʾ����ĵ�һ��Ԫ�غ�
���һ��Ԫ�ء�*/
	float treacle[10];
	float* pf = treacle;//��&treacle[0]��treacle = &treacle[0]
	cout << pf[0] << " " << pf[9];
	/*13����дһ�δ��룬Ҫ���û�����һ����������Ȼ�󴴽�һ����̬
��int���飬���а�����Ԫ����Ŀ�����û������ֵ������ʹ��new����
������������ʹ��vector�����������������*/
	unsigned int* pw = new unsigned int;
	cout << "����һ����������";
	cin >> *pw;
	vector<int> vt(*pw);//ģ����vector����һ�ֶ�̬����
	delete pw;
	/*14������Ĵ����Ƿ���Ч�������Ч��������ӡ��ʲô���?
	cout<<(int* ) "Home of the jolly bytes";
	����Ч��������ӡ�洢���ַ����ĵ�ַ*/
	/*15����дһ�δ��룬������8�������Ľṹ��̬�����ڴ棬�ٶ�ȡ
�ýṹ�ĳ�Ա��ֵ��*/
	fish* pz = new fish;
	cout << (*pz).length;
	cout << pz->length;
	/*16.�漰�����嵥4.6
	�𣺸ó���ֻ���ȡ��һ���ո�ǰ������*/
	/*17������һ��vector�����һ��array�������Ƕ�����10��string��
��ָ�������ͷ�ļ�������Ҫʹ��using��ʹ��const��ָ��Ҫ������
string��������*/
	const int num = 10;
	vector<string> vt_2(num);
	array<string, num> arr;
	
	return 0;
}