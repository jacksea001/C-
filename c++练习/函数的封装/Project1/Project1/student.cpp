#include<iostream>
using namespace std;
#include<string>

class Student
{
public:
	string m_name;
	int m_id;

	Student(string name,int id)
	{
		m_name=name;
		m_id=id;
		cout<<"����: "<<m_name<<endl;
		cout<<"ѧ��: "<<m_id<<endl;
	}
};

 int main()
{
	 Student s1("sea",001);

	 system("pause");
	 return 0;
}

