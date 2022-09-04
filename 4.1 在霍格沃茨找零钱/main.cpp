#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pg,ps,pk,ag,as,ak,psum=0,asum=0,zg,zs,zk;
    char s;
    cin>>pg>>s>>ps>>s>>pk;
    psum=pk+29*ps+29*17*pg;
    cin>>ag>>s>>as>>s>>ak;
    asum=ak+29*as+29*17*ag;
    int zhao=asum-psum;
    zg=zhao/(29*17);
    zs=(zhao-29*17*zg)/29;
    zk=zhao-29*17*zg-zs*29;
    if(zhao>=0) cout<<abs(zg)<<"."<<abs(zs)<<"."<<abs(zk)<<endl;
    else cout<<"-"<<abs(zg)<<"."<<abs(zs)<<"."<<abs(zk)<<endl;
    return 0;
}
