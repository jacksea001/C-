#include<iostream>
using namespace std;
#include<string>

class Person
{
private:
	//可读可写
	string m_name;
	//只读
	int m_age;
	//只写
	string m_lover;

public:

	void setname(string name)
	{
		m_name=name;
	}
	string getname()
	{
		return m_name;
	}

	int  getage()
	{
		int m_age=18;
		return m_age;
	}

	void setlover(string lover)
	{
		m_lover=lover;
	}
};

//int main()
//{
//	Person p1;
//	p1.setname("sea");
//	cout<<"姓名："<<p1.getname()<<endl;
//
//	cout<<"年龄："<<p1.getage()<<endl;
//
//	p1.setlover("mary");
//
//	system("pause");
//	return 0;
//}

