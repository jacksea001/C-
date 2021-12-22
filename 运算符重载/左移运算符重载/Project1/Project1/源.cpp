#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	friend void operator<<(ostream & cout, Person &p);//友元函数访问私有
	Person(int m,string name)//构造函数初始化
	{
		this->age = m;
		this->name = name;
	}
private:
	int age;
	string name;

};

//只能用全局函数才能简化为cout<<p,本质上是operator<<(cout,p)
void operator<<(ostream & cout, Person &p)
{
	cout <<"年龄:" <<p.age << endl;
	cout << "姓名:" << p.name << endl;
}

int main()
{
	Person p1(22, "sea");
	cout << p1;

	system("pause");
	return 0;


}