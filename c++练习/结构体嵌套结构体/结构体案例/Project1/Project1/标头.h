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
		{"ÕÅ·É",19,"ÄĞ"},
		{"¹ØÓğ",20,"ÄĞ"},
		{"Âí³¬",21,"ÄĞ"},
		{"ÕÔÔÆ",22,"ÄĞ"},
		{"õõ²õ",18,"Å®"}
	};
	int num=sizeof(arrh)/sizeof(arrh[0]);
	BoubbleSort(arrh,num);
	myPrint(arrh,num);


	

	system("pause");
	return 0;
}
		