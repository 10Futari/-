#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int num; cin>>num;
        int cnt=0;
        if(num==0) break;
        while(num!=1)
        {
            if(num%2) num=(3*num+1)/2;
            else num=num/2;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
