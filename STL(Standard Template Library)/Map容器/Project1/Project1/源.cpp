#include<iostream>
using namespace std;

#include<string>
#include<map>

void MyPrint(map<double, string>& m)
{
	for (map<double, string>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "身份证号：" << (*it).first << "\t"
			<< "姓名： " << it->second << endl;
	}
}

void test1()
{
	//map是关联式容器，map中所有的元素为pair
	//pair第一个值为键值（key)起到索引的作用，第二个为value(实际值);
	//map中所有的pair会按key自动排好序
	//map不允许有重复的key,multimap可以
	map<double, string>m;	//默认构造
	m.insert(pair<double, string>(360121199708145214, "徐海"));
	m.insert(pair<double, string>(8245214, "董飞"));
	m.insert(pair<double, string>(8345214, "大都市"));
	MyPrint(m);

	map<double, string>m2(m);	//拷贝构造
	MyPrint(m2);

	map<double, string>m3;	//重载operator=
	m3 = m;
	MyPrint(m3);


}

int main()
{
	test1();

	system("pause");
	return 0;
}