#include <bits/stdc++.h>
using namespace std;

int main()
{
    //最长不上升子序列
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int put; cin>>put;
        a[i] = put;
    }
    int ans=1;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            int cnt = 2;
            int temp = a[j];
            for(int k=j+1;k<n;k++)
            {
                if(a[j]>a[i])
                {
                    cnt=1;
                    break;
                }
                else
                {
                    if(a[k]<=temp)
                    {
                        cnt++;
                        temp = a[k];
                    }
                }
            }
            if(cnt>ans) ans=cnt;
        }
    }
    cout<<ans<<endl;
    return 0;
}
