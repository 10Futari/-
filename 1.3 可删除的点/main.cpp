#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num1[n],num2[n],ans1=0,ans2=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        num1[i]=x;
        num2[i]=y;
        if (x>0)  ans1++;
        else ans2++;
    }
    if (ans1>=2 && ans2>=2) cout<<"No";
    else cout<<"Yes";
    return 0;
}
