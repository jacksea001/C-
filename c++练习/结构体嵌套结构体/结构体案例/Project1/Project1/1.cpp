#include"��ͷ.h";

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
				arrh[j+1].age=temp; */      //�����ṹ�嶼Ҫ����ֻ������

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
		cout<<"������"<<arrh[i].name<<"\t"
			<<"���䣺"<<arrh[i].age<<"\t"
			<<"�Ա�"<<arrh[i].sex<<endl;
	}
}
