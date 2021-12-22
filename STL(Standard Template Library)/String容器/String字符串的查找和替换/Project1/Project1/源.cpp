#include<iostream>
using namespace std;

#include<string>

void test1()
{
	string s1 = "abcdefgde";
	int pos=s1.find("de");
	cout << "pos:" << pos << endl;

	int pos2 = s1.rfind("de");
	cout << "pos2:" << pos2 << endl;	//rfindÊÇ´Ó×óÍùÓÒ¿ªÊ¼Æ¥ÅäËÑË÷

	s1.replace(1, 3, "1234");
	cout << "s1:" << s1 << endl;

}

int main()
{
	test1();

	system("pause");
	return 0;
}