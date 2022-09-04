#include <bits/stdc++.h>
using namespace std;

map<string,string> mzandgn;//mz代表魔咒 gn代表功能

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str=="@END@") break;
        int p=str.find("]");
        string mz=str.substr(0,p+1),gn=str.substr(p+2);
        mzandgn[mz] = gn;
        mzandgn[gn] = mz;
    }
    int n; cin>>n;
    getchar();//吸收空格
    string putstr;
    for(int i=0;i<n;i++)
    {
        getline(cin,putstr);
        map<string,string>::iterator iter;
        iter = mzandgn.find(putstr);
        if(iter != mzandgn.end())
        {
        	string ansgn=iter->second;
        	if(ansgn[0]=='[')
        	{
        		string ans = ansgn.substr(1,ansgn.size()-2);
        		cout<<ans<<endl;
			}
			else cout<<iter->second<<endl;
		}

        else
            cout<<"what?"<<endl;
    }
    return 0;
}
