#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mny,a1,a5,a10,a20,a100;cin>>mny;
    a100=mny/100;
    a20=(mny%100)/20;
    a10=((mny%100)%20)/10;
    a5=(((mny%100)%20)%10)/5;
    a1=(((mny%100)%20)%10)%5;
    cout<<a1+a5+a10+a20+a100<<endl;
    return 0;
}
