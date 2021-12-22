#include<iostream>
using namespace std;

const double pi=3.14;

class Circle
	{
public:
	//属性
	int m_r;

	//行为
	double calculateCir()
	{
		return 2*pi*m_r;
	}
	
};


int main()
{
	Circle c1;
	c1.r=10;
	cout<<"c1的周长是"<<c1.calculateCir()<<endl;

	system("pause");
	return 0;
}