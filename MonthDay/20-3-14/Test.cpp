#include<iostream>
#include<cstdlib>
using namespace std;
class Date
{
public:
	int GetMonthday(int years, int month)
	{
		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		int day = days[month];

		if (month == 2 && ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0))
		{
			day += 1;
		}
		return day;

	}

	Date(int years = 0, int month = 1, int day = 1)
	{
		if (years > 0 && month > 0 && month < 13 &&day>0&&day <= GetMonthday(years, month))
		{
			_years = years;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "错误" << endl;
			
			
		}
	}
	Date(const Date& x)
	{
		_years = x._years;
		_month = x._month;
		_day = x._day;
	
	
	}
	//~Date()
	//{}
	
	void show()
	{
		cout << _years << "年" << _month << "月" << _day << "日" << endl;

	}
	// 赋值运算符重载
	 //d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_years = d._years;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	
	/*}*/
	

	// 日期+=天数
	Date& operator+=(int day)
	{
		
		_day += day;
		while (_day > GetMonthday(_years, _month))
		{
			_month++;
			_day -= GetMonthday(_years,_month);
			if (_month == 13)
			{
				_years++;
				_month = 1;
			}
		}
		//ret.show();

		return *this;
	}

	// 日期+天数
	Date operator+(int day)
	{
		Date ret(*this);
		ret._day += day;
		while(ret._day > ret.GetMonthday(ret._years, ret._month))
		{
			ret._month++;
			ret._day -= ret.GetMonthday(ret._years, ret._month);
			if (ret._month == 13)
			{
				ret._years++;
				ret._month = 1;
			}
		}
		ret.show();

		return ret;
			

	
	}

	// 日期-天数
	Date operator-(int day)
	{
		Date ret(*this);
		ret -= day;
		return ret;
	
	}

	// 日期-=天数
	Date& operator-=(int day)
	{
		_day -= day;
		while (_day <= 0)
		{
			_month--;
		if (_month<0)
		{
			_years--;
			_month = 12;
		}
			_day += GetMonthday(_years, _month);

		}
		return *this;
	}
	
	// 前置++
	Date& operator++()
	{
		*this += 1;
		return *this;
	
	}

	// 后置++
	Date operator++(int)
	{
		Date tmp(*this);
		(*this).operator++();
		return tmp;
	
	}
	// 后置--
	Date operator--(int);
	// 前置--
	Date& operator--();

	// >运算符重载
	bool operator>(const Date& d)
	{
		if (d._years > _day || ((d._years == _years) && (d._month > _month)) || (((d._years == _years) && (d._month == _month)) && (d._day > _day)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// ==运算符重载
	bool operator==(const Date& d)
	{
		return _years == d._years&&_month == d._month&&_day == d._day;
	
	}
	// >=运算符重载
	inline bool operator >= (const Date& d)
	{
		return (*this) > d && (*this) == d;

	}
	istream& operator>>(istream& in, Date& d)
	{
		
	}

	// <运算符重载
	bool operator < (const Date& d);
	// <=运算符重载
	bool operator <= (const Date& d);
	// !=运算符重载
	bool operator != (const Date& d);
	// 日期-日期 返回天数
	int operator-(const Date& d);

private:
	int _years;
	int _month;
	int _day;
};




int main()
{
	/*Date d1;
	d1.show();
	Date d2(2020, 3, 14);
	d2.show();
	Date d3(d2);
	d3.show();
	cout << d1.GetMonthday(2020, 2) << endl;*/
	Date d4(2020, 12, 31);
	//
	//d4.show();
	//d4.operator+(1);
	//d4.show();
	///*d1.show();
	//d1 = d4;
	//d1.show();*/
	/*d4.operator+=(2);
	d4.show();
	Date tmp=d4.operator-(365);
	tmp.show();*/
	d4.show();

	//d4.operator-=(365);
	//d4.show();
	//d4.operator-(365);

	//d4.operator++();
	//d4.show();
	//Date ret =d4.operator++(1);
	//ret.show();
	//d4.show();
	//cout << d4.operator>(ret) << endl;



	system("pause");
	return 0;
}