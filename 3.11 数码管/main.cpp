#include <bits/stdc++.h>
using namespace std;
bool rtn(int n1,int n2)
{
    if(n1==0&&(n2==1||n2==7||n2==8)) return 1;
    else if(n1==1&&(n2==0||n2==3||n2==4||n2==7||n2==8||n2==9)) return 1;
    else if(n1==2&&(n2==8)) return 1;
    else if(n1==3&&(n2==1||n2==7||n2==8||n2==9)) return 1;
    else if(n1==4&&(n2==1||n2==8||n2==9)) return 1;
    else if(n1==5&&(n2==6||n2==8||n2==9)) return 1;
    else if(n1==6&&(n2==5||n2==8)) return 1;
    else if(n1==7&&(n2==3||n2==8||n2==9)) return 1;
    else if(n1==8) return 1;
    else if(n1==9&&(n2==1||n2==3||n2==4||n2==5||n2==7||n2==8)) return 1;
    else return 0;
}

int main()
{
    int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
    while(cin>>a0&&a0!=-1&&cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9)
    {
        if(rtn(a0,a1)&&rtn(a1,a2)&&rtn(a2,a3)&&rtn(a3,a4)&&rtn(a4,a5)&&rtn(a5,a6)&&rtn(a6,a7)&&rtn(a7,a8)&&rtn(a8,a9)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
