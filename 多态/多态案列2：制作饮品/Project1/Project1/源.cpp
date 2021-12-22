#include<iostream>
using namespace std;
#include<string>

class AbstractDrinking	//纯虚函数与抽象类
{
public:
	//1.煮水
	virtual	void Boiling() = 0;
	//2.冲泡
	virtual void Brewing() = 0;
	//3.倒入杯中
	virtual void PourIntoCup() = 0;
	//4.加入辅料
	virtual void PutSomething() = 0;

	void MakeDrinking()
	{
		Boiling();
		Brewing();
		PourIntoCup();
		PutSomething();
	}
};

//冲泡咖啡
class Coffee:public AbstractDrinking  //继承和重写纯虚函数
{
public:
	//1.煮水
	virtual void Boiling() 
	{
		cout << "煮农夫山泉" << endl;
	}				
	//2.冲泡咖啡
	virtual void Brewing()
	 {
		 cout << "冲泡咖啡" << endl;
	 }
	//3.倒入杯中
	virtual void PourIntoCup()
	 {
		 cout << "倒入玻璃杯中" << endl;
	 }
	//4.加入辅料
	virtual void PutSomething()
	 {
		 cout << "加入糖和牛奶" << endl;
	 }
};

//冲泡茶叶
class Tea :public AbstractDrinking  //继承和重写纯虚函数
{
public:
	//1.煮水
	virtual void Boiling()
	{
		cout << "煮水" << endl;
	}
	//2.冲泡咖啡
	virtual void Brewing()
	{
		cout << "冲泡铁观音" << endl;
	}
	//3.倒入杯中
	virtual void PourIntoCup()
	{
		cout << "倒入保温杯中" << endl;
	}
	//4.加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}
};

void  DoDrinking(AbstractDrinking * abs)  //AbstractDrinking * abs =new Coffee  父类的指针指向子类对象
{
	abs->MakeDrinking();
	delete abs;
}

int main()
{
	DoDrinking(new Coffee);

	cout << "-----------" << endl;
	DoDrinking(new Tea);

	system("pause");
	return 0;


}