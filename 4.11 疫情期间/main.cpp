#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], b[n];//aΪ�ɹ�ѡ�� bΪʵ��ѡ��
	for(int i = 0; i < n; i++)
    {
		cin >> a[i];
		b[i] = 0;
	}
	b[0] = a[0];

	for(int i = 0; i < n - 1; i++)
    {
		if(a[i+1]==b[i]&&(b[i]==1||b[i]==2)) b[i+1]=0;
		else if(a[i+1]==3&&(b[i]==1||b[i]==2)) b[i+1]=3-b[i];
		else b[i+1]=a[i+1];
	}

	cout<<count(b, b + n, 0);//ͳ������b��0���ִ���
	return 0;
}
