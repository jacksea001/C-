#include"Manager.h"
#include<string>

Manager::Manager(int id, string name, int dId)
{
	m_Id = id;
	m_Name = name;
	m_DeptID = dId;
}
//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ�" << m_Id		
		<< "\tְ��������" << m_Name 
		<< "\t��λ��" << this->getDeptName() 
		<< "\t��λְ������ϰ彻�������񣬲��·���Ա��" << endl;

}

//��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}
