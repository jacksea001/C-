#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a,T &b);


int main()
{

	double a=30;
	double b=20.6;//能不能自动写进一个任意类型的变量
	mySwap(a,b);
	cout<<"a="<<a
		<<"  "
		<<"b="<<b<<endl;
	system("pause");
	return 0;
}