#include<iostream>
using namespace std;
#include<string>

class AbstractDrinking	//���麯���������
{
public:
	//1.��ˮ
	virtual	void Boiling() = 0;
	//2.����
	virtual void Brewing() = 0;
	//3.���뱭��
	virtual void PourIntoCup() = 0;
	//4.���븨��
	virtual void PutSomething() = 0;

	void MakeDrinking()
	{
		Boiling();
		Brewing();
		PourIntoCup();
		PutSomething();
	}
};

//���ݿ���
class Coffee:public AbstractDrinking  //�̳к���д���麯��
{
public:
	//1.��ˮ
	virtual void Boiling() 
	{
		cout << "��ũ��ɽȪ" << endl;
	}				
	//2.���ݿ���
	virtual void Brewing()
	 {
		 cout << "���ݿ���" << endl;
	 }
	//3.���뱭��
	virtual void PourIntoCup()
	 {
		 cout << "���벣������" << endl;
	 }
	//4.���븨��
	virtual void PutSomething()
	 {
		 cout << "�����Ǻ�ţ��" << endl;
	 }
};

//���ݲ�Ҷ
class Tea :public AbstractDrinking  //�̳к���д���麯��
{
public:
	//1.��ˮ
	virtual void Boiling()
	{
		cout << "��ˮ" << endl;
	}
	//2.���ݿ���
	virtual void Brewing()
	{
		cout << "����������" << endl;
	}
	//3.���뱭��
	virtual void PourIntoCup()
	{
		cout << "���뱣�±���" << endl;
	}
	//4.���븨��
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}
};

void  DoDrinking(AbstractDrinking * abs)  //AbstractDrinking * abs =new Coffee  �����ָ��ָ���������
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