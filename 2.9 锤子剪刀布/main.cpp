#include <bits/stdc++.h>

using namespace std;
int res(string s1,string s2)
{
    if(s1==s2) return 0;
    if(s1=="J"&&s2=="B") return 1;if(s1=="J"&&s2=="C") return -1;
    if(s1=="B"&&s2=="C") return 1;if(s1=="B"&&s2=="J") return -1;
    if(s1=="C"&&s2=="J") return 1;if(s1=="C"&&s2=="B") return -1;
}

int main()
{
    int win1[3],win2[3];
    vector<string> ans1,ans2;
    int n;cin>>n;
    int ans[3];
    for(int i=0;i<3;i++) {ans[i]=0;win1[i]=0;win2[i]=0;}
    for(int i=0;i<n;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(res(s1,s2)==1)
        {
            ans[0]++;ans1.push_back(s1);
            if(s1=="B") win1[0]++;
            if(s1=="C") win1[1]++;
            if(s1=="J") win1[2]++;
        }
        else if(res(s1,s2)==0) ans[1]++;
        else
        {
            ans[2]++;ans2.push_back(s2);
            if(s2=="B") win2[0]++;
            if(s2=="C") win2[1]++;
            if(s2=="J") win2[2]++;
        }
    }
    for(int i=0;i<3;i++) cout<<ans[i]<<" ";
    cout<<endl;
    for(int i=2;i>=0;i--) cout<<ans[i]<<" ";
    cout<<endl;
    if(win1[0]>=win1[1]&&win1[0]>=win1[2]) cout<<"B"<<" ";
    if(win1[1]>win1[0]&&win1[1]>=win1[2]) cout<<"C"<<" ";
    if(win1[2]>win1[0]&&win1[2]>win1[1]) cout<<"J"<<" ";

    if(win2[0]>=win2[1]&&win2[0]>=win2[2]) cout<<"B";
    if(win2[1]>win2[0]&&win2[1]>=win2[2]) cout<<"C";
    if(win2[2]>win2[0]&&win2[2]>win2[1]) cout<<"J";

    return 0;
}
