#include<iostream>
using namespace std;

#include<fstream>

void test()
{
	//1.添加头文件件-fstream

	//2.创建文件流对象
	ofstream ofs;

	//3.指定路径打开文件
	ofs.open("H:\\test2.txt", ios::out);

	//4.写数据
	ofs << "添加头文件件-fstream" << endl;
	ofs << "创建文件流对象-ofstream ofs" << endl;
	ofs << "指定路径打开文件-ofs.open(文件写入.txt, ios::out)" << endl;
	ofs << "写数据 -ofs<<  " << endl;
	ofs << "关闭文件-ofs.close" << endl;

	//5.关闭文件
	ofs.close();

}

int main()
{
	test();
	system("pause");
	return 0;
}

