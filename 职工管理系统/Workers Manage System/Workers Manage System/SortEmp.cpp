#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pasue");
		system("cls");
	}
	else
	{
		cout << "��ѡ��ְ������ʽ" << endl;
		cout << "1.��ְ���Ž�������" << endl;
		cout << "2.��ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;		//�������ֵ����Сֵ�±�
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if(select==1)  //����
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else  //����
				{
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)	//�жϿ�ʼ�϶���minOrMax����Сֵ�����ֵ�ǲ�����ʵ��������С��������ǽ���
			{
				Worker * temp = m_EmpArray[i];
				m_EmpArray[i]= m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;

			}
		}

		cout << "����ɹ���������Ϊ��" << endl;
		this->saveFile();
		this->Show_Emp();
	}
}