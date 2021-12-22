#include"指针.h";

void test01()
{
	try
 {
	cout<<"请输入需要储存几个数据"<<endl;
	int num=0;
	cin>>num;
	int * p=new int [num];//动态分配内存
	for(int counter=0;counter<num;counter++)
	{
		cout<<"输入第"<<counter<<"个数:";
		cin>>* (p+counter);//用偏移量变量来储存数字
	}





	cout<<"输出数据"<<endl;
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

	cout<<"打印数组"<<endl;
	int num=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<num;i++)
	{
		cout<<*(arr+i);//解引用数组地址（数组首地址也是一个指针变量）
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





