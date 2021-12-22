#include<iostream>
using namespace std;
#include<fstream>
#include<string>


void  test()
{
	ifstream ifs;
	ifs.open("G:/c++/文件操作/文本文件-读文件/Project1/test2.txt", ios::in);

	//判断是否成功打开
	while(!ifs.is_open())
	{
		cout << "打开文件失败" << endl;
		return ;
	}

	//读取文件文本内容
	

	//第一种读取
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//第二种读取，空格会被识别为换行
	char buf[1024] = { 0 };
	while (ifs>>buf) //ifs 把文本文件一行一行读到buf中，当读到最后一行返回为假的标志
	{
		cout << buf << endl;
	}

	ifs.close();
}

int main()
{

	test();

	system("pause");
	return 0;
}