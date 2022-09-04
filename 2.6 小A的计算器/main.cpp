#include <bits/stdc++.h>

using namespace std;
int val(string *s)
{
    if (*s=="a") return 0; if (*s=="k") return 10; if (*s=="u") return 20;
    if (*s=="b") return 1; if (*s=="l") return 11; if (*s=="v") return 21;
    if (*s=="c") return 2; if (*s=="m") return 12; if (*s=="w") return 22;
    if (*s=="d") return 3; if (*s=="n") return 13; if (*s=="x") return 23;
    if (*s=="e") return 4; if (*s=="o") return 14; if (*s=="y") return 24;
    if (*s=="f") return 5; if (*s=="p") return 15; if (*s=="z") return 25;
    if (*s=="g") return 6; if (*s=="q") return 16;
    if (*s=="h") return 7; if (*s=="i") return 17;
    if (*s=="i") return 8; if (*s=="s") return 18;
    if (*s=="j") return 9; if (*s=="t") return 19;
}
void out(int n)
{
    if(n==0) cout<<"a";if(n==10) cout<<"k";if(n==20) cout<<"u";
    if(n==1) cout<<"b";if(n==11) cout<<"l";if(n==21) cout<<"v";
    if(n==2) cout<<"c";if(n==12) cout<<"m";if(n==22) cout<<"w";
    if(n==3) cout<<"d";if(n==13) cout<<"n";if(n==23) cout<<"x";
    if(n==4) cout<<"e";if(n==14) cout<<"o";if(n==24) cout<<"y";
    if(n==5) cout<<"f";if(n==15) cout<<"p";if(n==25) cout<<"z";
    if(n==6) cout<<"g";if(n==16) cout<<"q";
    if(n==7) cout<<"h";if(n==17) cout<<"i";
    if(n==8) cout<<"i";if(n==18) cout<<"s";
    if(n==9) cout<<"j";if(n==19) cout<<"t";
}
int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int ans[10];
        for(int i=0;i<10;i++) ans[i]=-1;
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()>s2.size())
        {
            string temp=s1;
            s1=s2;
            s2=temp;
        }
        for(int j=0;j<s1.size();j++)
        {
        	string temp1,temp2;
        	temp1.push_back(s1[s1.size()-1-j]);
        	temp2.push_back(s2[s1.size()-1-j]);
            if(val(&temp1)+val(&temp2)>=26)
            {
                ans[1+j]++;
                ans[j]=val(&temp1)+val(&temp2)-26;
            }
            else
            {
            	ans[j]=val(&temp1)+val(&temp2);
			}
        }
        for(int i=s1.size();i<s2.size();i++)
        {
            string temp1;
            temp1.push_back(s2[s2.size()-1-i]);
            ans[i]+=val(&temp1)+1;
        }

        int cnt;
        for(int i=0;i<10;i++)
        {
            if(ans[i]==-1)
            {
                cnt=i;
                break;
            }
        }
        if(ans[1]==1&&ans[0]==3) ans[0]--;

        for(int i=cnt-1;i>=0;i--)
            out(ans[i]);
    }
    return 0;
}
