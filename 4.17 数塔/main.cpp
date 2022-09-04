#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int dp[n][n],a[n][n],r[n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }

    dp[0][0]=a[0][0];
    for(int i=1;i<n;i++)//初始化两边
    {
        dp[i][0]=dp[i-1][0]+a[i][0];
        dp[i][i]=dp[i-1][i-1]+a[i][i];
    }

    for(int i=2;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
        }
    }

    int m=a[0][0];
    int cnt;
    for(int i=1;i<n;i++)//最大处
    {
        if(dp[n-1][i]>m)
        {
            m=dp[n-1][i];
            cnt=i;
        }
    }
    cout<<m<<endl;
    r[n-1]=cnt;//记录路径
    for(int i=n-2;i>=1;i--)
    {
        if(cnt==0)//只能往上走
        {
            r[i]=cnt;
        }
        else if(cnt==i+1)//只能往左上方走
        {
            cnt--;
            r[i]=cnt;
        }
        else if(dp[i][cnt-1]>dp[i][cnt])
        {
            cnt--;
            r[i]=cnt;
        }
        else
        {
            r[i]=cnt;
        }
    }
    r[0]=0;
    for(int i=0;i<n;i++)
    {
        cout<<a[i][r[i]]<<" ";
    }
    cout<<endl;
    return 0;
}

