#include<iostream>
using namespace std;
#include<fstream>
#include<string>


void  test()
{
	ifstream ifs;
	ifs.open("G:/c++/�ļ�����/�ı��ļ�-���ļ�/Project1/test2.txt", ios::in);

	//�ж��Ƿ�ɹ���
	while(!ifs.is_open())
	{
		cout << "���ļ�ʧ��" << endl;
		return ;
	}

	//��ȡ�ļ��ı�����
	

	//��һ�ֶ�ȡ
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//�ڶ��ֶ�ȡ���ո�ᱻʶ��Ϊ����
	char buf[1024] = { 0 };
	while (ifs>>buf) //ifs ���ı��ļ�һ��һ�ж���buf�У����������һ�з���Ϊ�ٵı�־
	{
		cout << buf << endl;
	}

	ifs.close();
}

int main()
{

	test();

	system("pause");
	return 0;
}