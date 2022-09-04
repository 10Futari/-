#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p1,p2,p3,t1,t2,ans=0;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int a[2][n];
    for(int i=0;i<n;i++)
    {
        int I,r;
        cin>>I>>r;
        a[0][i]=I;
        a[1][i]=r;
        ans+=(r-I)*p1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[0][i+1]-a[1][i] <=t1) ans+=(a[0][i+1]-a[1][i])*p1;
        else if ((a[0][i+1]-a[1][i] >t1) && (a[0][i+1]-a[1][i] <=t1+t2)) ans+=(t1*p1+(a[0][i+1]-a[1][i]-t1)*p2);
        else if (a[0][i+1]-a[1][i] >t1+t2) ans+=(t1*p1+t2*p2+(a[0][i+1]-a[1][i]-t1-t2)*p3);
    }
    cout<<ans;
    return 0;
}
