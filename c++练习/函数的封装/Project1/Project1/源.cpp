#include<iostream>
using namespace std;


const double pi=3.14;

class Circle
	{
public:
	//����
	int m_r;

	Circle(int r)
	{
		m_r=r;
		cout<<"c1���ܳ���"<<2*pi*m_r<<endl;
	}


	//��Ϊ
	double calculateCir()
	{
		return 2*pi*m_r;
	}
	
};




int main()
{
	Circle c1(2);
	

	system("pause");
	return 0;
}