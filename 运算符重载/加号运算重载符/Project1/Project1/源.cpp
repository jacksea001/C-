#include<iostream>
using namespace std;
#include<string>


//�Ӻ����������,���������������Ͳ���
//1.��Ա��������
class Person
{
public:
	int age;
	string name;

//1.��Ա�����Ӻ�����
Person operator+(Person & p)
{
	Person temp;
	temp.age = this->age + p.age;
	temp.name = this->name + p.name;
	return temp;
}

};

//2.ȫ�ֺ����Ӻ�����
//Person  operator+(Person &p1, Person &p2)
//{
//	Person temp;
//	temp.age = p1.age + p2.age;
//	return temp;
//}

int main()
{
	Person p1;
	Person p2;
	p1.age = 12;
	p2.age = 10;
	p1.name = "jack";
	p2.name = "sea";
	Person p3 = p1.operator+(p2);//��ͬ��Person p3=p1+p2
	Person p4 = p1 + p2;

	//Person p4 = operator+(p1,p2);	
	cout << "p3�����䣺" << p3.age << endl;
	cout << "p3�����֣�" << p4.name << endl;


	system("pause");
	return 0;

}
