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
	// �ṹ������
	struct student arrstu[3]=
	{
		{"����",18,99},
		{"����",18,98},
		{"����",20,100}
	};

	for(int i=0;i<3;i++)
  {
	cout<<"������"<<arrstu[i].name<<"\t"
		<<"����: "<<arrstu[i].age<<"\t"
		<<"������"<<arrstu[i].score<<endl;
  }


	//�ṹ��ָ��

	 struct student s={"sea",21,100};
	 student * p=& s;
	 cout<<"������"<<p->name<<"\t"
		<<"����: "<<p->age<<"\t"
		<<"������"<<p->score<<endl;


   system("pause");
    return 0;

}
