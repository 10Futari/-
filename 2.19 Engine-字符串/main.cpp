#include <bits/stdc++.h>
using namespace std;
//还剩最后一个问题 即不连着也行
struct article
{
    string name[10];
    string realname;
    int times;
    int num=0;
    int key=0;
};

bool cmp(article a1,article a2)
{
    if(a1.times!=a2.times) return a1.times>a2.times;
    else return a1.key<a2.key;
}

int main()
{
    int T;
    while(cin>>T&&T!=0)
    {
        int n,puttimes;string putstr;
        cin.get();
        article a[T];
        for(int i=0;i<T;i++)
        {
            getline(cin,putstr);
            //cout<<putstr<<endl;
            a[i].realname=putstr;
            cin>>puttimes;
            a[i].times=puttimes;
            a[i].key=i;
            cin.get();
            //cout<<a[i].realname<<" "<<a[i].times<<" "<<a[i].key<<endl;
            for(int j=0;j<putstr.length();j++)
            {
                if(putstr[j]<='Z'&&putstr[j]>='A') putstr[j]=putstr[j]-'A'+'a';
            }
            string s;
            stringstream ss;
            ss<<putstr;
            while(ss>>s)
            {
                a[i].name[a[i].num]=s;
                a[i].num++;
                //cout<<s<<" ";
            }
            //cout<<endl;
        }
        sort(a,a+T,cmp);
        //for(int i=0;i<T;i++) cout<<a[i].realname<<endl;目前还没有问题
        cin>>n; cin.get();
        string b[10];
        for(int i=0;i<n;i++)
        {
            getline(cin,putstr);
            //cout<<putstr<<endl;
            for(int j=0;j<putstr.length();j++)
            {
                if(putstr[j]<='Z'&&putstr[j]>='A') putstr[j]=putstr[j]-'A'+'a';
            }
            string s;
            stringstream ss;
            ss<<putstr;
            //cout<<putstr<<endl;
            int n1=0;
            while(ss>>s)
            {
                b[n1]=s;
                //cout<<s<<" ";
                n1++;
            }
            //cout<<endl;
            for(int j=0;j<T;j++)
            {
                bool last=1;
                for(int v=0;v<n1;v++)
                {
                    bool flag=0;
                    for(int k=0;k<a[j].num;k++)
                    {
                        if(b[v]==a[j].name[k])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(!flag) last=0;
                }
                if(last)
                {
                    cout<<a[j].realname<<endl;
                }
            }
            cout<<"***"<<endl;
        }
        cout<<"---"<<endl;
    }
    cin.get();
    return 0;
}
