#include<iostream>
using namespace std;
#include<string>


class Person
{
public:
	int *m_Age;
	
	Person(int age)
	{
		m_Age = new int(age); //���������������ɳ���Ա�Լ��ͷ�
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

	}

	Person& operator= (Person& p)
	{
		//�������ṩ����Ĭ�ϵ�ǳ������ֵ
		//m_Age=p.m_Age

		//Ӧ�����ж϶����Ƿ������ԣ�������ͷŸɾ��ٽ����������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

			//���
			m_Age = new int(*p.m_Age);
			return *this;//����������ʽ��̵�˼��
	}

};

int main()
{
	Person p1(18);
	Person p2(20);
	Person p3(21);
	p3 = p2 = p1;	//�������ṩ����Ĭ�ϵ�ǳ������ֵ��ͬʱָ��һ���ڴ�,������ڴ���ظ��ͷ�
	
	cout << "p1�����䣺" << *(p1.m_Age) << endl;
	cout << "p2�����䣺" << *(p2.m_Age) << endl;
	cout << "p3�����䣺" << *(p3.m_Age) << endl;

	system("pause");
	return 0;
}