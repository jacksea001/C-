#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


//����ְ��
void WorkerManager::add_Emp()
{
	cout << "����������ְ��������" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//�����¿ռ�Ĵ�С
		int newSize = this->m_EmpNum + addNum;

		//�����¿ռ�
		Worker * *newSpace = new Worker*[newSize];

		//��ԭ�ռ�����ݷŵ��¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//����������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "�������" << i + 1 << "����ְ�����" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ������" << endl;
			cin >> name;

			cout << "��ѡ��ְ���ĸ�λ" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;

			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1: //��ְͨ��
				worker = new Employee(id, name, 1);
				break;
			case 2://����
				worker = new Employee(id, name, 2);
				break;
			case 3://�ϰ�
				worker = new Employee(id, name, 2);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;	//��������ְ��ְ�𣬱��浽������
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µĸ���
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileEmpty = false;

		cout << "�ɹ����" << addNum << "����ְ��" << endl;

		//�������ݵ��ļ���
		this->saveFile();


	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}