#include<vector>
#include<iostream>
#include <algorithm>


using namespace std;
void test_vector()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	for (size_t i = 0; i < v1.size(); ++i)
	{
		v1[i] *= 2;
		cout << v1[i] << " ";

	}
	cout << endl;
	 
	vector<int>::iterator it1 = v1.begin();
	while (it1 != v1.end())
	{
		*it1 *= 2;
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;

	for (auto& e : v1)
	{
		e *= 2;
		cout << e << ' ';
	}



}
void test_voctor2()

{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	vector<int>::reverse_iterator rit2 = v1.rbegin();
	while (rit2 != v1.rend())
	{
		*rit2 *= 2;
		cout << *rit2 << " ";
		++rit2;


	}
	cout << endl;
}
void test_vector3()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.insert(v1.begin(),0);
	//cout << v1.max_size() << endl;
	//vector<int>::iterator it1 = v1.begin();
	//while (it1!=v1.end())
	//{
	//	cout << *it1 << " ";
	//	it1++;
	//}
	v1.insert(v1.begin()+3, 7);
	v1.erase(v1.begin());
	v1.erase(v1.begin()+1);
	vector<int>::iterator pos1 = find(v1.begin(),v1.end(),7);
	if (pos1 != v1.end())
	{
		v1.insert(pos1, 8);
	}
	for (auto e : v1)
	{
		cout << e << ' ';
	}
	cout << endl;
auto pos2 = find(v1.begin(), v1.end(), 7);
	if (pos2 != v1.end())
	{
		v1.erase(pos2);
	}
	sort(v1.begin(), v1.end());
	for (auto e : v1)
	{
		cout << e << ' ';
	}
	v1.clear();
	for (auto e : v1)
	{
		cout << e << ' ';
	}
	cout << endl;
}
int main()
{

//	test_vector();
	test_voctor2();
	test_vector3();

	system("pause");
	
	return 0;
}