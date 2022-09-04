#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1,m2,r1,r2,r3;
    while(cin>>m1>>m2)
    {
        string s;cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            {
                r1=m1;
            }

            else if(s[i]=='B')
            {
                r2=m2;
            }

            else if(s[i]=='C')
            {
                m1=r3;
            }

            else if(s[i]=='D')
            {
                m2=r3;
            }

            else if(s[i]=='E')
            {
                r3=r1+r2;
            }

            else if(s[i]=='F')
            {
                r3=r1-r2;
            }
        }
        cout<<m1<<","<<m2<<endl;
    }
    return 0;
}
