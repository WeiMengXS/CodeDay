#include<iostream>
#include<map>
#include<string>
using namespace std;
void test_map4()
{
	map<string, int> countMap;
	string s[] = { "西瓜", "橘子", "橘子", "西瓜", "橘子", "西瓜", "苹果", "西瓜", };
	/*for (auto e : s)
	{
		auto ret = countMap.find(e);
		if (ret != countMap.end())
		{
			ret->second++;
		}
		else
		{
			countMap.insert(pair<string, int>(e, 1));
		}
	}*/
	//for (auto e : s)
	//{
	//	pair<map<string,int>::iterator,bool>ret=countMap.insert(make_pair(e, 1));
	//	if (ret.second == false)
	//	{
	//		//第二种方法
	//		ret.first->second++;
	//	}
	//}
	for (auto e: s)
	{
		countMap[e]++;
	}

	for (auto& kv : countMap)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
	map<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict["left"] = "左边";
	dict["string"] = "字符串";
	dict["left"] = "shanchu";



}
void test_map3()
{
	map<int, int> iiMap;
	iiMap.insert(pair<int, int>(1, 1));
	iiMap.insert(pair<int, int>(2, 2));
	iiMap.insert(pair<int, int>(3, 3));
	iiMap.insert(pair<int, int>(5, 5));
	iiMap.insert(pair<int, int>(7, 7));
	iiMap.insert(pair<int, int>(5, 5));
	iiMap.insert(pair<int, int>(3, 3));
	iiMap.insert(pair<int, int>(4, 4));

	
	auto it = iiMap.begin();
	while (it != iiMap.end())
	{
		cout << it->first << ":" << it->second << endl;
		it++;
	}
	cout << endl;
	iiMap.erase(3);
	auto cur = iiMap.find(40);
	if (cur != iiMap.end())
	{
		iiMap.erase(cur);
	}
	else
	{
		cout << "key not found" << endl;
	}
	//iiMap.erase(40);
	auto itt = iiMap.begin();
	while (itt != iiMap.end())
	{
		cout << itt->first << ":" << itt->second << endl;
		itt++;
	}
}
void test_map2()
{
	map<int, int> iiMap;
	iiMap.insert(pair<int, int>(1, 1));
	iiMap.insert(pair<int, int>(2, 2));
	iiMap.insert(pair<int, int>(3, 3));
	map<int, int> copy(iiMap);
	auto it = copy.begin();
	while (it != copy.end())
	{
		cout << it->first << ":" << it->second<<endl;
		it++;
	}
	cout << endl;


}
void test_Map()
{
	map<int, double> idmap;
	idmap.insert(pair<int, double>(1, 1.1));
	idmap.insert(pair<int, double>(2, 2.2));
	idmap.insert(pair<int, double>(4, 4.3));
	idmap.insert(pair<int, double>(3, 3.1));
	map<int, double>::iterator it = idmap.begin();
	while (it != idmap.end())
	{
		cout << it->first << ";" << it->second << endl;
		it++;
	}
	map<string, int> countMap;
	string s[] = { "西瓜", "橘子", "橘子", "西瓜", "橘子", "西瓜", "苹果", "西瓜", };
	for (auto e : s)
	{
		auto ret = countMap.find(e);
		if (ret != countMap.end())
		{
			ret->second++;
		}
		else
		{
			countMap.insert(pair<string, int>(e, 1));
		}
	}
	for (auto& kv : countMap)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}
int main()
{
	
	test_map3();
	test_map4();
	system("pause");

	return 0;
}