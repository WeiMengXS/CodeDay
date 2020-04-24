#include<iostream>
#include<string.h>
using namespace std;

class string
{
public:
	string(const char* str="")
		:_str(new char[strlen(str)+1])
	{
		strcpy(_str, str);
	}
	//string& operator = (const string& s)
	//{
	//	if (this != &s)
	//	{
	//		delete[] _str;
	//		_str = new char[strlen(s._str) + 1];
	//		strcpy(_str,s._str);
	//	}
	//	return *this;
	//}
	string(const string& s)
		:_str(nullptr)
	{
		string tmp(s._str);
		swap(_str, tmp._str);
	}
	////string& operator=(const string& s)
	//{
	//	if (this != &s)
	//	{
	//		string tmp(s);
	//		swap(_str, tmp._str);
	//	}
	//	return *this;
	//}
	string& operator=(string s)
	{

		swap(_str, s._str);
		return *this;
	}
	~string()
	{
		delete[]_str;
		_str = nullptr;
	}
	char* f_str()
	{
		return _str;
	}

private:
	char* _str;
};

int main()
{
	std::string s1("hello");
	cout << s1.c_str() << endl;
	std::string s2(s1);
	cout << s2.c_str() << endl;
	std::string s3 = s1;
	cout << s3.c_str() << endl;

	system("pause");
	return 0;
}
