#include<iostream>
using namespace std;

#include<string>
#include<list>
#include<algorithm>

class Person
{
public:
	Person(string name, int age, double height)
	{
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}
	string m_Name;
	int m_Age;
	double m_Height;	
};

void MyPrint(list<Person>& L)
{
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name<<"  "
			<< "年纪：" << (*it).m_Age<<"  "
			<< "身高：" << (*it).m_Height << "cm" << endl;
	}
	cout << endl;
}

bool PersonCompare(Person& p1,Person& p2)
{
	if (p1.m_Age ==p2.m_Age)
	{
		return p1.m_Height >p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
	
}

void test1()
{
	list<Person>L;

	Person p1("张三", 21, 178);
	Person p2("李四",22,179);
	Person p3("王五", 21, 179);
	Person p4("赵六", 24, 185);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	MyPrint(L);

	//按年龄升序排序，如果年龄相同则按身高降序
	cout << "L.sort(PersonCompare)回调函数" << endl;
	cout << "按年龄升序排序，如果年龄相同则按身高降序" << endl;
	cout << endl;
	L.sort(PersonCompare);	//sort对于自定义数据类型需要自己定义，可以利用函数回调或者仿函数
	MyPrint(L);


	
}


int main()
{
	test1();
	//test2();
	system("pause");
	return 0;
}