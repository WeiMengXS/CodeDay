#include<iostream>
using namespace std;
#if 0
class Person
{
public:
	virtual void BuyTicket()
	{
		cout << "ÂòÆ±-È«Æ±" << endl;
	}
};
class Student: public  Person
{
public:
	virtual void BuyTicket()
	{
		cout << "ÂòÆ±-°ëÆ±" << endl;
	}
};
void tack(Person& p)
{
	p.BuyTicket();
}
void tack2(Person p)
{
	p.BuyTicket();
}
void tack3(Person* p)
{
	p->BuyTicket();
}
int main()
{
	Person p;
	Student s;
	tack(p);
	tack(s);
	system("pause");
	return 0;
}
#endif
class A
{
public:
	int _a;
};
class B :virtual public A
{
public:
	int _b;
};
class C :virtual public A
{
public:
	int _c;
}; 
class D :public B,public C
{
public:
	int _d;
};
int main()
{
	D d;
	cout << sizeof(D) << endl;
	system("pause");
	return 0;
}