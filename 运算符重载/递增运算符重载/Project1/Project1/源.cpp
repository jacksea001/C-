#include<iostream>
using namespace std;
#include<string>

class myInt
{
public:
	friend ostream& operator <<(ostream& cout, myInt m);
	myInt(int a)
	{
		m_num = a;
	}

	//1.内置数据类型进行前置递增
	myInt& operator++ ()  //返回引用是为了一直对同一个对象操作
	{
		//先进行++运算
		m_num++;

		//再将自身返回
		return *this;
	}

	//2.内置数据类型进行后置递增
	 myInt  operator++ (int) //int占位符实现operator ++重载，区分前置递增和后置递增
	{
		//先拷贝当时结果
		myInt temp = *this; //局部变量在栈区申请，该函数执行完则被释放

		//后递增
		m_num++;

		//最后返回的是拷贝
		return temp;  //不能返回局部变量的引用				  
	}
private:
	int m_num;
};

ostream& operator <<(ostream& cout,myInt m)
{
	cout << m.m_num << endl;
	return cout;
}


int main()
{
	myInt m1(10);
	cout << m1 << endl;
	cout << ++m1 << endl;
	cout << m1++ << endl; 
	cout << m1 << endl;

	system("pause");
	return 0;
}