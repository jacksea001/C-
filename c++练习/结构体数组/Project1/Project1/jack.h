#include<iostream>
using namespace std;
#include<string>

struct student 
{
	string name;
	int age;
	int score;
};

int main()
{
	student arrstu[3]=
	{
		{"����",18,99},
		{"����",18,98},
		{"����",20,100}
	};

for(int i=0;i<3;i++)
{
	cout<<"������"<<arrstu[i].name
		<<"����: "<<arrstu[i].age
		<<"������"<<arrstu[i].score<<endl;
}

system("pause");
return 0;

}

	



