#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int pos;
	if(!n%2) pos=n/2-1;//偶数
	else pos=n/2;
	int left,right;
	left=right=pos;//从1开始
	arr[pos][pos]=1;

	for(int i=2,temp=1; i<=n*n; temp++)
    {
		if(temp%2==1)  //temp为奇数 这个循环是向右下走
		{
			for(int k=0; k<temp&&i<=n*n; k++)//往右走
            {
                right++;
                arr[left][right]=i;
                i++;
            }
			for(int k=0; k<temp&&i<=n*n; k++)//变方向，往下走
            {
                left++;
                arr[left][right]=i;
                i++;
            }
		}
		else //temp为偶数，这个循环是往左上走
		{
			for(int k=0; k<temp&&i<=n*n; k++)//往左走
            {
                right--;
                arr[left][right]=i;
                i++;
            }
			for(int k=0; k<temp&&i<=n*n; k++)//变方向，往上走
            {
                left--;
                arr[left][right]=i;
                i++;
            }
		}
	}

	for(int i=0; i<n; i++) //输出数组
	{
		for(int j=0; j<n; j++) cout<<arr[i][j]<<' ';
		cout<<endl;
	}
	return 0;

}
