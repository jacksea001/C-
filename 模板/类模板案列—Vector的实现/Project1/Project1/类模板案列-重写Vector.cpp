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
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);		
	}
	cout << "arr1的打印输出为:" <<endl;
	printArr(arr1);
	cout << "arr1的大小：" << arr1.getSize() << endl;
	cout << "arr1的容量：" << arr1.getCapacity() << endl;

	
	MyArr<int>arr2(arr1);
	cout << "arr2的打印输出为:" << endl;
	printArr(arr2);
	//尾删
	arr2.Pop_Back();
	cout << "arr2的大小：" << arr2.getSize() << endl;
	cout << "arr2的容量：" << arr2.getCapacity() << endl;

	MyArr<int>arr3(100);
	arr3 = arr1;
}


//测试自定义数据类型
class Person
{
public:
	Person() {};  //Vector中必须给出一个默认的构造函数，因为有了有参构造就不会提供默认构造
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
		cout << "姓名:" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}
}

void test2()
{

	MyArr<Person>arr(10);
	Person p1("孙悟空",999);
	Person p2("李白",666);
	Person p3("韩信", 366);
	Person p4("妲己", 566);
	Person p5("赵云", 266);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	printPersonArr(arr);
	cout << "arr1的大小：" << arr.getSize() << endl;
	cout << "arr1的容量：" << arr.getCapacity() << endl;

}

int main()
{
	test1();
	test2();

	system("pause");
	return 0;
}