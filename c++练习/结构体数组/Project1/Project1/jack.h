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
		{"张三",18,99},
		{"李四",18,98},
		{"王五",20,100}
	};

for(int i=0;i<3;i++)
{
	cout<<"姓名："<<arrstu[i].name
		<<"年龄: "<<arrstu[i].age
		<<"分数："<<arrstu[i].score<<endl;
}

system("pause");
return 0;

}

	



