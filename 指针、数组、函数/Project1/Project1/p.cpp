#include"p.h"

template<typename T>
//void BubbleSort(int arr[],int len)
void BubbleSort(T *arr,int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-1-i;j++)//�����������ֻ������ι�-1������-i��ÿ��ð�ݳ�������
		{
			if(arr[j]>arr[j+1])
			{
				T temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

template<typename T>
void myPrint(T *arr,int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]
		<<"  ";
	}	
}



		
			
			
