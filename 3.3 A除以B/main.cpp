#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1002]={0};//��ǰ����洢
	int b;
	cin>>a>>b;
	int len=strlen(a),h=a[0]-'0',q=0;//��ʼ��lenΪA��λ����hΪA����λ��qΪ0����Ϊ���ڵ�һλ��˵û�н�λ
	if(len==1)//���Aֻ��һλ
	{
		cout<<h/b<<" "<<h%b<<endl;
		return 0;//main����return 0������ֱ�ӽ���
	}
	if(h/b==0)//A�ж�λ������λ��BС
		q=h;
	else//A�ж�λ������λ���ڵ���B
	{
		cout<<h/b;
		q=h%b;
	}
	int i=1;
	while(a[i]!=0)//�ַ����������־ΪASCII��ֵ0
	{
		h=a[i]-'0';
		i++;
		cout<<(q*10+h)/b;
		q=(q*10+h)%b;
	}
	cout<<" "<<q;
	return 0;
}
