#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    double a[n],putnum,sum=0.0;
    for(int i=0;i<n;i++)
    {
    	cin>>putnum;
    	a[i]=putnum;
    	sum+=putnum;
	}
	double pingjun=sum/n;
	double fangcha=0.0;
	for(int i=0;i<n;i++)
    {
    	fangcha+=pow(a[i]-pingjun,2)/n;
	}
	double bzc=pow(fangcha,0.5);
	double p;
	for(int i=0;i<n;i++)
	{
		cout<<(a[i]-pingjun)/bzc<<endl;
	}
	return 0;
}
