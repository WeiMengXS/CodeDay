#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<set>
using namespace std;
void test_multi()
{
	multiset<int> ms;
	ms.insert(4);
	ms.insert(1);//ÔÊĞí¼üÖµÈßÓà
	ms.insert(2);
	ms.insert(1);
	ms.insert(6);
	ms.insert(2);
	ms.insert(6);
	cout << ms.count(6) << endl;
	multimap<string, string> mss;
	mss.insert(make_pair("left", "×ó±ß"));
	auto ret = ms.begin();
	while (ret != ms.end())
	{
		cout << *ret << " ";
		++ret;
	}
	cout << endl;
}
bool isPossible(vector<int>& nums) {
	int n = nums.size();
	int begin = 0;
	int count = 0;
	while (begin + 1<n)
	{
		if (nums[begin] == nums[begin + 1]-1)
		{
			while (nums[begin] == nums[begin + 1]-1&&begin+1<n)
			{
				count++;
				begin++;
			}
			if (count >= 2)
			{
				return true;
			}
			else
			{
				count = 0;
			}
		}
		else{
			begin++;


		}
	}
	return false;
}
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(4);
	//cout << v.size() << endl;
	//cout<<isPossible(v);
	//test_multi();
	cout << "&&&\n"<<endl;
	system("pause");
	return 0;
}