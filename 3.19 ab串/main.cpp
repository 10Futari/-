#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int len=s.length();
    //cout<<len<<endl;
    int a[len+1],b[len+1];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    if(s[0]=='a') a[1]++;
    else b[1]++;
    for(int i=2;i<len+1;i++)
    {
        a[i]=a[i-1];
        b[i]=b[i-1];
        if(s[i-1]=='a') a[i]++;//зЂвт
        else b[i]++;
    }
    //cout<<b[len]<<endl;
    int ans=0;
    for(int i=0;i<=len;i++)
    {
        for(int j=i;j<=len;j++)
        {
            int temp=0;
            temp=a[i]+(b[j]-b[i])+(a[len]-a[j]);
            //cout<<a[i]<<" "<<b[j]<<" "<<b[i]<<" "<<a[len]-a[j]<<"  "<<temp<<endl;
            ans=max(ans,temp);
        }
    }
    cout<<ans<<endl;
    return 0;
}

