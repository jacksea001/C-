#include<iostream>
using namespace std;
#include<string>


class Fish
{
private:
	bool isFreshWaterFish;
public:
	Fish(bool isFreshWater):isFreshWaterFish(isFreshWater){}
	void swim()
 {
	if(isFreshWaterFish)
	{
		cout<<"swims is lake"<<endl;
	}
	else
		cout<<"swims is sea"<<endl;
 }

};

class Tuna:public Fish
{
public:
	Tuna():Fish(false){}
	void swim()
	{
	cout<<"Tuan swims real fast"<<endl;
	Fish::swim();
	}
};

class Crap:public Fish
{
public:
	Crap():Fish(true){}
	void swim()
	{
		cout<<"Crap swims real slow"<<endl;
		
	}
};

int main()
{
	Tuna myLunch;
	Crap myDinner;
	cout<<"About My Food"<<endl;
	cout<<"myLunch:";
		myLunch.swim();
	cout<<"myDinner:";
	    myDinner.Fish::swim();

		system("pause");
		return 0;
}



