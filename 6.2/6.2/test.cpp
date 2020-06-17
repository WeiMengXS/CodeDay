#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n;

	while (scanf_s("%d", &n) != EOF)
	{
		int a[1000];
		size_t count = n * 3;


		for (size_t i = 0; i < count; i++)
		{
			scanf_s("%d", &a[i]);

		}
		vector<int> b;
		for (size_t i = 0; i < count; i++)
		{
			b.push_back(a[i]);
		}
		sort(b.begin(), b.end());

		if (count == 3)
		{
			b.pop_back();

			cout << b.back() << endl;
			break;
		}
		int num = 0;
		for (size_t i = 0; i<n; i++)
		{
			b.pop_back();
			num += b.back();
		}
		/*string c;
		c.c_str();*/

		cout << num;
		cout << endl;
	}
	return 0;
}