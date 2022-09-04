#include <bits/stdc++.h>
using namespace std;

char real(char s)
{
    if (s=='>') return '<';
    if (s=='}') return '{';
    if (s==']') return '[';
    if (s==')') return '(';
}

int main()
{
	int n; cin >> n;
	stack<char> s;
	bool flag = 1;
	for (int i=0; i<n; i++)
        {
            string str; cin>>str; getchar();
            int cnt = str.length();
            for(int j=0; j<cnt; j++)
            {
                if(str[j]!='>'&&str[j]!='}'&&str[j]!=']'&&str[j]!=')') s.push(str[j]);
                else if(!s.empty()&&real(str[j])==s.top()) s.pop();
                else if(s.empty()) flag = 0;
                else flag = 0;
            }
            if(!s.empty()) flag = 0;
            while(!s.empty()) s.pop();
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            flag = 1;
        }
    return 0;
}

