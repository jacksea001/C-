#include<iostream>
using namespace std;

void test01()
{
	int age=25;
	int * p=&age;
	cin>>*p;//���������ֵ����P��ָ�������ڴ�
	cout<<"age="<<age<<endl;
}

void test02()
{
	int a=10;
	int & b=a;//�����Ǳ����ı���
	b=20;
	cout<<"a="<<a<<endl;
}

int main()
{
	//ָ����ʹ���п���ָ�������Ķ��󣬶�����ֻ����һ����������û��߱���
	test01();
	test02();
	system("pause");
	return 0;
}