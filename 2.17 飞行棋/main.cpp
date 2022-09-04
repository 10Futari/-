#include <bits/stdc++.h>
using namespace std;

int dianshu(int a,int b,int c,int n)//n=0代表第一个点数
{
    int num;
    num=(a*c+b)%6+1;
    for(int i=0;i<n;i++)
    {
        num=(a*num+b)%6+1;
    }
    return num;
}

int main()
{

    int n,a,b,c;
    while(cin>>n>>a>>b>>c)//每次询问
    {
        map<string,int> m;
        m["L"]=0;m["Y"]=0;
        int j[n];//跳到某点
        string put;
        for(int i=0;i<n;i++)
        {
            cin>>put;
            if(put=="N") j[i]=i;
            else j[i]=put[1]-'0';
        }
        int cnt=0,ds1,ds2;
        while(1)
        {
            ds1=dianshu(a,b,c,cnt++);//Lele局
            //cout<<m["L"]<<" "<<ds1<<endl;
            if(m["L"]+ds1==n-1)
            {
                cout<<"Lele"<<endl;
                break;
            }
            else if(m["L"]+ds1<n-1)
            {
                m["L"]+=ds1;
                m["L"]=j[m["L"]];
                if(m["L"]==m["Y"])
                {
                    m["Y"]=0;
                }
            }
            else
            {
                m["L"]+=ds1;
                m["L"]=2*(n-1)-m["L"];
                m["L"]=j[m["L"]];
                if(m["L"]==m["Y"])
                {
                    m["Y"]=0;
                }
            }
            if(m["L"]==n-1)
            {
                cout<<"Lele"<<endl;
                break;
            }
            //cout<<"L "<<m["L"]<<endl;

            ds2=dianshu(a,b,c,cnt++);//Yueyue局
            if(m["Y"]+ds2==n-1)
            {
                cout<<"Yueyue"<<endl;
                break;
            }
            else if(m["Y"]+ds2<n-1)
            {
                m["Y"]+=ds2;
                m["Y"]=j[m["Y"]];
                if(m["L"]==m["Y"])
                {
                    m["L"]=0;
                }
            }
            else
            {
                m["Y"]+=ds2;
                m["Y"]=2*(n-1)-m["Y"];
                m["Y"]=j[m["Y"]];
                if(m["L"]==m["Y"])
                {
                    m["L"]=0;
                }
            }
            if(m["Y"]==n-1)
            {
                cout<<"Yueyue"<<endl;
                break;
            }
            //cout<<"Y "<<m["Y"]<<endl;
        }
    }
    return 0;
}
