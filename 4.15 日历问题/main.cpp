#include <bits/stdc++.h>
using namespace std;

bool isyear(int n)
{
    if(n%4!=0||(n%100==0&&n%400!=0)) return 0;
    return 1;
}

int main()
{
    map<int, string> m = {{2, "Monday"}, {3, "Tuesday"}, {4, "Wednesday"}, {5, "Thursday"}, {6, "Friday"}, {0, "Saturday"}, {1, "Sunday"}};
    int n;
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};//平年对应的月份天数
    int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};//闰年对应的月份天数
    while(cin>>n&&n!=-1)
    {
        int cnt=0,year=2000,month=1,day=1;
        while(cnt<=n)
        {
            if(isyear(year))
            {
                cnt+=366;
                year++;
            }
            else
            {
                cnt+=365;
                year++;
            }
        }
        year--;
        if(isyear(year)) cnt-=366;
        else cnt-=365;
        int left=n-cnt;
        if(isyear(year))
        {
            for(int i=0;i<12;i++)
            {
                left-=b[i];
                if(left<0)
                {
                    left+=b[i];
                    month=i+1;
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<12;i++)
            {
                left-=a[i];
                if(left<0)
                {
                    left+=a[i];
                    month=i+1;
                    break;
                }
            }
        }
        day=left+1;
        int leave=n%7;
        if(month>=10&&day>=10) cout<<year<<"-"<<month<<"-"<<day<<" "<<m[leave]<<endl;
        else if(month<10&&day>=10) cout<<year<<"-0"<<month<<"-"<<day<<" "<<m[leave]<<endl;
        else if(month>=10&&day<10) cout<<year<<"-"<<month<<"-0"<<day<<" "<<m[leave]<<endl;
        else cout<<year<<"-0"<<month<<"-0"<<day<<" "<<m[leave]<<endl;
    }
    return 0;
}
