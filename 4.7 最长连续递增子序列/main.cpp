#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=1,max=1,n,a,b;cin>>n>>a;
    for(int i=1;i<n;i++)
    {
    	cin>>b;
    	//cout<<a<<" "<<b<<endl;

    	if(b>a)
    	{
    		cnt++;
    		a=b;
			//cout<<cnt<<endl;
		}

		else
		{
			cnt=1;
			a=b;
		}
		if(cnt>max) max=cnt;
		//cout<<a<<" "<<b<<endl;
	}
	cout<<max<<endl;
	return 0;
}
