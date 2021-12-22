#include<iostream>
using namespace std;

#include<string>

void test1()
{
	string s1 = "我";
	s1 += "爱编程";
	s1 += ":";

	cout << "s1:" << s1 << endl;

	string s2 = "Java c++ python";
	s1 += s2;
	cout << "s1:" << s1 << endl;


	string s3;
	s3.assign("I ");	//assign赋值操作
	//string s3 = "I ";
	s3.append("Love ");		//字符串拼接
	s3.append("programming yyds", 12);
	cout << "s3:" << s3 << endl;
	s3.append(s2, 5, 3);
	cout << "s3:" << s3 << endl;


}

int main()
{
	test1();

	system("pause");
	return 0;
}