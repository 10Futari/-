#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        int res=0,cnt1=0,cnt2=0;
        int p=a.find('B');
        for(int i=0;i<p;i++)
        {
            if(a[i]==')') cnt1++;
        }
        for(int i=p+1;i<a.length();i++)
        {
            if(a[i]=='(') cnt2++;
        }
        cout<<(a.length()-1-cnt1*2-cnt2*2)/2<<endl;
    }
    return 0;
}
