#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int pos;
	if(!n%2) pos=n/2-1;//ż��
	else pos=n/2;
	int left,right;
	left=right=pos;//��1��ʼ
	arr[pos][pos]=1;

	for(int i=2,temp=1; i<=n*n; temp++)
    {
		if(temp%2==1)  //tempΪ���� ���ѭ������������
		{
			for(int k=0; k<temp&&i<=n*n; k++)//������
            {
                right++;
                arr[left][right]=i;
                i++;
            }
			for(int k=0; k<temp&&i<=n*n; k++)//�䷽��������
            {
                left++;
                arr[left][right]=i;
                i++;
            }
		}
		else //tempΪż�������ѭ������������
		{
			for(int k=0; k<temp&&i<=n*n; k++)//������
            {
                right--;
                arr[left][right]=i;
                i++;
            }
			for(int k=0; k<temp&&i<=n*n; k++)//�䷽��������
            {
                left--;
                arr[left][right]=i;
                i++;
            }
		}
	}

	for(int i=0; i<n; i++) //�������
	{
		for(int j=0; j<n; j++) cout<<arr[i][j]<<' ';
		cout<<endl;
	}
	return 0;

}
