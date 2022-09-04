#include <bits/stdc++.h>
using namespace std;

struct Team
{
    string name="";
    int score=0;
};

bool cmp(Team t1,Team t2)
{
    return t1.score>t2.score;
}

int main()
{
    int n; cin>>n;
    Team team[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        string putname; int putscore;
        cin>>putname>>putscore;
        bool flag=1;
        for(int j=0;j<i+1;j++)
        {
            if(team[j].name==putname)
            {
                team[j].score+=putscore;
                flag=0;
                break;
            }
        }
        if(flag)
        {
            team[cnt].name=putname;
            team[cnt].score+=putscore;
            cnt++;
        }
    }
    sort(team,team+n,cmp);
    cout<<team[0].name<<" "<<team[0].score<<endl;
    return 0;
}
