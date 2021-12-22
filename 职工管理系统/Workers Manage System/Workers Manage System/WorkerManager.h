#pragma once  //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"

#include<fstream>
#define FILENAME "empFile.txt"


class WorkerManager
{
public:
	WorkerManager() ;

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExitSystem();

	//����ְ��
	void add_Emp();

	//�����ļ�
	void saveFile();
	
	~WorkerManager() ;



	//��¼�ļ��е���������
	int m_EmpNum ;

	//ͳ������
	int get_EmpNum();

	//����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ���������λ�ã������ڷ���-1��
	int IsExist(int id);
	

	//��ʼ��Ա��
	void init_Emp();

	//��ʾԱ��
	void Show_Emp();

	//ɾ��Ա��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//Ա�������ָ��
	Worker * *m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileEmpty;
};



