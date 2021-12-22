#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"
WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.�ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;	//�������
		this->m_EmpNum = 0;  //��ʼ������
		this->m_FileEmpty = true;	//��ʼ���ļ�Ϊ��
		this->m_EmpArray = NULL;	//��ʼ������ָ��
		ifs.close();
		return;
	}


	//2.�ļ�����,������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) //�ж��ļ���ĩβ�Ƿ�Ϊ��
	{
		cout << "�ļ�Ϊ�գ�" << endl;	//�������
		this->m_EmpNum = 0;  //��ʼ������
		this->m_FileEmpty = true;	//��ʼ���ļ�Ϊ��
		this->m_EmpArray = NULL;	//��ʼ������ָ��
		ifs.close();
		return;
	}
	
	//3.�ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num<<endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker *[this->m_EmpNum];
	//���ļ������ݴ浽������
	this->init_Emp();

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		/*cout << "ְ����ţ�" << this->m_EmpArray[i]->m_Id<<"  "
			<< "������" << this->m_EmpArray[i]->m_Name << "  "
			<< "��ţ�" << this->m_EmpArray[i]->m_DeptID << endl;*/
	}

}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "******************************" << endl;
	cout << "****** ��ӭʹ��ְ������ϵͳ�� ****" << endl;
	cout << "****** 0.�˳�������� ****" << endl;
	cout << "****** 1.����ְ����Ϣ ****" << endl;
	cout << "****** 2.��ʾְ����Ϣ ****" << endl;
	cout << "****** 3.ɾ����ְְ�� ****" << endl;
	cout << "****** 4.�޸�ְ����Ϣ ****" << endl;
	cout << "****** 5.����ְ����Ϣ ****" << endl;
	cout << "****** 6.���ձ������ ****" << endl;
	cout << "****** 7.��������ĵ� ****" << endl;
	cout << "******************************" << endl;
	cout << endl;
}
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);  //�˳�����

}


int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num=0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		//��¼����
		num++;
	}

	ifs.close();
	return num;
}


void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int Index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker * worker = NULL;

		//���߲�ͬ���ŵ�Id������ͬ�Ķ���

		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			worker = new Boss(id, name, dId);
		}

		this->m_EmpArray[Index] = worker;
		Index++;
	}
}
