//请勿运行该程序，此源代码仅用于查看单行代码的书写正误
#include<iostream>
#include<cstring>
#include<vector>
#include<array>

using namespace std;
int main()
{
	/*1.如何声明下述数据？
	a．actor是由30个char组成的数组。
	b．betsie是由100个short组成的数组。
	c．chuck是由13个float组成的数组。
	d．dipsea是由64个long double组成的数组。*/
	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	//2.使用使用模板类array而不是数组来完成问题1。
	array<char, 30> actor;
	array<short,100> betsie;
	array<float, 13> chuck;
	array<long double, 64> dipsea;
	//3．声明一个包含5个元素的int数组，并将它初始化为前5个正奇数。
	int arrayNum[5]={ 1,3,5,7,9 };
	//4．编写一条语句，将问题3中数组第一个元素和最后一个元素的和赋给变量even。
	int even = arrayNum[0] + arrayNum[4];
	//5．编写一条语句，显示float数组ideas中的第2个元素的值。
	float ideas[4] = { 1,2,3,4 };
	cout << ideas[1] << endl;
	//6．声明一个char的数组，并将其初始化为字符串“cheeseburger”。
	char lunch[] = "cheeseburger";
	//7．声明一个string对象，并将其初始化为字符串“Waldorf Salad”。
	string spring = "Waldorf Salad";
	/*8．设计一个描述鱼的结构声明。结构中应当包括品种、重量（整
	数，单位为盎司）和长度（英寸，包括小数）。*/
	struct fish {
		char species[40];
		int weight;
		double length;
	};//声明结构时，类型名称后无等号，语句之间用分号做结尾，花括号外用分号
	/*9．声明一个问题8中定义的结构的变量，并对它进行初始化。*/
	fish Jim =
	{
		"Jim",
		20,
		12.2
	};//结构变量名称后有等号，两值中间用逗号，花括号外用分号
	/*10．用enum定义一个名为Response的类型，它包含Yes、No和
Maybe等枚举量，其中Yes的值为1，No为0，Maybe为2。*/
	enum Response { No，Yes, Maybe };//没有等号
	/*11．假设ted是一个double变量，请声明一个指向ted的指针，并使用
该指针来显示ted的值。*/
	double ted = 3.1415926;
	double* pn = &ted;
	cout << *pn << endl;
	/*12．假设treacle是一个包含10个元素的float数组，请声明一个指向
treacle的第一个元素的指针，并使用该指针来显示数组的第一个元素和
最后一个元素。*/
	float treacle[10];
	float* pf = treacle;//或&treacle[0]，treacle = &treacle[0]
	cout << pf[0] << " " << pf[9];
	/*13．编写一段代码，要求用户输入一个正整数，然后创建一个动态
的int数组，其中包含的元素数目等于用户输入的值。首先使用new来完
成这项任务，再使用vector对象来完成这项任务。*/
	unsigned int* pw = new unsigned int;
	cout << "输入一个正整数：";
	cin >> *pw;
	vector<int> vt(*pw);//模板类vector就是一种动态数组
	delete pw;
	/*14．下面的代码是否有效？如果有效，它将打印出什么结果?
	cout<<(int* ) "Home of the jolly bytes";
	答：有效，它将打印存储该字符串的地址*/
	/*15．编写一段代码，给问题8中描述的结构动态分配内存，再读取
该结构的成员的值。*/
	fish* pz = new fish;
	cout << (*pz).length;
	cout << pz->length;
	/*16.涉及程序清单4.6
	答：该程序只会读取第一个空格前的数据*/
	/*17．声明一个vector对象和一个array对象，它们都包含10个string对
象。指出所需的头文件，但不要使用using。使用const来指定要包含的
string对象数。*/
	const int num = 10;
	vector<string> vt_2(num);
	array<string, num> arr;
	
	return 0;
}