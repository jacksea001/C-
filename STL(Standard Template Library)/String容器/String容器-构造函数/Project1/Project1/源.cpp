#include<iostream>
using namespace std;

#include<string>

//string是c++风格的字符串，而string本质上是一个类
//string 和char *区别
//string是一个类，类内部封装了char *,管理这个字符串，是一个char * 的容器

void test1()
{
	//string s1;	//默认构造

	//string s1("Hello world");  //有参构造
	const char * str = "Hello World";
	string s1(str);

	cout << "s1:" << s1 << endl;

	string s2(s1);	//拷贝构造
	cout << "s2:" << s2 << endl;

	string s3(10, 'q');
	cout << "s3:" << s3 << endl;

	string s4(s3, 5);
	cout << "s4:" << s4 << endl;
}

int main()
{
	test1();

	system("pause");
	return 0;
}