//自己通用的数组类
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
		cout << "有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

//拷贝构造
	MyArr(const MyArr & arr)
	{
		cout << "拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress; 默认的浅拷贝，会使同一块内存重复释放

		this->pAddress = new T[arr.m_Capacity];//深拷贝
		//将arr中的数据都拷贝过来
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
	}

//operator= 防止浅拷贝问题   a=b=c链式编程思想
	MyArr& operator=(const MyArr& arr)
	{
		cout << "重载Operator =" << endl;
		//先判断原来堆区是否有数据，如果有释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];

		}
		return * this;
	}

//尾插法
	void Push_Back(const T & val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;
		m_Size++;

	}

//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

//通过下标的方式访问数组中的元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}
//析构函数
	~MyArr()
	{
		cout << "析构函数" << endl;
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

