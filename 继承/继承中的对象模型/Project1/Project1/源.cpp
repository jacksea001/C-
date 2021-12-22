#include<iostream>
using namespace std;
#include<string>

class Base
{
public:
	int a;
protected:
	int b;
private:  //私有成员只是被隐藏了，但还是会继承！！类似子类继承了父类的全部基因但没有全部表达
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
