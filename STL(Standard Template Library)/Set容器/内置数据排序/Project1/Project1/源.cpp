#include<iostream>
using namespace std;

#include<set>
//set/multiset关联式容器，底层采用二叉树实现
//set的特点，所有的元素被插入的时候会自动的排序（升序）
//set不允许插入相同的元素，而multiset可以

//void MyPrint(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << (*it)<<"  ";
//	}
//	cout << endl;
//}

class Compare   //仿函数就是在类中重写运算符（）
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