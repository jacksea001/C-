#include<iostream>
using namespace std;
#include<string>

class myInt
{
public:
	friend ostream& operator <<(ostream& cout, myInt m);
	myInt(int a)
	{
		m_num = a;
	}

	//1.�����������ͽ���ǰ�õ���
	myInt& operator++ ()  //����������Ϊ��һֱ��ͬһ���������
	{
		//�Ƚ���++����
		m_num++;

		//�ٽ�������
		return *this;
	}

	//2.�����������ͽ��к��õ���
	 myInt  operator++ (int) //intռλ��ʵ��operator ++���أ�����ǰ�õ����ͺ��õ���
	{
		//�ȿ�����ʱ���
		myInt temp = *this; //�ֲ�������ջ�����룬�ú���ִ�������ͷ�

		//�����
		m_num++;

		//��󷵻ص��ǿ���
		return temp;  //���ܷ��ؾֲ�����������				  
	}
private:
	int m_num;
};

ostream& operator <<(ostream& cout,myInt m)
{
	cout << m.m_num << endl;
	return cout;
}


int main()
{
	myInt m1(10);
	cout << m1 << endl;
	cout << ++m1 << endl;
	cout << m1++ << endl; 
	cout << m1 << endl;

	system("pause");
	return 0;
}