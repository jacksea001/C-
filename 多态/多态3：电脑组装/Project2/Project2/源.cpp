#include<iostream>
using namespace std;
#include<string>



class Cpu
{
public:
	virtual void Calculate() = 0;
};

class GraphicalCard
{
public:
	virtual void Dispaly() = 0;
};

class Memory
{
public:
	virtual void Storage() = 0;
};


class InterCpu:public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "InterCPU开始计算了" << endl;
	}
};

class InterGraphicalCard:public GraphicalCard
{
public:
	virtual void Dispaly()
	{
		cout << "InterCPU开始显示了" << endl;
	}
};

class InterMemory:public Memory
{
public:
	virtual void Storage()
	{
		cout << "InterCPU开始储存了" << endl;
	}
};


class LenovoCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "LenovoCPU开始计算了" << endl;
	}
};

class LenovoGraphicalCard :public GraphicalCard
{
public:
	virtual void Dispaly()
	{
		cout << "LenovoCPU开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void Storage()
	{
		cout << "LenovoCPU开始储存了" << endl;
	}
};


void AssemblingComputer(Cpu * cpu, GraphicalCard * graphicalcard, Memory * memory)
{
	cpu->Calculate();
	graphicalcard->Dispaly();
	memory->Storage();
	delete cpu;
	delete graphicalcard;
	delete memory;
}



int main()
{
	cout << "这是一台InterComputer" << endl;
	AssemblingComputer(new InterCpu, new InterGraphicalCard, new InterMemory);
	
	cout << "---------" << endl;
	cout << "这是一台LenovoComputer" << endl;
	AssemblingComputer(new LenovoCpu, new LenovoGraphicalCard, new LenovoMemory);
	
	cout << "---------" << endl;
	cout << "这是一台MixComputer" << endl;
	AssemblingComputer(new InterCpu, new LenovoGraphicalCard, new LenovoMemory);
	
	system("pause");
	return 0;
}