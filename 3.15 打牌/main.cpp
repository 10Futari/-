#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={0};
    string have; cin>>have;
    for(int i=1;i<=have.length();i++)
    {
        a[have[i]-'0']++;
    }
    string duishou;
    while(cin>>duishou)
    {
        bool b[10]={0};
        if(duishou.length()<5)
        {
            int num=duishou[0]-'0';
            bool flag=0;
            for(int i=num+1;i<=9;i++)
            {
                if(a[i]>=duishou.length())
                {
                    flag=1;
                    b[i]=1;
                }
            }
            if(flag)
            {
                cout<<"YES ";
                for(int i=0;i<10;i++)
                {
                    if(b[i]==1)
                    {
                        for(int j=0;j<duishou.length();j++)
                            cout<<i;
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            int firstnum=duishou[0]-'0';
            bool flag=0,c[4]={0};
            for(int i=firstnum+1;i<=5;i++)
            {
                if(a[i]>0&&a[i+1]>0&&a[i+2]>0&&a[i+3]>0&&a[i+4]>0)
                    {
                        flag=1;
                        c[i-2]=1;
                    }
            }
            if(flag)
            {
                cout<<"YES ";
                for(int i=0;i<4;i++)
                {
                    if(c[i]==1)
                    {
                        for(int j=i+2;j<=i+6;j++)
                            cout<<j;
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
