#include<iostream>
using namespace std;

#include<string>
#include<map>

void MyPrint(map<double, string>& m)
{
	for (map<double, string>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "���֤�ţ�" << (*it).first << "\t"
			<< "������ " << it->second << endl;
	}
}

void test1()
{
	//map�ǹ���ʽ������map�����е�Ԫ��Ϊpair
	//pair��һ��ֵΪ��ֵ��key)�����������ã��ڶ���Ϊvalue(ʵ��ֵ);
	//map�����е�pair�ᰴkey�Զ��ź���
	//map���������ظ���key,multimap����
	map<double, string>m;	//Ĭ�Ϲ���
	m.insert(pair<double, string>(360121199708145214, "�캣"));
	m.insert(pair<double, string>(8245214, "����"));
	m.insert(pair<double, string>(8345214, "����"));
	MyPrint(m);

	map<double, string>m2(m);	//��������
	MyPrint(m2);

	map<double, string>m3;	//����operator=
	m3 = m;
	MyPrint(m3);


}

int main()
{
	test1();

	system("pause");
	return 0;
}