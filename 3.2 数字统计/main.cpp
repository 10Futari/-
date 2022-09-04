#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin>>str;
    int len = str.length();
    int cnt[10] = {0};
    for(int i=0;i<len;i++)
    {
        char n = str[i];
        int pos = n-'0';
        cnt[pos]++;
    }
    for(int i=0;i<10;i++)
    {
        if(cnt[i]!=0) cout<<i<<":"<<cnt[i]<<endl;
    }
    return 0;
}
