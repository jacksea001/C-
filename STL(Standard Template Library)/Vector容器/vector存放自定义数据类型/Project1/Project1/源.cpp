#include<iostream>
using namespace std;
#include<vector>

#include<algorithm>
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void myPrint(Person &p)
{
	
	cout << "������" << p.m_Name << "  " << "��ͣ�" << p.m_Age << endl;
}

void test1()
{
	vector<Person>v1;
	

	

	Person  p1("����",21);
	Person  p2("����", 22);
	Person  p3("����", 23);

	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);

	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		//cout <<"������"<< (*it).m_Name <<"  " << "��ͣ�"<<(*it).m_Age<<endl;
		cout << "������" << it->m_Name << "  " << "��ͣ�" << it->m_Age << endl;
	}
	
	cout << endl;
	cout << "����for_each" << endl;

	//����for_each
	for_each(v1.begin(), v1.end(), myPrint);
}

int main()
{
	test1();

	system("pause");
	return 0;
}