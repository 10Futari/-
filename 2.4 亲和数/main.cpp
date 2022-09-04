#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    while(cin>>a>>b)
    {
        bool flag=0;
        int cnt1=0,cnt2=0;
        for(int i=2;i<=b;i++)
        {
            if(b%i==0) cnt1+=b/i;
        }
        if (cnt1==a)
        {
            flag=1;
        }
        for(int i=2;i<=a;i++)
        {
            if(a%i==0) cnt2+=a/i;
        }
        if (cnt2==b)
        {
            flag=1;
        }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
