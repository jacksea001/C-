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
	// 结构体数组
	struct student arrstu[3]=
	{
		{"张三",18,99},
		{"李四",18,98},
		{"王五",20,100}
	};

	for(int i=0;i<3;i++)
  {
	cout<<"姓名："<<arrstu[i].name<<"\t"
		<<"年龄: "<<arrstu[i].age<<"\t"
		<<"分数："<<arrstu[i].score<<endl;
  }


	//结构体指针

	 struct student s={"sea",21,100};
	 student * p=& s;
	 cout<<"姓名："<<p->name<<"\t"
		<<"年龄: "<<p->age<<"\t"
		<<"分数："<<p->score<<endl;


   system("pause");
    return 0;

}
