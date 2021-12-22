#include"标头.h";

void BoubbleSort(struct Hero arrh[],int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-1-i;j++)
		{
			if(arrh[j].age>arrh[j+1].age)
			{
				/*int temp=arrh[j].age;
				arrh[j].age=arrh[j+1].age;
				arrh[j+1].age=temp; */      //整个结构体都要排序不只是年龄

				struct Hero temp=arrh[j];
				arrh[j]=arrh[j+1];
				arrh[j+1]=temp;
			}
		}
	}
}

void myPrint(struct Hero arrh[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"姓名："<<arrh[i].name<<"\t"
			<<"年龄："<<arrh[i].age<<"\t"
			<<"性别："<<arrh[i].sex<<endl;
	}
}
