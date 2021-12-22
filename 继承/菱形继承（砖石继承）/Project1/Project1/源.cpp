#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:
	int m_Age;
};
//继承前加virtual关键字以后，变成虚继承
//此时公共的父类成为虚基类
class Sheep:virtual public  Animal{};

class Tou : virtual public  Animal{};

//1.菱形继承的问题是子类继承了两份数据，导致资源浪费毫无意义
//2.利用虚基类可以解决菱形继承问题
class SheepTou :public Sheep, public Tou{};

int main()
{
	SheepTou st;
	st.Sheep::m_Age = 18;
	st.Tou::m_Age = 28;
	st.m_Age = 16;

	cout << st.Sheep::m_Age << endl;
	cout << st.Tou::m_Age << endl;
	cout << st.m_Age << endl;
	system("pause");
	return 0;
}