#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;	//测试输出
		this->m_EmpNum = 0;  //初始化人数
		this->m_FileEmpty = true;	//初始化文件为空
		this->m_EmpArray = NULL;	//初始化数组指针
		ifs.close();
		return;
	}


	//2.文件存在,且数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) //判断文件的末尾是否为空
	{
		cout << "文件为空！" << endl;	//测试输出
		this->m_EmpNum = 0;  //初始化人数
		this->m_FileEmpty = true;	//初始化文件为空
		this->m_EmpArray = NULL;	//初始化数组指针
		ifs.close();
		return;
	}
	
	//3.文件存在，并且记录数据
	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num<<endl;
	this->m_EmpNum = num;

	//开辟空间
	this->m_EmpArray = new Worker *[this->m_EmpNum];
	//将文件的数据存到数组中
	this->init_Emp();

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		/*cout << "职工编号：" << this->m_EmpArray[i]->m_Id<<"  "
			<< "姓名：" << this->m_EmpArray[i]->m_Name << "  "
			<< "编号：" << this->m_EmpArray[i]->m_DeptID << endl;*/
	}

}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//展示菜单
void WorkerManager::Show_Menu()
{
	cout << "******************************" << endl;
	cout << "****** 欢迎使用职工管理系统！ ****" << endl;
	cout << "****** 0.退出管理程序 ****" << endl;
	cout << "****** 1.增加职工信息 ****" << endl;
	cout << "****** 2.显示职工信息 ****" << endl;
	cout << "****** 3.删除离职职工 ****" << endl;
	cout << "****** 4.修改职工信息 ****" << endl;
	cout << "****** 5.查找职工信息 ****" << endl;
	cout << "****** 6.按照编号排序 ****" << endl;
	cout << "****** 7.清空所有文档 ****" << endl;
	cout << "******************************" << endl;
	cout << endl;
}
void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);  //退出程序

}


int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num=0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//记录人数
		num++;
	}

	ifs.close();
	return num;
}


void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int Index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;

		//更具不同部门的Id创建不同的对象

		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}

		this->m_EmpArray[Index] = worker;
		Index++;
	}
}
