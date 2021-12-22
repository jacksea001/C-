#include<iostream>
using namespace std;

#include<vector>


void MyPrint(const vector<int>& v)	//限定vector只能读
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
	cout << "交换前" << endl;
	MyPrint(v1);

	vector<int>v2;
	for (int i = 8; i > 0; i--)
	{
		v2.push_back(i);
	}
	MyPrint(v2);

	//交换后
	cout << "交换后" << endl;
	v1.swap(v2);
	MyPrint(v1);
	MyPrint(v2);


//互换容器可以缩放内存
	vector<int>v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
		
	}
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;


	v3.resize(3);
	cout << "resize后" << endl;;
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;
	cout << endl;

	cout << "利用匿名对象swap缩放内存" << endl;
	vector<int>(v3).swap(v3);	//匿名对象只存在于构造该对象的那行代码，离开构造匿名对象的哪行代码后立即调用析构函数
	cout << v3.capacity() << endl;
	cout << v3.size() << endl;
}

void test2()
{
	//利用reserve预留空间，减少vector动态分配的次数


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
			num++;	//当vector动态分配的时候，其地址一直在改变
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