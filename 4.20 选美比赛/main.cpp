#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;int a[n];
    set<int> s;//�Զ���������
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	s.insert(a[i]);//a[i]Ϊ�÷�
	}
    int len=s.size(),f[len];//fΪ ����->�÷�
    for(int i=0;i<len;i++)
    {
    	f[i] = *(--s.end());
    	s.erase(f[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(a[i]==f[j])
			{
				cout<<j+1<<" ";
				break;
			}
		}
	}
	return 0;
}
