#include <bits/stdc++.h>
using namespace std;

bool in(int num,int n,bool a[],bool b[],int id,int pos[],int len[])
{
    for(int i=0;i<=n*n-num;i++)
    {
        bool flag=1;
        for(int j=i;j<i+num;j++)
        {
            if(a[j]==1) flag=0;
        }
        if(flag==1&&!b[id])
        {
            pos[id]=i;
            len[id]=num;
            for(int j=i;j<i+num;j++) a[j]=1;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,m,k; cin>>n>>m>>k;
    bool a[10000]={0},b[10000]={0};//a表示位置是否有人 b表示是否in过
    string putstr;int id,num,pos[10000]={-1},len[10000]={-1};
    for(int i=0;i<k;i++)
    {
        cin>>putstr;
        if(putstr=="in")
        {
            cin>>id>>num;
            if(in(num,n,a,b,id,pos,len))
            {
                b[id]=1;
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
        if(putstr!="in")
        {
            cin>>id;
            if(b[id])
            {
                for(int j=pos[id];j<pos[id]+len[id];j++)
                {
                    b[id]=0;
                    a[j]=0;
                }
                pos[id]=-1;len[id]=-1;
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
    }
    return 0;
}


