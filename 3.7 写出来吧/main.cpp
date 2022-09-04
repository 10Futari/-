#include <bits/stdc++.h>
using namespace std;
string zhuan(char ch)
{
    if(ch=='0') return "ling"; if(ch=='1') return "yi";
    if(ch=='2') return "er"; if(ch=='3') return "san";
    if(ch=='4') return "si"; if(ch=='5') return "wu";
    if(ch=='6') return "liu"; if(ch=='7') return "qi";
    if(ch=='8') return "ba"; if(ch=='9') return "jiu";
}

int main()
{
    string str; cin>>str;
    int len=str.length(),cnt=0;
    for(int i=0;i<len;i++)
    {
        cnt+=str[i]-'0';
    }
    string ansstr=to_string(cnt);
    for(int i=0;i<ansstr.length();i++)
    {
        cout<<zhuan(ansstr[i])<<" ";
    }
    return 0;
}
