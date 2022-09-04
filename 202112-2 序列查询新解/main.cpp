#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,N,sum=0;cin>>n>>N;
    int a[n+1],g[N],f[N],r=N/(n+1);
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a[i+1]-a[i];j++)
        {
            f[cnt]=i;
            cnt++;
        }
    }
    for(int i=0;i<N-a[n];i++)
    {
        f[cnt]=n;
        cnt++;
    }

    for(int i=0;i<N;i++)
    {
        g[i]=i/r;
        sum+=abs(g[i]-f[i]);
    }

    cout<<sum<<endl;
    return 0;
}
