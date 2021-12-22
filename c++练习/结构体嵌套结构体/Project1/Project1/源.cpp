#include<iostream>
using namespace std;

#include<string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	string name;
	int age;
	int id;
	struct student s;
};

void myprint(struct teacher t)
{
	t.age=30;
		
	cout<<"指导老师："<<t.name<<"\t"
		<<"年龄："<<t.age<<"\t"
		<<"ID："<<t.id<<"\t"
		<<"学生："<<t.s.name<<"\t"
		<<"年龄："<<t.s.age<<"\t"
		<<"分数："<<t.s.score<<"\t"<<endl;
}

void myprint02( const struct teacher *t)
{
	// t->age=0;//const防止函数误操作

	cout<<"指导老师："<<t->name<<"\t"
		<<"年龄："<<t->age<<"\t"
		<<"ID："<<t->id<<"\t"
		<<"学生："<<t->s.name<<"\t"
		<<"年龄："<<t->s.age<<"\t"
		<<"分数："<<t->s.score<<"\t"<<endl;
}

int main()
{
	//结构体嵌套结构体
	struct teacher t[2]=
	{
		{"老王",49,1,"小王",19,88},
		{"老王",49,2,"二王",29,66}
	};

	for(int i=0;i<2;i++)
	{
		cout<<"指导老师："<<t[i].name<<"\t"
		<<"年龄："<<t[i].age<<"\t"
		<<"ID："<<t[i].id<<"\t"
		<<"学生："<<t[i].s.name<<"\t"
		<<"年龄："<<t[i].s.age<<"\t"
		<<"分数："<<t[i].s.score<<"\t"<<endl;
	}
	cout<<endl;


	
	struct teacher s=
	{
		"HB",49,3,"sea",22,100	
	};
	myprint(s);//结构体做函数参数—值传递
	           //值传递占用很大内存，因为形参是实参的拷贝


	cout<<"mian函数中的s.age"<<s.age<<endl;

	myprint02(&s);//结构体做函数参数—地址传递
	              //地址传递节省内存，因为一个指针在32位中只占4位


	system("pause");
	return 0;
}

		
