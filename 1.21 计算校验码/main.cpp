#include <bits/stdc++.h>
using namespace std;

int zh(string s)
{
    int sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]<='9'&&s[i]>='0') sum+=(s[i]-'0');
        else sum+=(s[i]-'a'+10);
    }
    return sum;
}

int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int jz;
        string s;
        cin>>jz>>s;
        char ch;
        for(int j=0;j<jz;j++)
        {
            if(j<=9) ch=j+'0';
            else ch=j-10+'a';
            s.push_back(ch);
            int sum=zh(s);
            //cout<<sum<<endl;
            if(sum%(jz-1)==0)
            {
                if(j<10) cout<<j<<endl;
                else cout<<char(j-10+'a')<<endl;
                break;
            }
            s.pop_back();
        }
    }
    return 0;
}
