#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[5050];
	while(cin>>n&&n!=0)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int put;cin>>put;
            a[i]=put;
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
