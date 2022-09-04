#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int b[n][m];
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        for(int j =0;j<m;j++)
        {
            b[i][j]=str[j]-48;
        }
    }
    bool flag[n];
    for(int i=0;i<n;i++)
    {
        flag[i]=1;
        int cnt[m];
        for(int j=0;j<m;j++)
        {
            cnt[j]=0;
            for(int k=0;k<n;k++)
            {
                cnt[j]+=b[k][j];
            }
            cnt[j]-=b[i][j];
            if (cnt[j]==0) flag[i]=0;
        }
    }

    bool ans=0;
    for(int i=0;i<n;i++)
    {
        if(flag[i]==1) ans=1;
    }
    if (ans==1) cout<<"YES";
    else cout<<"NO";
}
