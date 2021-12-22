#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}
	bool operator ==(Person &p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
private:
	string m_Name;
	int m_Age;	
};

int main()
{
	Person p1("jack", 18);
	Person p2("jack",18);
	if (p1==p2)  //µÈÍ¬ÓÚif (p1.operator==(p2))
	{
		cout << "p1 and p2 is the same" << endl;
	}
	else
	{
		cout << "p1 and p2 is not the same" << endl;
	}

	system("pause");
	return 0;
}