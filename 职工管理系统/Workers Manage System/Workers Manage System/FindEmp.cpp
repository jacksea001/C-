#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


void WorkerManager::Find_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҷ�ʽ" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.����������" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)	//��ְ������
		{
			int id;
			cout << "��������ҵ�ְ�����" << endl;
			cin >> id;

			int  ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ����" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		
		}
		else if (select == 2)	//����������
		{
			string name;
			cout << "��������ҵ�����" << endl;
			cin >> name;

			bool flag=false;	//���ҵ��ı�־
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< m_EmpArray[i]->m_Id
						<< "����Ϣ����" << endl;

					flag = true;

					this->m_EmpArray[i]->showInfo();
				}
			}

				if (flag == false)
				{
				cout << "����ʧ�ܣ����޴���" << endl;

				}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}

	system("pause");
	system("cls");
}