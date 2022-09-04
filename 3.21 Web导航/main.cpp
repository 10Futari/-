#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> q,h;
    string s,now="http://www.game.org/";
    while(cin>>s)
    {
        if(s=="VISIT")
        {
            string put; cin>>put;
            h.push(now);
            while(!q.empty()) q.pop();//Çå¿Õ
            now=put;
            cout<<put<<endl;
        }

        else if(s=="BACK")
        {
            if(!h.empty())
            {
                q.push(now);
                cout<<h.top()<<endl;
                now=h.top();
                h.pop();
            }
            else cout<<"Ignored"<<endl;
        }

        else if(s=="FORWARD")
        {
            if(!q.empty())
            {
                h.push(now);
                cout<<q.top()<<endl;
                now=q.top();
                q.pop();
            }
            else cout<<"Ignored"<<endl;
        }

    }

    return 0;
}
