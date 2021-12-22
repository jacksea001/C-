#include<iostream>
using namespace std;
#include<string>

class MyPrint
{
public:
	

	//在类中重载（）—成为仿函数
	void operator()(string name)
	{
		cout << name << endl;
	}
};

//仿函数非常灵活，没有固定的写法
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1+num2;
	}

};

int main()
{
	MyPrint myPrint;
	myPrint("sea");//由于使用起来非常像函数，因此成为仿函数

	MyAdd myadd;
	myadd(10, 20);
	cout << myadd(10, 20) << endl;

	//匿名函数对象
	MyAdd()(200, 90);//一个类加上一个（）称为匿名对象
					 //MyAdd()匿名对象，执行完该行则释放 

	cout << MyAdd()(200, 90) << endl;


	system("pause");
	return 0;
}