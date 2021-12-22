#include<iostream>
using namespace std;
#include<string>



class Cube
{
private:
	int m_L;
	int m_W;
	int m_H;

public:

	void setL(int L)
	{
		m_L=L;
	}
	void setH(int H)
	{
		m_H=H;
	}
	void setW(int W)
	{
		m_W=W;
	}

	int  getL()
	{
		return m_L;
	}
	int  getW()
	{
		return m_W;
	}
	int  getH()
	{
		return m_H;
	}



	int getArea()
	{
		
		return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;
	}
	int getV()
	{
		return m_L*m_H*m_W;
	}	

	//成员函数判断
	void IsSameByclass(Cube &c)
	{
		if(this->m_H==c.getH()&&this->m_W==c.getW()&&this->m_L==c.getL())
		{
			cout<<"相同"<<endl;
		}
		else
		{
			cout<<"不同"<<endl;
		}
	}
};


//全局函数判断相等

bool IsSame(Cube &c1 , Cube &c2)
{
	if(c1.getL() == c2.getL()&&c1.getH() == c2.getH()&&c1.getW()== c2.getW())
	{
		return true;
	}
	else
		false;

}


int main()
{
	Cube c1;
	c1.setH(1);
	c1.setW(2);
	c1.setL(3);
	cout<<"c1.S: "<<c1.getArea()<<endl;
	cout<<"c1.V: "<<c1.getV()<<endl;

	Cube c2;
	c2.setH(1);
	c2.setW(2);
	c2.setL(3);

	/*bool ret=IsSame(c1,c2);

	if(ret)
	{
		cout<<"两个相同"<<endl;
	}
	else
	{
		cout<<"不同"<<endl;
	}*/

	c1.IsSameByclass(c2);

	system("pause");
	return 0;

}