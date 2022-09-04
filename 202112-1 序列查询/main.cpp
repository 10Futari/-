#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,N,sum=0;cin>>n>>N;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        sum+=(a[i+1]-a[i])*i;
    }
    //cout<<sum<<endl;
    sum+=(N-a[n])*n;
    cout<<sum<<endl;
    return 0;
}
