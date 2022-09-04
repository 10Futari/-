#include <bits/stdc++.h>
using namespace std;

int rtn(int n,int cnt)
{
    int rtnum=0;
    for(int i=0;i<cnt;i++)
    {
        rtnum=10*rtnum+n;
    }
    return rtnum;
}

int main()
{
    string a,b; char da,db;
    cin>>a>>da>>b>>db;
    int dan=da-'0',dbn=db-'0';
    int cnt1=0,cnt2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==da) cnt1++;
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]==db) cnt2++;
    }
    cout<<rtn(dan,cnt1)+rtn(dbn,cnt2)<<endl;
    return 0;
}
