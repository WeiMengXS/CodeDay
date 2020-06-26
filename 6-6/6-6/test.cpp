#include<iostream>
#include<string>
using namespace std;
bool sure_reverse(string str)
{
	int left = 0;
	int right = str.size() - 1;

	while (left<right)
	{
		if (str[left] != str[right])
			return false;
		left++;
		right--;
	}
	return true;
}
int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	int count = 0;
	for (size_t i = 0; i <= s1.size(); i++)
	{
		string str = s1;
		str.insert(i, s2);
		if (sure_reverse(str))
		{
			count++;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}