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
		
	cout<<"ָ����ʦ��"<<t.name<<"\t"
		<<"���䣺"<<t.age<<"\t"
		<<"ID��"<<t.id<<"\t"
		<<"ѧ����"<<t.s.name<<"\t"
		<<"���䣺"<<t.s.age<<"\t"
		<<"������"<<t.s.score<<"\t"<<endl;
}

void myprint02( const struct teacher *t)
{
	// t->age=0;//const��ֹ���������

	cout<<"ָ����ʦ��"<<t->name<<"\t"
		<<"���䣺"<<t->age<<"\t"
		<<"ID��"<<t->id<<"\t"
		<<"ѧ����"<<t->s.name<<"\t"
		<<"���䣺"<<t->s.age<<"\t"
		<<"������"<<t->s.score<<"\t"<<endl;
}

int main()
{
	//�ṹ��Ƕ�׽ṹ��
	struct teacher t[2]=
	{
		{"����",49,1,"С��",19,88},
		{"����",49,2,"����",29,66}
	};

	for(int i=0;i<2;i++)
	{
		cout<<"ָ����ʦ��"<<t[i].name<<"\t"
		<<"���䣺"<<t[i].age<<"\t"
		<<"ID��"<<t[i].id<<"\t"
		<<"ѧ����"<<t[i].s.name<<"\t"
		<<"���䣺"<<t[i].s.age<<"\t"
		<<"������"<<t[i].s.score<<"\t"<<endl;
	}
	cout<<endl;


	
	struct teacher s=
	{
		"HB",49,3,"sea",22,100	
	};
	myprint(s);//�ṹ��������������ֵ����
	           //ֵ����ռ�úܴ��ڴ棬��Ϊ�β���ʵ�εĿ���


	cout<<"mian�����е�s.age"<<s.age<<endl;

	myprint02(&s);//�ṹ����������������ַ����
	              //��ַ���ݽ�ʡ�ڴ棬��Ϊһ��ָ����32λ��ֻռ4λ


	system("pause");
	return 0;
}

		
