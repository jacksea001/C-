#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name,int age)
	{
		m_name=name;
		m_age=age;
	}
	string m_name;
	int m_age;
};

template<typename T>
bool myCompare(T &a,T &b)
{
	if(a==b)
	{
		return true;
	}
	else
		return false;
}


bool myCompare02(Person &p1,Person &p2)//���þ��廯��Person�İ汾ʵ�ִ���
{
	if(p1.m_name==p2.m_name&&p1.m_age==p2.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}

}

//void test01()
//{
//	Person p1("Tom",10);
//	Person p2("Tom",10);
//	bool ret=myCompare(p1,p2);//ģ�岻�����ܵģ����ھ��嶨����������;������
//	if(ret)
//	{
//		cout<<"p1=p2"<<endl;
//	}
//	else
//	{
//		cout<<"p1!=p2"<<endl;
//	}
//}

void test02()


{
	Person p1("Tom",10);
	Person p2("Tom",10);
	bool ret=myCompare02(p1,p2);//���廯
	if(ret)
	{
		cout<<"p1=p2"<<endl;
	}
	else
	{
		cout<<"p1!=p2"<<endl;
	}
}
  

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
	




	
	