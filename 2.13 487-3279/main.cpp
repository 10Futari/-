#include <bits/stdc++.h>

using namespace std;
char num(string s)
{
    if(s=="A"||s=="B"||s=="C") return '2';
    if(s=="D"||s=="E"||s=="F") return '3';
    if(s=="G"||s=="H"||s=="I") return '4';
    if(s=="J"||s=="K"||s=="L") return '5';
    if(s=="M"||s=="N"||s=="O") return '6';
    if(s=="P"||s=="R"||s=="S") return '7';
    if(s=="T"||s=="U"||s=="V") return '8';
    if(s=="W"||s=="X"||s=="Y") return '9';
}

//下面函数实现删除'-'符号
string del(string&s)
{
	string::iterator it=s.begin();
	for(;it!=s.end();){
	if(*it=='-') it=s.erase(it);
	else it++;
	}
	return s;
}

int main()
{
    int n; cin>>n;
    string all[n];
    string val[n];
    for(int i=0;i<n;i++)
    {
        string str; cin>>str;
        del(str);
        for(int j=0;j<7;j++)
        {
            if(str[j]=='A'||str[j]=='B'||str[j]=='C'||str[j]=='D'||str[j]=='E'||str[j]=='F'||str[j]=='G'||str[j]=='H'||str[j]=='I'||str[j]=='J'||str[j]=='K'||str[j]=='L'||str[j]=='M'||str[j]=='N'||str[j]=='O'||str[j]=='P'||str[j]=='R'||str[j]=='S'||str[j]=='T'||str[j]=='U'||str[j]=='V'||str[j]=='W'||str[j]=='X'||str[j]=='Y')
			{
				string temp;
    			temp.push_back(str[j]);
    			str[j]=num(temp);
			}
        }
        val[i]=str;
        str=str.substr(0, 3) + "-" + str.substr(3);
		all[i]=str;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(val[i]>val[j])
            {
                swap(val[i],val[j]);
                swap(all[i],all[j]);
            }
        }
    }

//再变成数字
    int cnt[n];
    for(int i=0;i<n;i++)
    {
        int num=1;
        for(int j=i+1;j<n;j++)
        {
            if(all[i]==all[j]&&all[i]!="NONEOF") {num++;all[j]="NONEOF";}
        }
        cnt[i]=num;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[i]!=1) cout<<all[i]<<" "<<cnt[i]<<endl;
    }

    return 0;
}
