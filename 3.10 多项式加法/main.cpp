#include <bits/stdc++.h>
using namespace std;

int a[2][1000005];
int main()
{
    int n,m,cnt=0;
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        if(m!=0)
        {
            a[0][cnt]=n;
            a[1][cnt]=m;
            cnt++;
        }
    }

    while(cin>>n>>m&&(n!=0||m!=0))
    {
        if(m!=0)
        {
            bool flag=1;
            for(int i=0;i<cnt;i++)
            {
                if(n==a[0][i])
                {
                    flag=0;
                    a[1][i]+=m;
                    break;
                }
            }

            if(flag)
            {
                a[0][cnt]=n;
                a[1][cnt]=m;
                cnt++;
            }
        }

    }
    for(int i=0;i<cnt-1;i++)
    {
        for(int j=i;j<cnt;j++)
        {
            if(a[0][i]<a[0][j])
            {
                swap(a[0][i],a[0][j]);
                swap(a[1][i],a[1][j]);
            }
        }
    }

    for(int i=0;i<cnt;i++)
    {
        if(a[1][i]==0)
        {
            for(int j=i;j<cnt-1;j++)
            {
                swap(a[0][j],a[0][j+1]);
                swap(a[1][j],a[1][j+1]);
            }
            cnt--;
            break;
        }
    }

    for(int i=0;i<cnt;i++) cout<<a[0][i]<<" "<<a[1][i]<<endl;
    return 0;
}
