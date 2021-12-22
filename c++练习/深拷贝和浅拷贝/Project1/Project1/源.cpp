#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"默认构造"<<endl;
	}
	Person(int age,int Height)
	{
		int m_age=age;
		m_Height=new int(Height);//在堆区创建数据，由程序员手动创建并由程序员手动释放
		                         //堆区是先进后出
		cout<<"有参构造"<<endl;
	}

	//person(const person &p)
	//{
	//	int m_age=p.m_age;
	//	m_height=p.m_height;
	//	cout<<"浅拷贝"<<endl;//编译器默认的是浅拷贝
	//	                     //浅拷贝的问题是会把在堆区的内存重复释放，所以要用深拷贝在堆区申请内存进行拷贝操作
	//}






	Person(const Person &p)
	{
		int m_age=p.m_age;
		m_Height=new int (*p.m_Height);//深拷贝在堆区重新申请内存，进行拷贝
		cout<<"深拷贝"<<endl;

	}

	~Person()
	{
		//析构函数，将开辟到堆区的数据释放
		if(m_Height!=NULL)
		{
			delete m_Height;
			m_Height=NULL;
		}
		cout<<"析构函数"<<endl;
	}

	int m_age;
	int *m_Height;
};

void test()
{
	Person p1(10,175);
	
	Person p2(p1);
}
int main()
{

	test();
   cout<<"aaaa"<<endl;
   system("pause");
   return 0;
}
