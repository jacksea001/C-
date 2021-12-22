#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


void WorkerManager::Find_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找方式" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)	//按职工查找
		{
			int id;
			cout << "请输入查找的职工编号" << endl;
			cin >> id;

			int  ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功！该职工信息如下" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		
		}
		else if (select == 2)	//按姓名查找
		{
			string name;
			cout << "请输入查找的姓名" << endl;
			cin >> name;

			bool flag=false;	//查找到的标志
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为："
						<< m_EmpArray[i]->m_Id
						<< "号信息如下" << endl;

					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}

				if (flag == false)
				{
				cout << "查找失败，查无此人" << endl;

				}
		}
		else
		{
			cout << "输入选项有误" << endl;
		}
	}

	system("pause");
	system("cls");
}