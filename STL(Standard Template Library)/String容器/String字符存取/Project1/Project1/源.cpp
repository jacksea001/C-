#include<iostream>
using namespace std;

#include<string>


void test1()
{
	string str = "I love c++";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i);
	}
	cout << endl;

	str[0] = 'E';
	cout << str;
}

//���ַ�����ȡ������Ҫ�Ĳ����ַ�
void test2()
{
	string str = "zhangsan@emial.com";

	//��ȡ����

	int pos=str.find("@");  //�ҵ���־���ַ���λ��
	string UserName=str.substr(0, pos);
	cout << "UserName��" << UserName << endl;
}

int main()
{
	//test1();
	test2();

	system("pause");
	return 0;
}