#include<iostream>
#include<list>
using namespace std;
void test_list()
{
	list<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	l1.pop_front();
	l1.push_front(4);


	list<int>::iterator it1 = l1.begin();
	while (it1 != l1.end())
	{
		if (*it1 % 2 == 0)
		{
			it1=l1.erase(it1);
		}
		else
		{
			++it1;
		}

	}
	cout << endl;

	for (auto e : l1)
	{
		cout << e << ' ';
	}
	cout << endl;
}
int main()
{
	test_list();
	system("pause");
	return 0;
}