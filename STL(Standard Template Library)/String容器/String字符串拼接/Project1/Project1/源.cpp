#include<iostream>
using namespace std;

#include<string>

void test1()
{
	string s1 = "��";
	s1 += "�����";
	s1 += ":";

	cout << "s1:" << s1 << endl;

	string s2 = "Java c++ python";
	s1 += s2;
	cout << "s1:" << s1 << endl;


	string s3;
	s3.assign("I ");	//assign��ֵ����
	//string s3 = "I ";
	s3.append("Love ");		//�ַ���ƴ��
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