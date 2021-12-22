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
	//Person p1("lisi", 100);	//无法利用自动型推倒
	Person<string, int> p1("sea", 22);
	p1.showPerson();
	  //类模板可以使用默认参数

	Person<string> p2("see", 22);
	p2.showPerson();	//类模板可以使用默认参数
	system("pause");
	return 0;
}