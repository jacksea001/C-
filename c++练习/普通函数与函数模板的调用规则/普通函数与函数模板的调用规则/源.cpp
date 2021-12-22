#include<iostream>
using namespace std;

void myPrint(int a,int b)
{
	cout<<"普通函数的调用"<<endl;
}

template<typename T>
void myPrint(T &a,T &b)
{
	cout<<"函数模板的调用"<<endl;
}

template<typename T>
void myPrint(T &a,T &b,T &c)
{
	cout<<"函数模板重载的调用"<<endl;
}

void test1()
{
	int a=10;
	int b=20;
	int c=30;
	myPrint(a,b);//普通函数和函数模板都可以实现，优先调用普通函数
	myPrint<>(a,b);//可以通过空函数参数列表来强制调用函数模板
	myPrint(a,b,c);//函数模板也可以发生重载
}

void test02()
{
	char a='a';
	char b='b';
	myPrint(a,b);//如果函数模板可以产生更好的匹配，优先调用函数模板
}

int main()
{
	test1();
	test02();
	system("pause");
	return 0;
}
