#include <bits/stdc++.h>
using namespace std;

bool Check(string x)//检查该字符串是否为回文串
{
	int len = x.length();
	for(int i = 0; i < len/2; i++)
		if(x[i]!=x[len-1-i])
			return 0;
	return 1;
}

int main()
{
	int n;
	while(cin>>n&&n!=0)
    {
		string str; cin>>str;
		int minl = n-1;
		for(int i=0;i<n-1;i++)
			if(Check(str.substr(i)))
			{
				minl=i;
				break;
			}
		cout <<minl<<endl;
	}
	return 0;
}
