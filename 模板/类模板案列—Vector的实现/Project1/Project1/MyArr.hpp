//�Լ�ͨ�õ�������
#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArr
{
public:
	MyArr(int capacity)
	{
		cout << "�вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

//��������
	MyArr(const MyArr & arr)
	{
		cout << "��������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress; Ĭ�ϵ�ǳ��������ʹͬһ���ڴ��ظ��ͷ�

		this->pAddress = new T[arr.m_Capacity];//���
		//��arr�е����ݶ���������
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
	}

//operator= ��ֹǳ��������   a=b=c��ʽ���˼��
	MyArr& operator=(const MyArr& arr)
	{
		cout << "����Operator =" << endl;
		//���ж�ԭ�������Ƿ������ݣ�������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
		return * this;
	}

//β�巨
	void Push_Back(const T & val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		m_Size++;

	}

//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

//ͨ���±�ķ�ʽ���������е�Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

//���������С
	int getSize()
	{
		return this->m_Size;
	}

//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}
//��������
	~MyArr()
	{
		cout << "��������" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}


private:
	T * pAddress;
	int m_Capacity;
	int m_Size;
};

