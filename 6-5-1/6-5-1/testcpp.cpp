#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int > v;
	int n;
	while (cin >> n)
	{

		v.resize(n);
		int sum = 0;
		for (size_t i = 0; i<n; i++)
		{
			cin >> v[i];
		}

		if (n == 1)
		{

			cout << v[0] << endl;
			return 0;
		}
		int j = 0;
		int tmp;

		while (j<n-1)
		{
			tmp = v[j];

			if (v[j]==v[j+1]+1 && j<n)
			{
				while (v[j]==v[j+1]+1 && j<n)
				{
					j++;
					tmp += v[j];
					if (j + 1 == n)
					{
						break;
					}

				}
				if (tmp>sum)
				{
					sum = tmp;
				}
			}
			else if (v[j]==v[j+1]-1 && j<n)
			{
				//tmp = v[j];
				while (v[j]==v[j+1]-1 && j<n)
				{
					j++;
					tmp += v[j];
					if (j + 1 == n)
					{
						break;
					}
				}
				if (tmp>sum)
				{
					sum = tmp;
				}
			}
			else
			{
				j++;
			}
			if (tmp>sum)
			{
				sum = tmp;
			}

		}
		cout << sum << endl;


	}
}