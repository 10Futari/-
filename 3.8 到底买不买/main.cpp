#include <bits/stdc++.h>
using namespace std;

int main()
{
    string given,want; cin>>given>>want;
    int givenarr[62]={0},wantarr[62]={0};
    for(int i=0;i<given.length();i++)
    {
        if(given[i]<='9'&&given[i]>='0') givenarr[given[i]-'0']++;
        else if(given[i]<='Z'&&given[i]>='A') givenarr[given[i]-'A'+10]++;
        else if(given[i]<='z'&&given[i]>='a') givenarr[given[i]-'a'+36]++;
    }

    for(int i=0;i<want.length();i++)
    {
        if(want[i]<='9'&&want[i]>='0') wantarr[want[i]-'0']++;
        else if(want[i]<='Z'&&want[i]>='A') wantarr[want[i]-'A'+10]++;
        else if(want[i]<='z'&&want[i]>='a') wantarr[want[i]-'a'+36]++;
    }

    bool flag=1;
    int cnt=0;
    for(int i=0;i<62;i++)
    {
        if(givenarr[i]<wantarr[i])
        {
            flag=0;
            cnt+=wantarr[i]-givenarr[i];
        }
    }
    if(flag) cout<<"Yes "<<given.length()-want.length()<<endl;
    else cout<<"No "<<cnt<<endl;
    return 0;
}
