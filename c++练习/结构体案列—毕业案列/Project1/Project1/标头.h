#include<iostream>
using namespace std;

#include<string>
#include<ctime>//随机时间种子

void allocateSpace(struct Teacher tarr[],int len);


void myPrint(struct Teacher tarr[],int len);


struct student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct student stuarr[5];
};


int main()
{
	srand((unsigned int)time(NULL));
	struct Teacher tarr[3];
	int sum=sizeof(tarr)/sizeof(tarr[0]);

	allocateSpace(tarr,sum);
	myPrint(tarr,sum);

	system("pause");
	return 0;
}
