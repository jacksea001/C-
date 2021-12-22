#include<iostream>
using namespace std;
#include<string>

class Car
{
public:
	virtual int Getmoney()
	{
		return 0;
	}
};

class BaoMa :public Car
{
public:
	virtual int Getmoney()
	{
		return 800000;
	}
};

class Auodi :public Car
{
public:
	virtual int Getmoney()
	{
		return 400000;
	}
};

class Customer
{
public:
	int BuyCar(Car& car)//Car& car=BaoMa 父类中的引用指向子类对象
	{
		return car.Getmoney();

	}

};

int main()
{
	Customer sea;
	BaoMa BMW7;
	sea.BuyCar(BMW7);
	cout << " sea Buy BWM is " << sea.BuyCar(BMW7) << endl;
	system("pause");
	return 0;
}

