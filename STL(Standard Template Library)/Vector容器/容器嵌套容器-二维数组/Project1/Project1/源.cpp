#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>

void test1()
{
	vector<vector<int>>v;//����Ƕ������-��ά����

	//��дС����
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	
	//��С������ֵ
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		
	}

	//��С����Ԫ�ز嵽��������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);



	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit)<<"  ";
		}
		cout << endl;
	}

	cout << v.size();
	cout << v[0].size();
}

int main()
{
	test1();


	system("pause");
	return 0;
}