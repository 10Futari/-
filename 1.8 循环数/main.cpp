#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num, judge;
    cin >> num;
    judge = num + num;      //����123456������123456123456�������ȶ�ѭ����
    int len = num.length(); //��������λ��
    bool flag = 1;       //�Ƿ���ѭ������true�ǣ�false����

    string str = num;       //ԭ��*n֮�����
    for (int i = 2; i <= len; i++) //1�������㣬��ԭ����2��len��
    {
        int temp = 0;
        for (int j = len - 1; j >= 0; j--) //�ӵ�λ����λд��
        {
            temp = (num[j] - '0') * i + temp; //(ԭ����λ��*i)+(ǰһλ*i/10)
            str[j] = temp % 10 + '0';         //�õ���Ӧλ������
            temp = temp / 10;                 //���ڵ���10�Ľ�λ
        }
        //cout << str << endl;

        int p = judge.find(str);   //��judge�в���com
        if (p == judge.npos) //�Ҳ�����com��ԭ��������˳��ͬ��
        {
            flag = 0; //����ѭ����
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
