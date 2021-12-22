#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

//清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >>select;

	if (select == 1)
	{
		//打开模式 ios::trunc 如果存在删除文件并重新创建

		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
	
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
					this->m_EmpArray[i] = NULL;
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileEmpty = true;
		}
			
		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");

}