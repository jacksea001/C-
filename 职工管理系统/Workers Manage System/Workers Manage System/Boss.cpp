#include"Boss.h"
#include<string>

Boss::Boss(int id, string name, int dId)
{
	m_Id = id;
	m_Name = name;
	m_DeptID = dId;
}
//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ�" << m_Id 
		 << "\tְ��������" << m_Name 
		<< "\t��λ��" << this->getDeptName() 
		<< "\t��λְ�𣺹���˾������" << endl;

}

//��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ܲ�");
}
