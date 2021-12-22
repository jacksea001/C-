#include<iostream>
using namespace std;
#include<string>

//纯虚函数与抽象类
//只要有一个纯虚函数，这个类就称为抽象类
//抽象类的特点：
//1.抽象类无法实列化对象
//2.抽象类的子类必须重写纯虚函数，否则也属于抽象类
class Base
{
public:
		virtual void func() = 0;//纯虚函数
};

class Son:public Base
{
public:
	virtual void func()//重写纯虚函数
	{
		cout << "son.func()" << endl;
	}
};

class Gril :public Base
{
public:
	virtual void func()
	{
		cout << "gril.func()" << endl;
	}
};

int main()
{
	Base * Jack = new Son;
	Jack->func();
	delete Jack;

	Jack = new Gril;
	Jack->func();
	delete Jack;


	system("pause");
	return 0;
	
	
	
}