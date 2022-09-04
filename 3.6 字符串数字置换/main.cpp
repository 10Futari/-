#include <bits/stdc++.h>
using namespace std;

int times[10]={0};
string change[10]={"(Zero)","(One)","(Two)","(Three)","(Four)","(Five)","(Six)","(Seven)","(Eight)","(Nine)"};
int main()
{
    string s;
    getline(cin,s);
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        if ((s[i]<'0')||(s[i]>'9')) cout<<s[i];
        else
        {
            cout<<change[s[i]-'0'];
            times[s[i]-'0']++;
        }
    }
    cout<<endl;
    for (int i=0;i<10;i++) {cout<<times[i]<<" ";}
    return 0;
}
