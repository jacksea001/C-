//#include<iostream>
//using namespace std;
//
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//
//
//class Person
//{
//public:
//	Person(string name, int salary,int department)
//	{
//		m_Name = name;
//		m_Salary = salary;
//		m_Department = department;
//
//	}
//	string m_Name;
//	int m_Salary;
//	int m_Department;
//	
//};
//void test1()
//{
//	vector<Person>v;
//	
//	multimap<int, string>m;
//
//	string staffname = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//
//		string name = "";
//		name += staffname[i];
//
//		int salary = 5000 + rand() % 20000;
//		//�������
//		int department = 1 + rand() % 3;	//(0-2)+1=(1-3)
//		Person p(name, salary, department);
//		v.push_back(p);
//
//		
//		m.insert(pair<int, string>(p.m_Department, p.m_Name));
//
//	}
//
//	
//
//
//
//	cout << "����ǰ��" << endl;
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "Ա��������" << it->m_Name << "\t"
//			<<"Ա�����ʣ�"<<it->m_Salary<<"\t"
//			<< "Ա�����ű�ţ�" << it->m_Department << endl;
//
//		
//	}
//
//	cout << "�����" << endl;
//	
//	
//	
//	int count = m.count(1);
//	cout << count;
//	int index = 0;
//
//	cout << "�߻�������Ϣ��" << endl;
//	multimap<int, string>::iterator pos = m.find(1);//���Ҳ���1�˵���Ϣ������ֵ��һ��������
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second << endl;
//	}
//	
//}
////int main()
////{
////	test1();
////
////	system("pause");
////	return 0;
////}