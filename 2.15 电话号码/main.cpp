#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string name;
    vector<string> num;//存放号码
};

bool cmp(Person p1,Person p2)
{
    return p1.name<p2.name;
}

bool cmp1(string p,string q)//实现电话号码由短到长、由小到大排序
{
    if(p.length()!=q.length()) return p.length()<q.length();
    else return p<q;
}

int main()
{
    int n;cin>>n;
    Person p[20];
    int cnt=0;//人的个数
    for(int i=0;i<n;i++)
    {
        string putname;int n2;
        cin>>putname>>n2;
        bool flag=1;
        for(int j=0;j<cnt;j++)
        {
            if(p[j].name==putname)
            {
                flag=0;
                string putnum;
                for(int e=0;e<n2;e++)
                {
                    cin>>putnum;
                    bool flag1=1;
                    for(int s=0;s<p[j].num.size();s++)
                    {
                        if(p[j].num[s].length()>=putnum.length())
                        {
                            reverse(p[j].num[s].begin(),p[j].num[s].end());
                            reverse(putnum.begin(),putnum.end());
                            int pos=p[j].num[s].find(putnum);
                            if(pos==0) flag1=0;
                            reverse(p[j].num[s].begin(),p[j].num[s].end());
                            reverse(putnum.begin(),putnum.end());
                        }
                        else
                        {
                            reverse(p[j].num[s].begin(),p[j].num[s].end());
                            reverse(putnum.begin(),putnum.end());
                            int pos=putnum.find(p[j].num[s]);
                            if(pos==0)
                            {
                                flag1=0;
                                p[j].num[s]=putnum;
                            }
                            reverse(p[j].num[s].begin(),p[j].num[s].end());
                            reverse(putnum.begin(),putnum.end());
                        }
                    }
                    if(flag1)
                    {
                        //cout<<putnum<<endl;
                        p[j].num.push_back(putnum);
                    }
                }
            }
        }
        if(flag)
        {
            p[cnt].name=putname;
            string putnum;
            for(int j=0;j<n2;j++)//只计数
            {
                cin>>putnum;
                bool flag1=1;
                for(int s=0;s<p[cnt].num.size();s++)
                {
                    if(p[cnt].num[s].length()>=putnum.length())
                    {
                        reverse(p[cnt].num[s].begin(),p[cnt].num[s].end());
                        reverse(putnum.begin(),putnum.end());
                        int pos=p[cnt].num[s].find(putnum);
                        if(pos==0) flag1=0;
                        reverse(p[cnt].num[s].begin(),p[cnt].num[s].end());
                        reverse(putnum.begin(),putnum.end());
                    }
                    else
                    {
                        reverse(p[cnt].num[s].begin(),p[cnt].num[s].end());
                        reverse(putnum.begin(),putnum.end());
                        int pos=putnum.find(p[cnt].num[s]);
                        if(pos==0) flag1=0;
                        reverse(p[cnt].num[s].begin(),p[cnt].num[s].end());
                        reverse(putnum.begin(),putnum.end());
                    }
                }
                if(flag1)
                {
                    //cout<<putnum<<endl;
                    p[cnt].num.push_back(putnum);
                }
            }
            cnt++;
        }
    }
    sort(p,p+cnt,cmp);

    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        sort(p[i].num.begin(),p[i].num.end(),cmp1);//注意vector容器使用sort排序的用法
        cout<<p[i].name<<" "<<p[i].num.size()<<" ";
        for(int j=0;j<p[i].num.size();j++)
            cout<<p[i].num[j]<<" ";
        cout<<endl;
    }
    return 0;
}
