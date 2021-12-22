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
//		//随机分组
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
//	cout << "分组前：" << endl;
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "员工姓名：" << it->m_Name << "\t"
//			<<"员工工资："<<it->m_Salary<<"\t"
//			<< "员工部门编号：" << it->m_Department << endl;
//
//		
//	}
//
//	cout << "分组后" << endl;
//	
//	
//	
//	int count = m.count(1);
//	cout << count;
//	int index = 0;
//
//	cout << "策划部门信息：" << endl;
//	multimap<int, string>::iterator pos = m.find(1);//查找部门1人的信息，返回值是一个迭代器
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second << endl;
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