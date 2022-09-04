#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num, judge;
    cin >> num;
    judge = num + num;      //输入123456，生成123456123456，用来比对循环数
    int len = num.length(); //输入数的位数
    bool flag = 1;       //是否是循环数，true是，false不是

    string str = num;       //原数*n之后的数
    for (int i = 2; i <= len; i++) //1倍不用算，从原数的2到len倍
    {
        int temp = 0;
        for (int j = len - 1; j >= 0; j--) //从低位到高位写入
        {
            temp = (num[j] - '0') * i + temp; //(原数该位数*i)+(前一位*i/10)
            str[j] = temp % 10 + '0';         //得到对应位的数字
            temp = temp / 10;                 //大于等于10的进位
        }
        //cout << str << endl;

        int p = judge.find(str);   //在judge中查找com
        if (p == judge.npos) //找不到（com与原数的数字顺序不同）
        {
            flag = 0; //不是循环数
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}








/*int to_number(string a)
{
    int number=0;
	for(int i=0;i<a.length();++i)
		number=number*10+a[i]-'0';
	return number;
}

bool xh(string s1,string s2)
{
    int n = s1.length();
    bool tempFlag=1;
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            if(s1[k] != s2[(k+i)%n])
            {
                tempFlag = 0;
            }
        }
        if(tempFlag)
        {
            return 1;
        }
        else tempFlag=1;
    }
    return 0;
}

int main()
{
    string str; cin>>str;
    //cout<<str<<endl;
    int len = str.size();
	bool flag=1;
	int num;string s;
	for(int i=2;i<=len;i++)
    {
        num=to_number(str)*i;
        s=to_string(num);
        if(s.length()>len)
        {
            flag=0;
            break;
        }
        if(s.length()<len)
        {
            s="0"+s;
        }
        cout<<s<<endl;
        if(!xh(s,str)) flag=0;
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}*/
