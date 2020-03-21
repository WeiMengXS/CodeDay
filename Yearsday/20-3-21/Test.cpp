#include<iostream>
using namespace std;

int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	//Date d1(year,month,day);
	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int tmp = 0;
	for (int i = 1; i < month; i++)
	{
		if ((i == 2) && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			tmp += 29;
		}
		else
		{
			tmp += a[i];
		}
	}
	tmp += day;
	cout << tmp << endl;
	system("pause");
	return 0;
}
//#include<iostream>
//using namespace std;
//int Getmonthday(int year, int month)
//{
//	int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int _day = a[month];
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		if (month == 2)
//			_day = 29;
//	}
//	return _day;
//}
//int main()
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	//Date d1(year,month,day);
//	int tmp = 0;
//	for (int i = 1; i < month; i++)
//	{
//		tmp += Getmonthday(year, i);
//	}
//	tmp += day;
//	cout << tmp << endl;
//	system("pause");
//	return 0;
//}
//class SumN{
//public:
//	SumN()
//	{
//		_sum+=_i;
//		++_i;
//	}
//	static int put()
//	{
//		return _sum;
//	}
//private:
//	static int _i;
//	static int _sum;
//};
//
//int SumN::_i=1;
//int SumN::_sum=0;
//
//class Solution {
//public:
//	virtual int Sum_Solution(int n) {
//		SumN a[6];
//
//		return SumN::put();
//	}
//};
//
//int main()
//{
//	Solution a;
//	cout << a.Sum_Solution(1) << endl;
//
//	system("pause");
//	return 0;
//
//}

#if 0
class Date
{
public:
	//Date(int year, int month, int day)
	//{
	//	//函数体内赋值
	//	_year = year;
	//	_month = month;
	//	_day = day;
	//}
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{
	}

private:
	int _year;
	int _month;
	int _day;
};
#endif