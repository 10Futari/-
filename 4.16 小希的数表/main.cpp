#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int a[100000],b[1000];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n*(n-1)/2;i++)
        {
            int putnum;cin>>putnum;
            a[i]=putnum;
        }

        for(int i=2;i<n-1;i++)//a2+a3
        {
            //b[0]=(a[0]+a[1]-a[i])
            if((a[0]+a[1]-a[i])%2) continue;
            else
            {
                b[0]=(a[0]+a[1]-a[i])/2;
                b[1]=a[0]-b[0];
                b[2]=a[1]-b[0];
                int cnt=3;
                while(n>cnt)
                {
                    for(int j=0;j<cnt-1;j++)
                    {
                        for(int k=j+1;k<cnt;k++)
                        {
                            for(int s=0;s<n*(n-1)/2;s++)
                            {
                                if(b[j]+b[k]==a[s])
                                {
                                    a[s]=10100;
                                }
                            }
                        }
                    }

                    for(int j=0;j<n*(n-1)/2;j++)
                    {
                        if(a[j]<=10000)
                        {
                            b[cnt]=a[j]-b[0];
                            cnt++;
                            break;
                        }
                    }
                }
            }
            for(int j=0;j<n;j++) cout<<b[j]<<" ";
            cout<<endl;
            break;
        }
    }
    return 0;
}

//6
//4 5 7 9 11 12 23 25 26 30 81 83 84 88 102










