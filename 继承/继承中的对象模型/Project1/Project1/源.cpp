#include<iostream>
using namespace std;
#include<string>

class Base
{
public:
	int a;
protected:
	int b;
private:  //˽�г�Աֻ�Ǳ������ˣ������ǻ�̳У�����������̳��˸����ȫ������û��ȫ�����
	int c;
};

class Son :public Base
{
	int d;
};

int main()
{
	
	cout << "" << sizeof(Son) << endl;
	system("pause");
	return 0;
}
