#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string id;
    int month;
    int day;
};

bool cmp(Student s1,Student s2)
{
    if(s1.month==s2.month) return s1.day<s2.day;
    else return s1.month<s2.month;
}

int main()
{
    int n;cin>>n;
    if(n==0) return 0;
    Student st[10000];
    for(int i=0;i<n;i++)
    {
        string pid;int pmonth,pday;
        cin>>pid>>pmonth>>pday;
        st[i].id=pid;
        st[i].month=pmonth;
        st[i].day=pday;
    }
    sort(st,st+n,cmp);
    cout<<st[0].month<<" "<<st[0].day<<" "<<st[0].id<<" ";
    for(int i=1;i<n;i++)
    {
        if(st[i].month==st[i-1].month&&st[i].day==st[i-1].day) cout<<st[i].id<<" ";
        else
        {
            cout<<endl;
            cout<<st[i].month<<" "<<st[i].day<<" "<<st[i].id<<" ";
        }
    }
    return 0;
}
