#include<iostream>
using namespace std;
#include<string>


class Person
{
public:
	int *m_Age;
	
	Person(int age)
	{
		m_Age = new int(age); //堆区创建的数据由程序员自己释放
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

	}

	Person& operator= (Person& p)
	{
		//编译器提供的是默认的浅拷贝赋值
		//m_Age=p.m_Age

		//应该先判断堆区是否有属性，如果有释放干净再进行深拷贝操作
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

			//深拷贝
			m_Age = new int(*p.m_Age);
			return *this;//返回自身，链式编程的思想
	}

};

int main()
{
	Person p1(18);
	Person p2(20);
	Person p3(21);
	p3 = p2 = p1;	//编译器提供的是默认的浅拷贝赋值，同时指向一块内存,会造成内存的重复释放
	
	cout << "p1的年龄：" << *(p1.m_Age) << endl;
	cout << "p2的年龄：" << *(p2.m_Age) << endl;
	cout << "p3的年龄：" << *(p3.m_Age) << endl;

	system("pause");
	return 0;
}