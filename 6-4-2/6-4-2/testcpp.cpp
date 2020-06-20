#include<iostream>
#include<string>
using namespace std;
int main()
{
	string more;
	getline(cin, more);

	//char c[256] = more.c_str();

	 const char* cur = more.c_str();
		int x = 0;
		int num = 0;
	const	char* t = cur;

		while (*cur)
		{
			if (*cur >= '0'&&*cur <= '9')
			{

				const char* ptr = cur;
				x = 0;
				while (*cur&&*cur >= '0'&&*cur <= '9')
				{
					cur++;
					x++;
				}
				if (x>num)
				{
					num = x;
					t = ptr;
				}
			}
			else
			{
				cur++;
			}
		
		}
		while (num--)
		{
			cout << *t;
			t++;
		}

	
	system("pause");
	return 0;

}