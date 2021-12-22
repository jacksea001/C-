//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class MyString
//{
//private:
//	char * buffer;
//public:
//	MyString(const char * String)
//	{
//		if(String !=NULL)
//		{ 
//			buffer=new char[strlen(String)+1];//字符串要记录结束符的位置要加一
//			strcpy(buffer,String);
//		}
//		else
//		{
//			String=NULL;
//		}
//	}
//	~MyString()
//	{
//		cout<<"clean up"<<endl;
//		if(buffer!=NULL)
//		{
//			delete[] buffer;
//		}
//	}
//	int GetLength()
//	{
//		return strlen(buffer);
//	}
//	const char * GetString()
//	{
//		return buffer;
//	}
//};
//	int main()
//	{
//		MyString sayHello("Hello,jack sea");
//		cout<<"String buffer in sayHello  "<<sayHello.GetLength()
//			<<" characters long"<<endl;
//		cout<<"buffer contains :"<<sayHello.GetString()<<endl;
//		system("pause");
//		return 0;
//
//	}
//
