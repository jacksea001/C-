#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>			//算法头文件

void myPrint(int val)
{
	cout << val << "  ";
}

void test1()
{
//创建vector容器对象，并通过模板参数指定容器中存放的数据类型
	vector<int>v1;

	//向容器尾部插入数据
	for (int i = 1; i < 6; i++)
	{
		v1.push_back(i * 10);
	}

	/*v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);*/


//每个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
//v.begin()返回迭代器，指向容器中的第一个元素
//v.end()结束迭代器，指向容器最后一个元素的下一个位置

	//第一种遍历方式
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it<<"  " ;	
	}
	cout << endl;



//第二种遍历，利用标准STL算法（algorithm）的for_each
	for_each(v1.begin(), v1.end(), myPrint);	//myPrint函数作为一个参数，回调函数
}



int main()
{
	test1();

	system("pause");
	return 0;
}