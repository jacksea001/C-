#include<iostream>
using namespace std;

void myPrint(int a,int b)
{
	cout<<"��ͨ�����ĵ���"<<endl;
}

template<typename T>
void myPrint(T &a,T &b)
{
	cout<<"����ģ��ĵ���"<<endl;
}

template<typename T>
void myPrint(T &a,T &b,T &c)
{
	cout<<"����ģ�����صĵ���"<<endl;
}

void test1()
{
	int a=10;
	int b=20;
	int c=30;
	myPrint(a,b);//��ͨ�����ͺ���ģ�嶼����ʵ�֣����ȵ�����ͨ����
	myPrint<>(a,b);//����ͨ���պ��������б���ǿ�Ƶ��ú���ģ��
	myPrint(a,b,c);//����ģ��Ҳ���Է�������
}

void test02()
{
	char a='a';
	char b='b';
	myPrint(a,b);//�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
}

int main()
{
	test1();
	test02();
	system("pause");
	return 0;
}
