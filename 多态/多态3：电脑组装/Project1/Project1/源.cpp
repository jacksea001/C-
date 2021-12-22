#include<iostream>
using namespace std;
#include<string>

class Computer
{
public:
	//Cpu
	virtual void Cpu() = 0;

	//ÏÔ¿¨
	virtual void GraphicalCard() = 0;

	//ÄÚ´æ
	virtual void Memory() = 0;

	void Assemble()
	{
		Cpu();
		GraphicalCard();
		Memory();
	}

};

class InterComputer:public Computer
{
public:
	//Cpu
	virtual void Cpu()
	{
		cout << "InterCpu" << endl;
	}

	//ÏÔ¿¨
	virtual void GraphicalCard()
	{
		cout << "InterGraphical Card" << endl;
	}

	//ÄÚ´æ
	virtual void Memory()
	{
		cout << "Inter Memory" << endl;
	}
};

class LenovoComputer :public Computer
{
public:
	//Cpu
	virtual void Cpu()
	{
		cout << "LenovoCpu" << endl;
	}

	//ÏÔ¿¨
	virtual void GraphicalCard()
	{
		cout << "LenovoGraphical Card" << endl;
	}

	//ÄÚ´æ
	virtual void Memory()
	{
		cout << "LenovoMemory" << endl;
	}
};

void AssemblingComputer(Computer * computer)
{
	computer->Assemble();
	delete computer;
}

int main()
{
	cout << "This is a InterComputer" << endl;
	AssemblingComputer(new InterComputer);

	cout << "This is a LenovoComputer" << endl;
	AssemblingComputer(new LenovoComputer);


	system("pause");
	return 0;
}