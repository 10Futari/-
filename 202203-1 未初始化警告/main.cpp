#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    vector<int> you;
    int cnt=0;
    you.push_back(0);
    for(int i=0;i<k;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        vector<int>::iterator it=find(you.begin(),you.end(),p2);
        if(it==you.end()) cnt++;
        you.push_back(p1);
    }
    cout<<cnt<<endl;
    return 0;
}
