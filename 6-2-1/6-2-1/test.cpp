#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[100] = {0};
	char b[100] = {0};
cin>>a;
	
		cin>>b;
		char* str = a;
		char* dest = b;
		string ch;
		while (*str)
		{
			dest = b;
			while (*str != *dest&&*dest)
			{
				dest++;
			}
			if (*dest=='\0')
			{
				ch.push_back(*str);
			}
			
				str++;
			
		}
		cout << ch.c_str();
		cout << endl;
		system("pause");
	
	return 0;

}