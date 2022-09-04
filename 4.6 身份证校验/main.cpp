#include <bits/stdc++.h>
using namespace std;

char trn(int n)
{
    if(n==0) return '1';else if(n==1) return '0';
    else if(n==2) return 'X';else if(n==3) return '9';
    else if(n==4) return '8';else if(n==5) return '7';
    else if(n==6) return '6';else if(n==7) return '5';
    else if(n==8) return '4';else if(n==9) return '3';
    else if(n==10) return '2';
}

int main()
{
    string s;int a[17]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    while(cin>>s)
    {
        if(s.length()==18)
        {
            int sum=0;
            for(int i=0;i<17;i++)
            {
                sum+=(s[i]-'0')*a[i];
            }
            int mod=sum%11;
            if(trn(mod)==s[17]) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
    return 0;
}
