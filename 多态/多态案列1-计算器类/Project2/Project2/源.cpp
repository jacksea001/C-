#include<iostream>
using namespace std;
#include<string>


//��ͨʵ��
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
	//�����Ҫ��չ�µĹ�����Ҫ�޸�Դ��
	//�����������У��ᳫ����ԭ��OCP��--���ģʽ�е�Open Closed Priciple
	//���޸�Դ������йرգ�����չ���п���

	}
	int m_num1;
	int m_num2;

};

void test()
{

	cout << "��ͨʵ��" << endl;
	Calculator c1(10, 20);
	cout << c1.m_num1 << "+" << c1.m_num2 << "=" << c1.GetCalculator("+") << endl;

	Calculator c2(20, 20);
	cout << c2.m_num1 << "-" << c2.m_num2 << "=" << c2.GetCalculator("-") << endl;
}

//�ö�̬ʵ��   �̳й�ϵ+
class AbstractCalculator  //�����಻��ʵ�л�
{
public:
	virtual int Getresult() { return 0; }

	int m_num1;
	int m_num2;

};

//�ӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	
	virtual int Getresult( )
	{
		return m_num1 + m_num2;

	}
};

//������������
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

//��̬��ʹ������-�����ָ���������ָ���������
	AbstractCalculator * abc = new AddCalculator;//�����ָ��ָ���������
	
	//�ӷ�����
	abc->m_num1 = 70;
	abc->m_num2 = 20;
	cout << abc->m_num1 << "+" << abc->m_num2 <<"="<<abc->Getresult()<< endl;
	delete abc;//�ǵ��ͷ�ָ��
	

	//��������
	abc = new AddCalculator;
	abc->m_num1 = 70;
	abc->m_num2 = 20;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->Getresult() << endl;

	system("pause");
	return 0;
}