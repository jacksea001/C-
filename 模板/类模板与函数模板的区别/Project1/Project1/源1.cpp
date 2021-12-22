#include<iostream>
using namespace std;
#include<string>

template<typename T1,typename T2>
void myAdd(T1 a, T2 b)
{
	
	cout << a + b << endl;
}

template<typename T>
void myAdd2(T a, T b)
{

	cout << a + b << endl;
}

//int main()
//{
//	myAdd(60, 20.1);
//	//myAdd2(10, 20.1);//一个参数类型会产生二义性
//	system("pause");
//	return 0;
//
//}