#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>			//�㷨ͷ�ļ�

void myPrint(int val)
{
	cout << val << "  ";
}

void test1()
{
//����vector�������󣬲�ͨ��ģ�����ָ�������д�ŵ���������
	vector<int>v1;

	//������β����������
	for (int i = 1; i < 6; i++)
	{
		v1.push_back(i * 10);
	}

	/*v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);*/


//ÿ�����������Լ��ĵ����������������������������е�Ԫ��
//v.begin()���ص�������ָ�������еĵ�һ��Ԫ��
//v.end()������������ָ���������һ��Ԫ�ص���һ��λ��

	//��һ�ֱ�����ʽ
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it<<"  " ;	
	}
	cout << endl;



//�ڶ��ֱ��������ñ�׼STL�㷨��algorithm����for_each
	for_each(v1.begin(), v1.end(), myPrint);	//myPrint������Ϊһ���������ص�����
}



int main()
{
	test1();

	system("pause");
	return 0;
}