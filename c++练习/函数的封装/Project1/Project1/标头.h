#include<iostream>
using namespace std;

const double pi=3.14;

class Circle
	{
public:
	//����
	int m_r;

	//��Ϊ
	double calculateCir()
	{
		return 2*pi*m_r;
	}
	
};


int main()
{
	Circle c1;
	c1.r=10;
	cout<<"c1���ܳ���"<<c1.calculateCir()<<endl;

	system("pause");
	return 0;
}