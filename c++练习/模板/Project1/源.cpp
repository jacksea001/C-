//实现任意数据类型的大小排序，以int和char型进行验证---泛型编程


#include<iostream>
using namespace std;
#include<string>

template<typename T>
void mySwap(T&a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
template<typename T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//选择排序
		for (int j = i + 1; j < len; j++)
		{
			if (arr[j] > arr[max])
			{
				mySwap(arr[j], arr[max]);
			}
		}
	}
}
template<typename T>
void myPrint(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
void test01()
{
	int intarr[] = { 2,5,7,1,3,4,6 };
	int num=sizeof(intarr)/sizeof(int);
	mySort(intarr, num);
	myPrint(intarr,num);
}

void test02()
{
	char chararr[] = "adcegfb";
	int num = sizeof(chararr) / sizeof(char);
	mySort(chararr, num);
	myPrint(chararr, num);
}

int  main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

