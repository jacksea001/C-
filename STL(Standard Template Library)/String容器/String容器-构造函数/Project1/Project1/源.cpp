#include<iostream>
using namespace std;

#include<string>

//string��c++�����ַ�������string��������һ����
//string ��char *����
//string��һ���࣬���ڲ���װ��char *,��������ַ�������һ��char * ������

void test1()
{
	//string s1;	//Ĭ�Ϲ���

	//string s1("Hello world");  //�вι���
	const char * str = "Hello World";
	string s1(str);

	cout << "s1:" << s1 << endl;

	string s2(s1);	//��������
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