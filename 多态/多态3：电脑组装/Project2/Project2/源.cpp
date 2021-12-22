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
		cout << "InterCPU��ʼ������" << endl;
	}
};

class InterGraphicalCard:public GraphicalCard
{
public:
	virtual void Dispaly()
	{
		cout << "InterCPU��ʼ��ʾ��" << endl;
	}
};

class InterMemory:public Memory
{
public:
	virtual void Storage()
	{
		cout << "InterCPU��ʼ������" << endl;
	}
};


class LenovoCpu :public Cpu
{
public:
	virtual void Calculate()
	{
		cout << "LenovoCPU��ʼ������" << endl;
	}
};

class LenovoGraphicalCard :public GraphicalCard
{
public:
	virtual void Dispaly()
	{
		cout << "LenovoCPU��ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void Storage()
	{
		cout << "LenovoCPU��ʼ������" << endl;
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
	cout << "����һ̨InterComputer" << endl;
	AssemblingComputer(new InterCpu, new InterGraphicalCard, new InterMemory);
	
	cout << "---------" << endl;
	cout << "����һ̨LenovoComputer" << endl;
	AssemblingComputer(new LenovoCpu, new LenovoGraphicalCard, new LenovoMemory);
	
	cout << "---------" << endl;
	cout << "����һ̨MixComputer" << endl;
	AssemblingComputer(new InterCpu, new LenovoGraphicalCard, new LenovoMemory);
	
	system("pause");
	return 0;
}