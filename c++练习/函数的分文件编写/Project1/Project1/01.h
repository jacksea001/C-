#include<iostream>
using namespace std;

template<typename T>
void mySwap(T &a,T &b);


int main()
{

	double a=30;
	double b=20.6;//�ܲ����Զ�д��һ���������͵ı���
	mySwap(a,b);
	cout<<"a="<<a
		<<"  "
		<<"b="<<b<<endl;
	system("pause");
	return 0;
}