#include <bits/stdc++.h>

using namespace std;

int main()
{
    int temp=1;
    int n;
    while(cin>>n&&n!=0)
    {
        string s[n];
        for(int i=1;i<=n;i++)
        {
            string str; cin>>str;
            if(i%2) s[(i-1)/2]=str;
            else s[n-i/2]=str;
        }
        cout<<"set-"<<temp<<endl;
        temp++;
        for(int i=0;i<n;i++) cout<<s[i]<<endl;
    }
    return 0;
}
