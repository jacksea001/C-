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
		cout << "������" << (*it).m_Name<<"  "
			<< "��ͣ�" << (*it).m_Age<<"  "
			<< "��ߣ�" << (*it).m_Height << "cm" << endl;
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

	Person p1("����", 21, 178);
	Person p2("����",22,179);
	Person p3("����", 21, 179);
	Person p4("����", 24, 185);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	MyPrint(L);

	//�����������������������ͬ����߽���
	cout << "L.sort(PersonCompare)�ص�����" << endl;
	cout << "�����������������������ͬ����߽���" << endl;
	cout << endl;
	L.sort(PersonCompare);	//sort�����Զ�������������Ҫ�Լ����壬�������ú����ص����߷º���
	MyPrint(L);


	
}


int main()
{
	test1();
	//test2();
	system("pause");
	return 0;
}