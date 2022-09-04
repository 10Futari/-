#include <bits/stdc++.h>
using namespace std;

struct Team
{
    string name;
    int score=0;//积分
    int ncount=0;//净胜球
};

bool cmp(Team a, Team b)
{
    if (a.score==b.score) return a.ncount>b.ncount;
    else return a.score>b.score;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        Team team[4];//四支队伍
        string team1,team2,vs;//vs(string)=vs.即用vs接收vs.
        int score1,score2;
        map<string,int> maps;
        int remark=0;//四次即可
        for(int i=0;i<12;i++)//十二组比赛
        {
            cin>>team1>>score1>>vs>>score2>>team2;

            if(remark < 4 && maps.find(team1)== maps.end())//只有四个队&&这个队名没有出现过
            {
                team[remark].name=team1;
                maps[team1]=remark;//把关键字（队名）与数组的下标对应起来，方便之后访问
                remark++;
            }
            if(remark < 4 && maps.find(team2)== maps.end())//输入的两个队名都要判断
            {
                team[remark].name=team2;
                maps[team2]=remark;
                remark++;
            }
            int n1 = maps[team1], n2 = maps[team2];//队名映射到数组下标真的很方便呀
            if(score1!=score2)
            {
                if(score1>score2)
                {
                    team[n1].score+=3;
                    team[n1].ncount+=abs(score1-score2);
                    team[n2].ncount-=abs(score1-score2);
                }
                else
                {
                    team[n2].score+=3;
                    team[n2].ncount+=abs(score1-score2);
                    team[n1].ncount-=abs(score1-score2);
                }
            }
            else
            {
                team[n1].score+=1;
                team[n2].score+=1;
            }
        }
        sort(team, team + 4, cmp);//按cmp函数方法排序
        cout << team[0].name << " " << team[1].name << endl;
    }
    return 0;
 }

