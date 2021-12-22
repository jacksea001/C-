#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:

	Animal()
	{
		cout << "Animal 的构造函数" << endl;
	}
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}


	//多态使用时，如果子类中有属性开辟到堆区，那么父类的指针在释放时无法调用到子类的析构代码
	//解决方式：将父类的析构函数改为虚析构或者纯虚析构
	
	virtual ~ Animal()
	{
		cout << "Animal 的析构函数" << endl;
	}

	string * m_Name;
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name = new string(name);
		cout << "Cat 的构造函数" << endl;
	}

	virtual void speak()
	{
		cout << "m_Name" << "小猫在说话" << endl;
	}

	 ~Cat()
	{
		cout << "Cat 的析构函数" << endl;
	}

};

int main()
{
	
	Animal * animal = new Cat("Tom");
	delete animal;//多态使用时，如果子类中有属性开辟到堆区，那么父类的指针在释放时无法调用到子类的析构代码


	system("pause");
	return 0;

}