#include<iostream>
using namespace std;
#include<string>

class Animal
{
public:
	int m_Age;
};
//�̳�ǰ��virtual�ؼ����Ժ󣬱����̳�
//��ʱ�����ĸ����Ϊ�����
class Sheep:virtual public  Animal{};

class Tou : virtual public  Animal{};

//1.���μ̳е�����������̳����������ݣ�������Դ�˷Ѻ�������
//2.�����������Խ�����μ̳�����
class SheepTou :public Sheep, public Tou{};

int main()
{
	SheepTou st;
	st.Sheep::m_Age = 18;
	st.Tou::m_Age = 28;
	st.m_Age = 16;

	cout << st.Sheep::m_Age << endl;
	cout << st.Tou::m_Age << endl;
	cout << st.m_Age << endl;
	system("pause");
	return 0;
}