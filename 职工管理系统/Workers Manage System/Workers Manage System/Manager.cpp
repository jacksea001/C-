#include"Manager.h"
#include<string>

Manager::Manager(int id, string name, int dId)
{
	m_Id = id;
	m_Name = name;
	m_DeptID = dId;
}
//显示个人信息
void Manager::showInfo()
{
	cout << "职工编号：" << m_Id		
		<< "\t职工姓名：" << m_Name 
		<< "\t岗位：" << this->getDeptName() 
		<< "\t岗位职责：完成老板交给的任务，并下发给员工" << endl;

}

//获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}
