#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int a,b,val,cnt[m],dij[n],x1[m],x2[m];
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>val;
        x1[i]=a;
        x2[i]=b;
        cnt[i]=val;
    }
    return 0;
}
