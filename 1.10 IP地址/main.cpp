#include <bits/stdc++.h>
using namespace std;

int cnt(int num)//统计num转化成二进制后有多少1
{
    int i,j=0,sum=0;
    int a[1000];
    i=num;
    while(i)
    {
    	a[j]=i%2;
    	i/=2;
    	j++;
    }
    for(i=j-1;i>=0;i--)
	{
		if(a[i]==1) sum++;
	}
    return sum;
}

int main()
{
	int n;cin>>n;
	string str;
	for(int i=0;i<n;i++)
    {
        cin>>str;
        int num=0,sum=0,s=0;
        for(int j=str.length()-1;j>=0;j--)
        {
            if(str[j]!='.')
            {
                num+=(str[j]-'0')*pow(10,s);
                s++;
            }
            else
            {
                sum+=cnt(num);
                num=0;
                s=0;
            }
            if(j==0)
            {
                sum+=cnt(num);
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
