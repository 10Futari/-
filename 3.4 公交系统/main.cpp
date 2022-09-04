#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,w; cin>>n>>w;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int put; cin>>put;
        a[i] = put;
    }

    int j=0;
    for(j;j<w;j++)
    {
        int cnt=j;
        bool flag=1;
        for(int i=0;i<n;i++)
        {
            cnt+=a[i];
            if(cnt<0||cnt>w) flag=0;
        }
        if(flag==1) break;
    }

    int j2=w;
    for(j2;j2>0;j2--)
    {
        int cnt=j2;
        bool flag=1;
        for(int i=0;i<n;i++)
        {
            cnt+=a[i];
            if(cnt<0||cnt>w) flag=0;
        }
        if(flag==1) break;
    }
    if(j2-j+1>0) cout<<j2-j+1<<endl;
    else cout<<0<<endl;
    return 0;
}
