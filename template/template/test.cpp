#include<iostream>
using namespace std;
#if 0
template<class T1,class T2>
class Date
{
public:
	Date()
	{
		cout << "Date(T1,T2)" << endl;
	}
private:
	T1 _d1;
	T2 _d2;

};
template<>
class Date<int,char>
{
public:
	Date()
	{
		cout << "Date(int,char)" << endl;
	}
private:
};
template<class T1>
class Date<T1,double>
{
public:
	Date()
	{
		cout << "Date(T1,double)" << endl;
	}
private:


};

//
//int main()
//{
//	Date<int, int> d1;
//	Date<int, char> d2;
//	Date<double, double> d3;
//
//	system("pause");
//	return 0;
//}
#endif