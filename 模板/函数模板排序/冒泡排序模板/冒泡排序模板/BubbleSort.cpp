#include<iostream>
using namespace std;


template<typename T>
void BubbleSort(T arr[], int len)  //ð�ݷ����з����Ե�
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j <len-i-1; j++)
		{
			if (arr[j]>arr[j + 1])  //�����Ҫ������ȥ������������Ҫ�ӵ�һ������ʼ����
			{
				T temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
		cout << arr[i] << endl;
	}	
}
template<typename T>
void MyPrint(T arr[],int len )
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

void test1()
{
	int intarr[] = { 1,3,2,4,5 };
	int len = sizeof(intarr) / sizeof(int);
	BubbleSort(intarr, len);
	MyPrint(intarr, len);
}

int main()
{
	test1();
	system("pause");
	return 0;
}
