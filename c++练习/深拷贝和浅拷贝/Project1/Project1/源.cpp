#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"Ĭ�Ϲ���"<<endl;
	}
	Person(int age,int Height)
	{
		int m_age=age;
		m_Height=new int(Height);//�ڶ����������ݣ��ɳ���Ա�ֶ��������ɳ���Ա�ֶ��ͷ�
		                         //�������Ƚ����
		cout<<"�вι���"<<endl;
	}

	//person(const person &p)
	//{
	//	int m_age=p.m_age;
	//	m_height=p.m_height;
	//	cout<<"ǳ����"<<endl;//������Ĭ�ϵ���ǳ����
	//	                     //ǳ�����������ǻ���ڶ������ڴ��ظ��ͷţ�����Ҫ������ڶ��������ڴ���п�������
	//}






	Person(const Person &p)
	{
		int m_age=p.m_age;
		m_Height=new int (*p.m_Height);//����ڶ������������ڴ棬���п���
		cout<<"���"<<endl;

	}

	~Person()
	{
		//���������������ٵ������������ͷ�
		if(m_Height!=NULL)
		{
			delete m_Height;
			m_Height=NULL;
		}
		cout<<"��������"<<endl;
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
