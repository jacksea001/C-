#include<iostream>
using namespace std;
#include<string>



struct Hero
{
	string name;
	int age;
	string sex;
};

void BoubbleSort(struct Hero arrh[],int len);
void myPrint(struct Hero arrh[],int len);


int main()
{
	struct Hero arrh[5]=
	{
		{"�ŷ�",19,"��"},
		{"����",20,"��"},
		{"��",21,"��"},
		{"����",22,"��"},
		{"����",18,"Ů"}
	};
	int num=sizeof(arrh)/sizeof(arrh[0]);
	BoubbleSort(arrh,num);
	myPrint(arrh,num);


	

	system("pause");
	return 0;
}
		