#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:

	Animal()
	{
		cout << "Animal �Ĺ��캯��" << endl;
	}
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}


	//��̬ʹ��ʱ����������������Կ��ٵ���������ô�����ָ�����ͷ�ʱ�޷����õ��������������
	//�����ʽ�������������������Ϊ���������ߴ�������
	
	virtual ~ Animal()
	{
		cout << "Animal ����������" << endl;
	}

	string * m_Name;
};

class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name = new string(name);
		cout << "Cat �Ĺ��캯��" << endl;
	}

	virtual void speak()
	{
		cout << "m_Name" << "Сè��˵��" << endl;
	}

	 ~Cat()
	{
		cout << "Cat ����������" << endl;
	}

};

int main()
{
	
	Animal * animal = new Cat("Tom");
	delete animal;//��̬ʹ��ʱ����������������Կ��ٵ���������ô�����ָ�����ͷ�ʱ�޷����õ��������������


	system("pause");
	return 0;

}