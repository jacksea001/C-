#include<iostream>
using namespace std;

#include<set>
//set/multiset����ʽ�������ײ���ö�����ʵ��
//set���ص㣬���е�Ԫ�ر������ʱ����Զ�����������
//set�����������ͬ��Ԫ�أ���multiset����

//void MyPrint(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it)<<"  ";
//	}
//	cout << endl;
//}

class Compare   //�º���������������д���������
{
public:
	bool operator()(int  v1, int v2)
	{
		return v1 > v2;
	}

};
void test1()
{
	set<int>s1;
	
	s1.insert(20);
	s1.insert(40);
	s1.insert(50);
	s1.insert(30);
	for (set<int, Compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;


	set<int, Compare>s2;
	s2.insert(20);
	s2.insert(40);
	s2.insert(50);
	s2.insert(30);
	for (set<int, Compare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;

}

int main()
{
	test1();

	system("pause");
	return 0;
}