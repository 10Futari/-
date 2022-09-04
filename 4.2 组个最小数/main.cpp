#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={0},put;char ch;
    while(cin>>put)
    {
        a[put]++;
        ch=getchar();
        if(ch=='\n') break;
    }
    for(int i=1;i<10;i++)
    {
        if(a[i]!=0)
        {
            cout<<i;
            a[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        while(a[i]!=0)
        {
            cout<<i;
            a[i]--;
        }
    }
    return 0;
}
