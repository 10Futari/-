#include <bits/stdc++.h>
using namespace std;

struct Team
    {
        string name;
        int points=0;//积分
        int absscore=0;//净胜球
        int goal=0;//进球数
    };

bool cmp(Team a,Team b)
{
	if(a.points!=b.points)return a.points>b.points;
	else if(a.absscore!=b.absscore)return a.absscore>b.absscore;
	else return a.goal>b.goal;
}

int main()
{
    int n; cin>>n;
    Team team[n];
    for(int i=0;i<n;i++)
    {
        string putname; cin>>putname;
        team[i].name=putname;
    }
    for(int i=0;i<n*(n-1)/2;i++)
    {
        string strn,strp; cin>>strn>>strp;
        int p1 = strn.find("-"),p2 = strp.find(":");
        string n1 = strn.substr(0,p1),n2 = strn.substr(p1+1);
        string pp1 = strp.substr(0,p2),pp2 = strp.substr(p2+1);
        int point1,point2;
        istringstream is1(pp1);
        istringstream is2(pp2);
        is1 >> point1; is2 >> point2;
        if(point1>point2)
        {
            for(int i=0;i<n;i++)
            {
                if(team[i].name==n1)
                {
                    team[i].points+=3;
                    team[i].absscore+=(point1-point2);
                    team[i].goal+=point1;
                }
                if(team[i].name==n2)
                {
                    team[i].absscore-=(point1-point2);
                    team[i].goal+=point2;
                }
            }
        }
        if(point1==point2)
        {
            for(int i=0;i<n;i++)
            {
                if(team[i].name==n1 || team[i].name==n2)
                {
                    team[i].points+=1;
                    team[i].goal+=point1;
                }
            }
        }
        if(point1<point2)
        {
            for(int i=0;i<n;i++)
            {
                if(team[i].name==n1)
                {
                    team[i].absscore+=(point1-point2);
                    team[i].goal+=point1;
                }
                if(team[i].name==n2)
                {
                    team[i].points+=3;
                    team[i].absscore-=(point1-point2);
                    team[i].goal+=point2;
                }
            }
        }
    }
    sort(team,team+n,cmp);
    string teams[n/2];
	for(int i=0;i<n/2;i++) teams[i]=team[i].name;
	sort(teams,teams+n/2);//按字典序排列
	for(int i=0;i<n/2;i++) cout<<teams[i]<<endl;
    return 0;
}
