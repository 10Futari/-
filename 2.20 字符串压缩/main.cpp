//有一组测试集过不了 需使用动态规划（dp）来写
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int money=0;
    money+=a;
    string qian,hou;//qian为前面一部分，hou为后面一部分
    for(int k=1;k<n;k++)
    {
        bool flag=false;//通过循环找到即为真
        qian=s.substr(0,k);  //substr(0,k)为 s从[0,k)字符

        for(int j=1;j<n;j++)
        {
           hou=s.substr(k,n-j); //hou从最长的可能情况开始
           if(qian.find(hou)!=string::npos)  //hou是qian的子串 即找到
           {
               int len=hou.length();
               if(b<=a*len)
               {
                   money+=b;
                   flag=true;
                   k+=n-j-1;
                   break;
               }
           }
        }
        if(flag==false) money+=a;
    }

    cout<<money<<endl;
    return 0;
}

