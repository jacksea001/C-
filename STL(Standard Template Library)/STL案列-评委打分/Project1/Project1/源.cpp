#include<iostream>
using namespace std;

#include<string>
#include<vector>
#include<deque>
#include<algorithm>

class Person
{
public:
	Person(string name, int score)
	{
		m_Name = name;
		m_Score = score;
	}
	string m_Name;
	int m_Score;
};

void CreatPerson(vector<Person> & v1)
{
	string  nameseed = "ABCDE";
	
	int Score = 0;
	for (int i = 0; i < 5; i++)
	{
		string Name = "";
		Name += nameseed[i];
		
		Person p(Name,Score);

		v1.push_back(p);

	}
}

		

void MyPrint(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout <<"������"<< (*it).m_Name << " " <<"ƽ��������"<< (*it).m_Score<<endl;
	}
	cout << endl;
}

void SetScore(vector<Person>& v1)
{
	for (int i = 0; i < 1; i++)
	{
		//ʮ����ί��ÿ��ͬѧ���
		cout << "��ί��ʼ���" << endl;
		cout << endl;
		cout << "����" << i+1 << "ѧ�����" << endl;
		cout << endl;

		deque<int>d;
		cout << "��1����ί���" << endl;
		int num1 = 0; cin >> num1; d.push_back(num1);
		cout << "��2����ί���" << endl;
		int num2 = 0; cin >> num2; d.push_back(num2);
		cout << "��3����ί���" << endl;
		int num3 = 0; cin >> num3; d.push_back(num3);
		cout << "��4����ί���" << endl;
		int num4 = 0; cin >> num4; d.push_back(num4);
		cout << "��5����ί���" << endl;
		int num5 = 0; cin >> num5; d.push_back(num5);
		cout << "��6����ί���" << endl;
		int num6 = 0; cin >> num6; d.push_back(num6);
		cout << "��7����ί���" << endl;
		int num7 = 0; cin >> num7; d.push_back(num7);
		cout << "��8����ί���" << endl;
		int num8 = 0; cin >> num8; d.push_back(num8);
		cout << "��9����ί���" << endl;
		int num9 = 0; cin >> num9; d.push_back(num9);
		cout << "��10����ί���" << endl;
		int num10 = 0; cin >> num10; d.push_back(num10);

		cout << "ʮ����ί��֣�";
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{

			cout << *it <<"   ";

		}
		cout << endl;

		sort(d.begin(), d.end());	//Ĭ����������
		d.pop_back(); d.pop_front();	//ɾ����ֵ

		int sum = 0; int score = 0;
		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{

			sum = sum + (*it);

		}
		v1[i].m_Score = sum / d.size();
	}
}

void test1()
{
	//1.��������ѡ��
	/*Person p1("A",0); Person p2("B", 0); Person p3("C", 0); Person p4("D", 0); Person p5("E", 0);

	
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4); 
	v1.push_back(p5);*/


	vector<Person>v1;
	CreatPerson(v1);
	MyPrint(v1);


	SetScore(v1);
	MyPrint(v1);
	
	
}

int main()
{
	test1();
	system("pause");
	return 0;
}

