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
			
		//m.insert(pair<int, Person>(DepId, *it)); //�����ű�Ų���
		m.insert(make_pair(depId, *it));
	
		
	}
	for (multimap<int, Person>::iterator mm = m.begin(); mm != m.end(); mm++)
	{
		cout << "������" << mm->second.m_Name << "\t"
			<< "���ű�ţ�" << mm->first << "\t"
			<< "нˮ��" << mm->second.m_Salary << endl;
	}

}

void ShowPerson(multimap<int, Person>& m)
{

	cout << "�߻�������Ϣ��" << endl;
	cout << "----------------------" << endl;
	multimap<int, Person>::iterator pos = m.find(CEHUA);//�������������˵���Ϣ������ֵ��һ��������
	int coun = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "\t"
			<< "���ű�ţ�" << pos->first << "\t"
			<< "нˮ��" << pos->second.m_Salary << endl;
	}

	cout << "����������Ϣ��" << endl;
	cout << "----------------------" << endl;
	pos = m.find(MEISHU);
	coun = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "\t"
			<< "���ű�ţ�" << pos->first << "\t"
			<< "нˮ��" << pos->second.m_Salary << endl;
	}

	cout << "����������Ϣ��" << endl;
	cout << "----------------------" << endl;
	pos = m.find(KAIFA);
	coun = m.count(KAIFA);
	index = 0;
	for (; pos != m.end() && index < coun; pos++, index++)
	{
		cout << "������" << pos->second.m_Name << "\t"
			<< "���ű�ţ�" << pos->first << "\t"
			<< "нˮ��" << pos->second.m_Salary << endl;
	}
}



void test1()
{

	vector<Person>v;

	CreatPerson(v);	//����Ա��
	cout << "����ǰ��" << endl;
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Ա��������" << it->m_Name << "\t"
			<< "Ա�����ʣ�" << it->m_Salary << "\t" << endl;;
	}*/


	cout << "�����" << endl;

	multimap<int, Person>mWorker;
	SetGroup(v, mWorker);

	ShowPerson(mWorker);

}
int main()
{
	srand((unsigned int)time(NULL));	//����ϵͳ��ʱ���������

	test1();

	system("pause");
	return 0;
}