#pragma once
#include<iostream>
using namespace std;
#include"Worker.h"


class Employee :public Worker
{
public:
	Employee(int id, string name, int dId);
	
	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string  getDeptName();
};
