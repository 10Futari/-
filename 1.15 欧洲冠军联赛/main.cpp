#include <bits/stdc++.h>
using namespace std;

struct Team
{
    string name;
    int score=0;//����
    int ncount=0;//��ʤ��
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
        Team team[4];//��֧����
        string team1,team2,vs;//vs(string)=vs.����vs����vs.
        int score1,score2;
        map<string,int> maps;
        int remark=0;//�Ĵμ���
        for(int i=0;i<12;i++)//ʮ�������
        {
            cin>>team1>>score1>>vs>>score2>>team2;

            if(remark < 4 && maps.find(team1)== maps.end())//ֻ���ĸ���&&�������û�г��ֹ�
            {
                team[remark].name=team1;
                maps[team1]=remark;//�ѹؼ��֣���������������±��Ӧ����������֮�����
                remark++;
            }
            if(remark < 4 && maps.find(team2)== maps.end())//���������������Ҫ�ж�
            {
                team[remark].name=team2;
                maps[team2]=remark;
                remark++;
            }
            int n1 = maps[team1], n2 = maps[team2];//����ӳ�䵽�����±���ĺܷ���ѽ
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
        sort(team, team + 4, cmp);//��cmp������������
        cout << team[0].name << " " << team[1].name << endl;
    }
    return 0;
 }

