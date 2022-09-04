#include <bits/stdc++.h>
using namespace std;

struct Driver
{
    string name="";
    int point=0;//总分
    int time[105]={0};//获得各个排名的次数
};

bool cmp1(Driver a,Driver b)
{
    if(a.point!=b.point) return a.point>b.point;
    else
    {
        for(int k=0;k<105;k++)
        {
            if(a.time[k]!=b.time[k]) return a.time[k]>b.time[k];
        }
    }
}

bool cmp2(Driver a,Driver b)
{

    if(a.time[0]==b.time[0]&&a.point==b.point)
    {
        for(int k=1;k<105;k++)
        {
            if(a.time[k]!=b.time[k]) return a.time[k]>b.time[k];
        }
    }
    else if(a.time[0]==b.time[0]&&a.point!=b.point) return a.point>b.point;
    else return a.time[0]>b.time[0];
}

int main()
{
    map<int,int> m;//名次->分数
    m[1]=25; m[2]=18;
    m[3]=15; m[4]=12;
    m[5]=10; m[6]=8;
    m[7]=6; m[8]=4;
    m[9]=2; m[10]=1;
    int cnt=0;//统计共有多少名driver
    Driver driver[105];
    int T; cin>>T;
    for(int i=0;i<T;i++)//T次分站赛
    {
        int n; cin>>n;//n个人参加
        int t=0;
        for(int j=0;j<n;j++)
        {
            string putname; cin>>putname; t++;//排名从1开始
            bool flag=1;
            for(int h=0;h<105;h++)
            {
                if(driver[h].name==putname)
                {
                    if(t<=10) driver[h].point+=m[t];
                    flag=0;
                    driver[h].time[t-1]++;
                    break;
                }
            }
            if(flag)
            {
                driver[cnt].name=putname;
                if(t<=10) driver[cnt].point+=m[t];
                driver[cnt].time[t-1]++;
                cnt++;
            }
        }
    }
    sort(driver,driver+cnt,cmp1);
    cout<<driver[0].name<<endl;
    sort(driver,driver+cnt,cmp2);
    cout<<driver[0].name<<endl;
    return 0;
}
