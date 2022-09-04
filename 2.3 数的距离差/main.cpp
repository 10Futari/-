#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> ans;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        v.push_back(j) ;
    }
    sort(v.begin(),v.end());
    int Min=v[0];
    int Max=v[v.size()-1];
    for(int i=0;i<n;i++) ans.push_back(abs(abs(v[i]-Max)-(v[i]-Min)));
    int x = *min_element(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
    {
        if(ans[i]==x)
        {
            cout<<v[i]<<endl;
            break;
        }
    }

    return 0;
}
