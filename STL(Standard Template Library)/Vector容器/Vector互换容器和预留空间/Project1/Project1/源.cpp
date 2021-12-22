#include<iostream>
using namespace std;

#include<vector>


void MyPrint(const vector<int>& v)	//�޶�vectorֻ�ܶ�
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)<<"  ";
	}
	cout << endl;
}
void test1()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ" << endl;
	MyPrint(v1);

	vector<int>v2;
	for (int i = 8; i > 0; i--)
	{
		v2.push_back(i);
	}
	MyPrint(v2);

	//������
	cout << "������" << endl;
	v1.swap(v2);
	MyPrint(v1);
	MyPrint(v2);


//�����������������ڴ�
	vector<int>v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
		
	}
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;


	v3.resize(3);
	cout << "resize��" << endl;;
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;
	cout << endl;

	cout << "������������swap�����ڴ�" << endl;
	vector<int>(v3).swap(v3);	//��������ֻ�����ڹ���ö�������д��룬�뿪����������������д��������������������
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;
}

void test2()
{
	//����reserveԤ���ռ䣬����vector��̬����Ĵ���


	vector<int>v1;
	v1.resize(100008);
	int * p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;	//��vector��̬�����ʱ�����ַһֱ�ڸı�
		}	
	}
	cout << num;
}

int main()
{
	test1();
	//test2();

	system("pause");
	return 0;
}