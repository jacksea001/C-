#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

//��ʾְ��
void WorkerManager::Show_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}

	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}

	system("pause");
	system("cls");
}