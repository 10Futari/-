#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1002]={0};//从前往后存储
	int b;
	cin>>a>>b;
	int len=strlen(a),h=a[0]-'0',q=0;//初始化len为A的位数，h为A的首位，q为0，因为对于第一位来说没有进位
	if(len==1)//如果A只有一位
	{
		cout<<h/b<<" "<<h%b<<endl;
		return 0;//main函数return 0；程序直接结束
	}
	if(h/b==0)//A有多位并且首位比B小
		q=h;
	else//A有多位并且首位大于等于B
	{
		cout<<h/b;
		q=h%b;
	}
	int i=1;
	while(a[i]!=0)//字符数组结束标志为ASCII码值0
	{
		h=a[i]-'0';
		i++;
		cout<<(q*10+h)/b;
		q=(q*10+h)%b;
	}
	cout<<" "<<q;
	return 0;
}
