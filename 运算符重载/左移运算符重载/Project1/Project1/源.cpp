#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	friend void operator<<(ostream & cout, Person &p);//��Ԫ��������˽��
	Person(int m,string name)//���캯����ʼ��
	{
		this->age = m;
		this->name = name;
	}
private:
	int age;
	string name;

};

//ֻ����ȫ�ֺ������ܼ�Ϊcout<<p,��������operator<<(cout,p)
void operator<<(ostream & cout, Person &p)
{
	cout <<"����:" <<p.age << endl;
	cout << "����:" << p.name << endl;
}

int main()
{
	Person p1(22, "sea");
	cout << p1;

	system("pause");
	return 0;


}