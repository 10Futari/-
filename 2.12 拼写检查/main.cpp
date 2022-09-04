#include <bits/stdc++.h>
using namespace std;

int main()
{
    string z[100],a;
    int n=0,i;
    string put;
    while(cin>>put && put != "#")
    {
        z[n]=put;
        n++; //统计输入字符个数
    }
    while(cin>>a && a != "#")
    {
        for(i=0;i<n;i++)
        {
            if(z[i]==a)
            {
                cout<<a<<" is correct"<<endl;
                break;
            }
        }//这是最简单的情况，如果一样直接正确
        int len=a.length();//接下来利用字符串的长度进行比对查不到单词的时候的各种情况
        if(i==n) //很显然这是查了一遍没有正确答案的情况
        {
            cout<<a<<":";
            for(int j=0;j<n;j++)//n个元素都进行审查
            {
                int t=0;

                if(len==z[j].length())//与字典单词存在长度相同时（即拼写错误情况，且只有一个不同）
                {
                    for(int k=0;k<len;k++)
                    {
                        if(a[k]!=z[j][k]) t++;//统计不同的个数
                    }
                    if(t==1)
                    {
                        cout<<' '<<z[j];//只有一个字母不同的情况下就能输出字典单词
                    }
                }

                else if(len+1==z[j].length())//缺一字母情况
                {
                    int l=0;
                    for(int k=0;k<z[j].length();k++)
                    {
                        if(a[l]!=z[j][k])//对应不上的时候，先尝试从字典单词下一位开始对应
                            t++; 		//对应不上，统计加一
                        else
                            l++;		//对应上了，继续对应下一位
                    }
                    if(t==1)
                    {		//只缺一位的情况下就能输出字典单词
                        cout<<' '<<z[j];
                    }
                }

                else if(len==z[j].length()+1)//多一字母情况
                {
                    int l=0;
                    for(int k=0;k<len;k++)
                    {
                        if(a[k]!=z[j][l])
                            t++;
                        else
                            l++;
                    }//cv大法好
                    if(t==1)
                    {
                        cout<<' '<<z[j];//只多一位的情况下就能输出字典单词
                    }
                }
            }
            cout<<endl;
        }
    }
}
