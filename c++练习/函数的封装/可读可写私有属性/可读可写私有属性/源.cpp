#include<iostream>
using namespace std;
#include<string>

class Person
{
private:
	//�ɶ���д
	string m_name;
	//ֻ��
	int m_age;
	//ֻд
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
//	cout<<"������"<<p1.getname()<<endl;
//
//	cout<<"���䣺"<<p1.getage()<<endl;
//
//	p1.setlover("mary");
//
//	system("pause");
//	return 0;
//}

