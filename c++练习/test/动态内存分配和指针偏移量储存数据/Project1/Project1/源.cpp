#include"ָ��.h";

void test01()
{
	try
 {
	cout<<"��������Ҫ���漸������"<<endl;
	int num=0;
	cin>>num;
	int * p=new int [num];//��̬�����ڴ�
	for(int counter=0;counter<num;counter++)
	{
		cout<<"�����"<<counter<<"����:";
		cin>>* (p+counter);//��ƫ������������������
	}





	cout<<"�������"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<*p++<<" "<<endl;
	}
	delete []p;
 }
	catch (bad_alloc)
	{
		cout<<"exception encounter:"<<endl;
	}
}
void test02()
{
	int arr[5]={1,2,3,4,5};
	int * p=arr;

	cout<<"��ӡ����"<<endl;
	int num=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<num;i++)
	{
		cout<<*(arr+i);//�����������ַ�������׵�ַҲ��һ��ָ�������
	}
	cout<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<p[i];
	}
}

	void test03()
	{
	bool * isSunny=NULL;
	cout<<"Is it sunny(y/n)"<<endl;
		char input='y';
	cin>>input;
	if(input=='y')
	{
		isSunny=new bool;
		* isSunny=true;
		
	}
	else
	{
		 isSunny=new bool;
		* isSunny=false;
	}
	cout<<"bool is "<<*isSunny<<endl;
	delete  isSunny;

	}

	void test04()
	{
		int *p1=new int;
		int *p2=p1;
		*p2=30;
		cout<<*p1;
		delete p1;
	


	}





