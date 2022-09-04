#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;//dp[钱]=钱张数
    while(cin>>m&&m!=0)//m表示总钱 k表示钱面值
    {
        cin>>k;int a[k],dp[m+1];
        for(int i = 1; i <= m; i++) dp[i] = 9999;//初始化dp数组为9999表示不可能凑成
        dp[0]=0;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }

        for(int i = 1; i <= m; i++)  //从凑1元开始 一直算到m元为止。
        {
            for(int j = 0; j < k; j++)//k种不同面额的钱
            {
                if(i >= a[j] && dp[i - a[j]] + 1 < dp[i])//i >= a[j]很重要
                {
                    dp[i] = dp[i- a[j]] + 1;
                }
            }
        }

        if( dp[m] == 9999) cout<<"Impossible"<<endl;
        else cout<<dp[m]<<endl;
    }
    return 0;
}







