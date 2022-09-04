#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    string id;
    int score;
};

bool cmp(student s1,student s2)
{
    return s1.score>s2.score;
}

int main()
{
    int n; cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        string putname,putid;int putscore;
        cin>>putname>>putid>>putscore;
        s[i].name=putname;
        s[i].id=putid;
        s[i].score=putscore;
    }
    sort(s,s+n,cmp);
    cout<<s[0].name<<" "<<s[0].id<<endl;
    cout<<s[n-1].name<<" "<<s[n-1].id<<endl;
    return 0;
}
