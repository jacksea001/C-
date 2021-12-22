#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


//增加职工
void WorkerManager::add_Emp()
{
	cout << "请输入增加职工的数量" << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//计算新空间的大小
		int newSize = this->m_EmpNum + addNum;

		//开辟新空间
		Worker * *newSpace = new Worker*[newSize];

		//将原空间的内容放到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//输入新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工编号" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
			cin >> name;

			cout << "请选择职工的岗位" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;

			cin >> dSelect;

			Worker * worker = NULL;
			switch (dSelect)
			{
			case 1: //普通职工
				worker = new Employee(id, name, 1);
				break;
			case 2://经理
				worker = new Employee(id, name, 2);
				break;
			case 3://老板
				worker = new Employee(id, name, 2);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;	//将创建的职工职责，保存到数组中
		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的个数
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileEmpty = false;

		cout << "成功添加" << addNum << "名新职工" << endl;

		//保存数据到文件中
		this->saveFile();


	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}