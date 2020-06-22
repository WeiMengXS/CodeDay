#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int>& numbers) {
		int a[100] = {0};
		int n = numbers.size() - 1;
		for (auto x : numbers)
		{
			a[x]++;
		}
		for (size_t i = 0; i<100; i++)
		{
			if (a[i] >= n/2)
			{
				return i;
			}
		}
		return 0;

	}
	void test()
	{
		v.push_back(1);
		v.push_back(2);
		v.push_back(2);
		v.push_back(4);
		v.push_back(2);
		v.push_back(4);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);
		v.push_back(5);
		v.push_back(4);
		v.push_back(4);
		v.push_back(4);
		v.push_back(5);
		v.push_back(4);


		cout<< MoreThanHalfNum_Solution(v) ;
	}
	vector<int> v;

};
int main()
{
	char a[256] = {'0'};
	Solution x;
	x.test();
	system("pause");
	
	return 0;
}