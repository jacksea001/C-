#include<iostream>
using namespace std;
#include<math.h>

template<typename T>
void SelectSort(T arr[], int num)
{
	for (int i = 0; i <num ; i++)
	{ 
		int max = i;//最大值下标
		for (int j = i+1; j < num ; j++)
		{
			if (arr[j] > arr[max])
			{
				max = j;	//更新每一轮的最值下标		
			}
		}
			if (max != i)
			{
				T temp = arr[max];
				arr[max] = arr[i];
				arr[i] = temp;
			}	
			cout << arr[i] << "  ";
	}
	cout << endl;
}
//template<typename T>
//void MyPrint(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
void test1()
{
	int intarr[] = { 1,3,2,4,7,5,6 };
	int num = sizeof(intarr) / sizeof(int);
	SelectSort(intarr, num);
	//MyPrint(intarr, num);
}

void test2()
{
	char chararr[] = " acdfeb ";
	int num = sizeof(chararr) / sizeof(char);
	SelectSort(chararr, num);
	//MyPrint(chararr, num);

}

int main()
{
	test1();
	test2();
	system("pause");
	return 0;
}