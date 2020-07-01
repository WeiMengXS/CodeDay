#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<char>> vv;
	int n;
	int flog = 0;
	while (cin >> n)
	{
		vv.resize(n);
		for (size_t i = 0; i<n; i++)
		{
			char cur[100] = {0};
			cin >> cur;
			for (auto& e : cur)
			{
				if (e!=0){
					vv[i].push_back(e);
				}
			}
		}
		int h = 0;
		while (h + 1<n)
		{
			if (vv[h].size()<=vv[h + 1].size())
			{
				h++;
			}
			else
			{
				flog = 0;
				break;
			}
		}
		if (h + 1 == n)
		{
			flog += 1;
		}
		int j = 0;
		while (j + 1<n)
		{
			if (vv[j][0]<=vv[j + 1][0])
			{
				j++;
			}
			else
			{

				break;
			}
		}
		if (j + 1 == n)
		{
			flog += 2;
		}

		if (flog == 1) { cout << "lengths" << endl; }
		else if (flog == 2) { cout <<" lexicographically "<< endl; }
		else if (flog == 3) { cout <<" both "<< endl; }
		else { cout <<" none" << endl; }

	}
	return 0;
}