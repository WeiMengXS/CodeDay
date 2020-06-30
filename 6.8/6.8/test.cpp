
#include<iostream>
#include<stack>
#include<string>
using namespace std;

	bool chkParenthesis(string A, int n) {
		stack<char> st;
		for (auto e : A)
		{
			if (e == '(' || e == ')')
				st.push(e);
			else
				return false;
		}
		int i = 0;
		while (!st.empty())
		{
			if (st.top() == '(')
			{
				if (A[i] == ')')
				{
					st.pop();
					i++;
				}
				else
				{
					return false;
				}

			}
			else if (st.top() == ')')
			{
				if (A[i] == '(')
				{
					st.pop();
					i++;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		return true;
		// write code here
	}

	int main()
	{
		string s;
		while (cin >> s)
		{
			cout << "½á¹ûÎª£º"  ;
			cout << chkParenthesis(s, 0) << endl;

		}
		//delete s;
		system("pause");
		return 0;
	}