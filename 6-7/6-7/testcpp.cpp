#include<iostream>
#include<queue>
#include<string>
using namespace std;
class Node
{
public:
	Node* left;
	Node*right;
	int val;

private:

};

int StrToInt(string str) {

	long sum = 0;
	int flog;
	if (!str.length())
		return 0;
	if (str[0] == '+')
		flog = 1;
	else if (str[0] == '-')
		flog = 2;

	for (size_t i = 0; i<str.size(); i++)
	{
		if ((str[i] <= '9'&&str[i] >= '0') || str[i] == '+'||str[i]=='-')
		{
			if (str[i] != '+'&&str[i]!='-')
			{
				sum *= 10;
				sum += (str[i] - 48);
			}
		}
		else
		{
			return 0;
		}
	}
	return flog == 2 ? -sum : sum;
}
	



int main()
{
	string s;
	cin >> s;
	//cout << s << endl;

	cout << StrToInt(s) << endl;
	system("pause");

	/*Node a, b;
	Node* x = b;*/
	/*a.left = x;
	queue<Node*> q;*/

	return 0;
}