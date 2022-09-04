#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        cout<<num<<" ";
        int a=1;
        while(a*(a+1)/2<num) a++;
        int gold=0;
        for(int i=1;i<a;i++)
        {
            for(int j=i;j<2*i;j++)
            {
                gold+=i;
            }
        }
        int x=num-a*(a-1)/2;
        gold+=x*a;
        cout<<gold<<endl;
    }
    return 0;
}
