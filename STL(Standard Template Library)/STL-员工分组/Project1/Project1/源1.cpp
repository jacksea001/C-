#include<iostream>
using namespace std;

#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<ctime>

#define CEHUA 1
#define MEISHU 2
#define KAIFA 3
class Person
{
public:
	Person(string name, int salary)
	{
		m_Name = name;
		m_Salary = salary;
	}
	string m_Name;
	int m_Salary;

};

void CreatPerson(vector<Person>& v)
{
	string staffname = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{

		string name = "";
		name += staffname[i];

		int salary = 5000 + rand() % 20000;

		Person p(name, salary);
		v.push_back(p);

	}
}

void SetGroup(vector<Person>&v, multimap<int, Person>&m)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		int depId = 1+ rand() % 3;
			
		//m.insert(pair<int, Person>(DepId, *it)); //将部门编号插入
		m.insert(make_pair(depId, *it));
	
		
	}
	for (multimap<int, Person>::iterator mm = m.begin(); mm != m.end(); mm++)
	{
		cout << "姓名：" << mm->second.m_Name << "\t"
			<< "部门编号：" << mm->first << "\t"
			<< "薪水：" << mm->second.m_Salary << endl;
	}

}

void ShowPerson(multimap<int, Person>& m)
{

	cout << "策划部门信息：" << endl;
	cout << "----------------------" << endl;
	multimap<int, Person>::iterator pos = m.find(CEHUA);//查找美术部门人的信息，返回值是一个迭代器
	int coun = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "\t"
			<< "部门编号：" << pos->first << "\t"
			<< "薪水：" << pos->second.m_Salary << endl;
	}

	cout << "美术部门信息：" << endl;
	cout << "----------------------" << endl;
	pos = m.find(MEISHU);
	coun = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "\t"
			<< "部门编号：" << pos->first << "\t"
			<< "薪水：" << pos->second.m_Salary << endl;
	}

	cout << "开发部门信息：" << endl;
	cout << "----------------------" << endl;
	pos = m.find(KAIFA);
	coun = m.count(KAIFA);
	index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "\t"
			<< "部门编号：" << pos->first << "\t"
			<< "薪水：" << pos->second.m_Salary << endl;
	}
}



void test1()
{

	vector<Person>v;

	CreatPerson(v);	//创建员工
	cout << "分组前：" << endl;
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "员工姓名：" << it->m_Name << "\t"
			<< "员工工资：" << it->m_Salary << "\t" << endl;;
	}*/


	cout << "分组后" << endl;

	multimap<int, Person>mWorker;
	SetGroup(v, mWorker);

	ShowPerson(mWorker);

}
int main()
{
	srand((unsigned int)time(NULL));	//利用系统的时间生成随机

	test1();

	system("pause");
	return 0;
}