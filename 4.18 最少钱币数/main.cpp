#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,k;//dp[Ǯ]=Ǯ����
    while(cin>>m&&m!=0)//m��ʾ��Ǯ k��ʾǮ��ֵ
    {
        cin>>k;int a[k],dp[m+1];
        for(int i = 1; i <= m; i++) dp[i] = 9999;//��ʼ��dp����Ϊ9999��ʾ�����ܴճ�
        dp[0]=0;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }

        for(int i = 1; i <= m; i++)  //�Ӵ�1Ԫ��ʼ һֱ�㵽mԪΪֹ��
        {
            for(int j = 0; j < k; j++)//k�ֲ�ͬ����Ǯ
            {
                if(i >= a[j] && dp[i - a[j]] + 1 < dp[i])//i >= a[j]����Ҫ
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







