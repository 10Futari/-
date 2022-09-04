#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k; cin>>n>>k;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int num; cin>>num;
        s.insert(num);
    }
    auto iterator = s.begin();
    int v=s.size();
    for(int i=0;i<min(k,v);i++)
    {
        cout <<  *iterator<<" ";
        iterator++;
    }
    return 0;
}
