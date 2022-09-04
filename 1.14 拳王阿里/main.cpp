#include <bits/stdc++.h>

using namespace std;
int day(string str)
{
    if (str == "monday") return 1;
    if (str == "tuesday") return 2;
    if (str == "wednesday") return 3;
    if (str == "thursday") return 4;
    if (str == "friday") return 5;
    if (str == "saturday") return 6;
    if (str == "sunday") return 7;
}

int main()
{
    int n; cin>>n;
    for(int j=0;j<n;j++)
    {
        int t1,t2,d1,d2;
        string s1,s2;
        cin>>s1>>s2>>t1>>t2;
        d1=day(s1);
        d2=day(s2);
        int x1=(d2-d1+7)%7;
        int i=0;
        while(1)
        {
            if(x1+1<=t2 && x1+1>=t1)
            {
                i++;
            }
            x1+=7;
            if(x1+1>t2) break;

        }
        if(i==0) cout<<"impossible"<<endl;
        else if(i==1) cout<<x1+1+7*(i-2)<<endl;
        else cout<<"many"<<endl;
    }
    return 0;
}
