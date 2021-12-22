#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:
	virtual void speak() //虚函数
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	//函数的重写：函数返回值的类型  函数名 参数列表完全相同
	virtual void speak()
	{
		cout << "猫在说话" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "狗在说话" << endl;
	}
};

//执行说话的函数
//静态多态：地址早绑定，在编译阶段确定函数地址
//如果想让猫说话的话，应该让地址晚绑定；（通过虚函数实现动态多态）

//动态多态的满足条件：
//1.有继承关系；
//2.子类重写父类的虚函数

//动态多态的使用：
//父类的指针或引用指向子类对象
void dospeak(Animal& animal) //Animal& animal = Cat  父类的引用指向子类对象
{
	animal.speak();
}

int main()
{
	Cat cat;
	Dog dog;

	dospeak(cat);//用一个函数就可以实现多个子类的函数，类似接口
	dospeak(dog);

	system("pause");
	return 0;
}