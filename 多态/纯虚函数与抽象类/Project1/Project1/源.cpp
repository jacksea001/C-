#include<iostream>
using namespace std;
#include<string>

//���麯���������
//ֻҪ��һ�����麯���������ͳ�Ϊ������
//��������ص㣺
//1.�������޷�ʵ�л�����
//2.����������������д���麯��������Ҳ���ڳ�����
class Base
{
public:
		virtual void func() = 0;//���麯��
};

class Son:public Base
{
public:
	virtual void func()//��д���麯��
	{
		cout << "son.func()" << endl;
	}
};

class Gril :public Base
{
public:
	virtual void func()
	{
		cout << "gril.func()" << endl;
	}
};

int main()
{
	Base * Jack = new Son;
	Jack->func();
	delete Jack;

	Jack = new Gril;
	Jack->func();
	delete Jack;


	system("pause");
	return 0;
	
	
	
}