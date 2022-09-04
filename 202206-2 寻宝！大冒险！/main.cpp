#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,s,cnt=0; cin>>n>>l>>s;
    //cout<<n<<endl;
    bool lht[l+1][l+1];//ÂÌ»¯Í¼
    bool cbt[s+1][s+1];//²Ø±¦Í¼
    int x[n],y[n];
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=l;j++) lht[i][j]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        lht[x[i]][y[i]]=1;
    }
    /*for(int i=0;i<=l;i++)//遍历输出
    {
        for(int j=0;j<=l;j++) cout<<lht[i][j]<<" ";
        cout<<endl;
    }*/
    for(int i=s;i>=0;i--)
    {
        for(int j=0;j<=s;j++)
        {
            cin>>cbt[i][j];
        }
    }
    /*for(int i=0;i<=s;i++)//遍历输出
    {
        for(int j=0;j<=s;j++) cout<<cbt[i][j]<<" ";
        cout<<endl;
    }*/
    for(int i=0;i<n;i++)//n¸öµã
    {
        bool flag=1;
        for(int a=x[i];a<=s+x[i];a++)
        {
            for(int b=y[i];b<=s+y[i];b++)
            {
                if(s+x[i]>l||s+y[i]>l)
                {
                    flag=0;
                    break;
                }
                //cout<<a<<" "<<b<<endl;
                //cout<<a-x[i]<<" "<<b-y[i]<<endl;
                //cout<<lht[a][b]<<" "<<cbt[a-x[i]][b-y[i]]<<endl;
                if(lht[a][b]!=cbt[a-x[i]][b-y[i]]) flag=0;
            }
        }
        if(flag)
        {
            //cout<<"yes"<<endl;
            cnt++;
        }
    }
    cout<<cnt<<endl;
	return 0;
}
