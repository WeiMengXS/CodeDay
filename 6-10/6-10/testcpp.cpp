#include<iostream>
using namespace std;
int _jc(int k)
{
	if (k == 1)
		return 1;
	return k*(_jc(k-1));
}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		int sum_nm = _jc(n + m);
		int sum_n = _jc(n);
		// int sum_njm=_jc()
		int sum_m = _jc(m);
		int temp = sum_nm / (sum_n*sum_m);
		cout << temp << endl;


	}
	return 0;
}