#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;string str;
    while(cin>>len&&len!=0)
    {
        int cnt1=0,cnt2=0;
        cin>>str;
        for(int i=0;i<len-1;i++)
        {
            if(str[i]=='a'&&str[i+1]=='b') cnt1++;
            if(str[i]=='b'&&str[i+1]=='a') cnt2++;
        }
        cout<<cnt1-cnt2<<endl;
    }
    return 0;
}
