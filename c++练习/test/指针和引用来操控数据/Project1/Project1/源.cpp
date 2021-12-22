#include<iostream>
using namespace std;

void test01()
{
	int age=25;
	int * p=&age;
	cin>>*p;//将输入的数值赋给P所指向的这块内存
	cout<<"age="<<age<<endl;
}

void test02()
{
	int a=10;
	int & b=a;//引用是变量的别名
	b=20;
	cout<<"a="<<a<<endl;
}

int main()
{
	//指针在使用中可以指向其他的对象，而引用只能是一个对象的引用或者别名
	test01();
	test02();
	system("pause");
	return 0;
}