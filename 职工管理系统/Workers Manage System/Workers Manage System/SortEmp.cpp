#include"WorkerManager.h"
#include"Employee.h"
#include"Worker.h"
#include"Manager.h"
#include"Boss.h"


void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pasue");
		system("cls");
	}
	else
	{
		cout << "请选择职工排序方式" << endl;
		cout << "1.按职工号进行升序" << endl;
		cout << "2.按职工号进行降序" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;		//声明最大值或最小值下标
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if(select==1)  //升序
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else  //降序
				{
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}

			if (i != minOrMax)	//判断开始认定的minOrMax的最小值和最大值是不是真实的最大或最小，如果不是交换
			{
				Worker * temp = m_EmpArray[i];
				m_EmpArray[i]= m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;

			}
		}

		cout << "排序成功，排序结果为：" << endl;
		this->saveFile();
		this->Show_Emp();
	}
}