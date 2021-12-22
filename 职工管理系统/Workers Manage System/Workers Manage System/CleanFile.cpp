#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ�����" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >>select;

	if (select == 1)
	{
		//��ģʽ ios::trunc �������ɾ���ļ������´���

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
			
		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");

}