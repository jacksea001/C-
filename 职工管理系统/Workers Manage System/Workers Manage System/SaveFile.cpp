#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

//�����ļ�
void WorkerManager::saveFile()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	
	for (int i = 0; i < this->m_EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptID << "  " << endl;

	}

	ofs.close();
}