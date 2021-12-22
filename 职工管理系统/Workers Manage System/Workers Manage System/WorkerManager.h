#pragma once  //防止头文件重复包含
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

#include<fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:
	WorkerManager() ;

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//增加职工
	void add_Emp();

	//保存文件
	void saveFile();
	
	~WorkerManager() ;



	//记录文件中的人数个数
	int m_EmpNum ;

	//统计人数
	int get_EmpNum();

	//按照职工编号判断职工是否存在，若存在返回职工在数组的位置，不存在返回-1；
	int IsExist(int id);
	

	//初始化员工
	void init_Emp();

	//显示员工
	void Show_Emp();

	//删除员工
	void Del_Emp();

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//员工数组的指针
	Worker * *m_EmpArray;

	//标志文件是否为空
	bool m_FileEmpty;
};



