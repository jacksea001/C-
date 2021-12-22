#include<iostream>
using namespace std;
#include<string>


//普通实现
class Calculator
{
public:
	Calculator(int num1, int num2)
	{
		m_num1 = num1;
		m_num2 = num2;

	}
	int GetCalculator(string opr)
	{
		if (opr == "+")
		{
			return m_num1 + m_num2;
		}

		else if (opr == "-")
		{
			return m_num1 - m_num2;
		}

		else if (opr == "*")
		{
			return m_num1 * m_num2;
		}
	//如果需要扩展新的功能需要修改源码
	//在真正开发中，提倡开闭原则（OCP）--设计模式中的Open Closed Priciple
	//对修改源代码进行关闭，对扩展进行开放

	}
	int m_num1;
	int m_num2;

};

void test()
{

	cout << "普通实现" << endl;
	Calculator c1(10, 20);
	cout << c1.m_num1 << "+" << c1.m_num2 << "=" << c1.GetCalculator("+") << endl;

	Calculator c2(20, 20);
	cout << c2.m_num1 << "-" << c2.m_num2 << "=" << c2.GetCalculator("-") << endl;
}

//用多态实现   继承关系+
class AbstractCalculator  //抽象类不能实列化
{
public:
	virtual int Getresult() { return 0; }

	int m_num1;
	int m_num2;

};

//加法计算器类
class AddCalculator :public AbstractCalculator
{
public:
	
	virtual int Getresult( )
	{
		return m_num1 + m_num2;

	}
};

//减法计算器类
class SubtractionCalculator :public AbstractCalculator
{
public:
	
	virtual int Getresult()
	{
		return m_num1 + m_num2;

	}
};

int main()
{
	test();

//多态的使用条件-父类的指针或者引用指向子类对象
	AbstractCalculator * abc = new AddCalculator;//父类的指针指向子类对象
	
	//加法运算
	abc->m_num1 = 70;
	abc->m_num2 = 20;
	cout << abc->m_num1 << "+" << abc->m_num2 <<"="<<abc->Getresult()<< endl;
	delete abc;//记得释放指针
	

	//减法运算
	abc = new AddCalculator;
	abc->m_num1 = 70;
	abc->m_num2 = 20;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->Getresult() << endl;

	system("pause");
	return 0;
}