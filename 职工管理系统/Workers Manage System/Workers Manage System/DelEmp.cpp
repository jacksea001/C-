#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "������Ҫɾ����ְ����ţ�" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1) //˵��ְ�����ڣ�����Ҫɾ��indexλ���ϵ�ְ��
		{
			
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];  //����ǰ��
			}

			this->m_EmpNum--;  //���������¼��������

			this->saveFile();	//���ݸ���ͬ�����ļ���
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}



//ְ���Ƿ���ں���
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id ==id)
		{
			index = i;
			break;
		}
	}
	return index;
}