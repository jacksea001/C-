#include<iostream>
using namespace std;
#include"MyArr.hpp"
#include<string>

void printArr(MyArr<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
void test1()
{
	MyArr<int>arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);		
	}
	cout << "arr1�Ĵ�ӡ���Ϊ:" <<endl;
	printArr(arr1);
	cout << "arr1�Ĵ�С��" << arr1.getSize() << endl;
	cout << "arr1��������" << arr1.getCapacity() << endl;

	
	MyArr<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ:" << endl;
	printArr(arr2);
	//βɾ
	arr2.Pop_Back();
	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "arr2��������" << arr2.getCapacity() << endl;

	MyArr<int>arr3(100);
	arr3 = arr1;
}


//�����Զ�����������
class Person
{
public:
	Person() {};  //Vector�б������һ��Ĭ�ϵĹ��캯������Ϊ�����вι���Ͳ����ṩĬ�Ϲ���
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void printPersonArr(MyArr<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "����:" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;
	}
}

void test2()
{

	MyArr<Person>arr(10);
	Person p1("�����",999);
	Person p2("���",666);
	Person p3("����", 366);
	Person p4("槼�", 566);
	Person p5("����", 266);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArr(arr);
	cout << "arr1�Ĵ�С��" << arr.getSize() << endl;
	cout << "arr1��������" << arr.getCapacity() << endl;

}

int main()
{
	test1();
	test2();

	system("pause");
	return 0;
}