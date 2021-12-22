#include<iostream>
using namespace std;

#include<string>
#include<set>
#include<list>
#include<vector>
#include<algorithm>

class Person
{
public:
	Person(string name, int forcevalue)
	{
		m_Name = name;
		m_ForceValue = forcevalue;
	}


	string m_Name;
	int m_ForceValue;
};

class ComparePerson
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		return p1.m_ForceValue > p2.m_ForceValue;
	}
};

bool MyCompare(const Person &p1, const Person &p2)
{
	return p1.m_ForceValue > p2.m_ForceValue;
}

void test1()
{
	
	set<Person, ComparePerson>s1;
	Person p1("关羽", 97);
	Person p2("赵云", 98);
	Person p3("张飞", 96);
	Person p4("吕布", 100);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	cout << "武力值排序后" << endl;
	for (set<Person, ComparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name<<"\t"
			<< "武力值：" << (*it).m_ForceValue << endl;
	}
}

void test2()
{
	list<Person>l;
	Person p1("关羽", 97);
	Person p2("赵云", 98);
	Person p3("张飞", 96);
	Person p4("吕布", 100);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	cout << "武力值排序前" << endl;
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "\t"
			<< "武力值：" << (*it).m_ForceValue << endl;
	}

	l.sort(MyCompare);
	cout << "武力值排序后" << endl;
	for (list<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "\t"
			<< "武力值：" << (*it).m_ForceValue << endl;
	}

}

void test3()
{
	vector<Person>l;
	Person p1("关羽", 97);
	Person p2("赵云", 98);
	Person p3("张飞", 96);
	Person p4("吕布", 100);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	cout << "武力值排序前" << endl;
	for (vector<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "\t"
			<< "武力值：" << (*it).m_ForceValue << endl;
	}
	sort(l.begin(), l.end(), MyCompare);
	cout << "武力值排序后" << endl;

	for (vector<Person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "\t"
			<< "武力值：" << (*it).m_ForceValue << endl;
	}
}

int main()
{
	test1();
	test2();
	test3();
	system("pause");
	return 0;
}