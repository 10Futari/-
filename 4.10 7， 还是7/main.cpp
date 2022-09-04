#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    for(int i=6;i<=n;i++)
    {
        if(!(i%7)) cout<<i<<endl;
        else
        {
            string s=to_string(i);
            int p;
            p=s.find('7');
            if(p!=s.npos) cout<<s<<endl;
        }
    }
    return 0;
}
