#include<iostream>
using namespace std;
#include<string>

template<class NameType,class AgeType=int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << m_Name << "  " << m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

int main()
{
	//Person p1("lisi", 100);	//�޷������Զ����Ƶ�
	Person<string, int> p1("sea", 22);
	p1.showPerson();
	  //��ģ�����ʹ��Ĭ�ϲ���

	Person<string> p2("see", 22);
	p2.showPerson();	//��ģ�����ʹ��Ĭ�ϲ���
	system("pause");
	return 0;
}