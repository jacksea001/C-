#include<iostream>
using namespace std;
#include<string>

class MyPrint
{
public:
	

	//���������أ�������Ϊ�º���
	void operator()(string name)
	{
		cout << name << endl;
	}
};

//�º����ǳ���û�й̶���д��
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1+num2;
	}

};

int main()
{
	MyPrint myPrint;
	myPrint("sea");//����ʹ�������ǳ���������˳�Ϊ�º���

	MyAdd myadd;
	myadd(10, 20);
	cout << myadd(10, 20) << endl;

	//������������
	MyAdd()(200, 90);//һ�������һ��������Ϊ��������
					 //MyAdd()��������ִ����������ͷ� 

	cout << MyAdd()(200, 90) << endl;


	system("pause");
	return 0;
}