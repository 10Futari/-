#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int sum[m];
    string s[m];
    for(int i=0;i<m;i++)
    {
        int cnt = 0;
        string str; cin>>str;
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(str[j]>str[k]) cnt++;
            }
        }
        sum[i] = cnt;
        s[i] = str;
    }


    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
            if(sum[i]>sum[j])
            {
                swap(s[i],s[j]);
                swap(sum[i],sum[j]);
            }

    }

    for(int i=0;i<m;i++) cout<<s[i]<<endl;
    return 0;
}
