#include<iostream>
using namespace std;

template<typename T>
void BubbleSort(T *arr,int len);

template<typename T>
void myPrint(T *arr,int len);

int main()
{
	char arr[]={"adcef"};
	int num=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,num);
	myPrint(arr,num);
	system("pause");
	return 0;

}