#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:
	virtual void speak() //�麯��
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	//��������д����������ֵ������  ������ �����б���ȫ��ͬ
	virtual void speak()
	{
		cout << "è��˵��" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��̬��̬����ַ��󶨣��ڱ���׶�ȷ��������ַ
//�������è˵���Ļ���Ӧ���õ�ַ��󶨣���ͨ���麯��ʵ�ֶ�̬��̬��

//��̬��̬������������
//1.�м̳й�ϵ��
//2.������д������麯��

//��̬��̬��ʹ�ã�
//�����ָ�������ָ���������
void dospeak(Animal& animal) //Animal& animal = Cat  ���������ָ���������
{
	animal.speak();
}

int main()
{
	Cat cat;
	Dog dog;

	dospeak(cat);//��һ�������Ϳ���ʵ�ֶ������ĺ��������ƽӿ�
	dospeak(dog);

	system("pause");
	return 0;
}