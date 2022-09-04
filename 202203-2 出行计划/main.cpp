//差分和前缀和以优化时间复杂度
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;cin>>n>>m>>k;//出行计划数目 查询个数 k为等待核酸检测结果所需时间
    int t[n],need[n];//t为进入场馆时间 need为需要多少小时核酸
    for(int i=0;i<n;i++)//n个出行计划
    {
        cin>>t[i]>>need[i];
    }

    for(int i=0;i<m;i++)//m个查询
    {
        int q; cin>>q;//做核酸的时间
        int cnt=0;
        for(int j=0;j<n;j++)//遍历所有的t和need
        {
            if(q+k<=t[j]&&t[j]<=q+k+need[j]-1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
