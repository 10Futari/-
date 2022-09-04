#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int a[n],b[n+1],c[n+1];//展开式包含常数项有n+1个系数
        for(int i=0;i<n;i++) cin>>a[i];
        b[n]=1;//展开式中最高项系数为1
        for(int i=n-1;i>=0;i--) cin>>b[i];
        c[0]=a[0];c[1]=1;

        for(int i=2;i<=n;i++)
        {
            for(int j=i;j>=0;j--)
            {
            	if(j==i)   c[j]=1;//局部最高项（固定i，j--）
            	else if(j==0)  c[j]*=a[i-1];//常数项相乘
                else  c[j]=c[j]*a[i-1]+c[j-1];
            }
        }

        int flag=0;
        for(int i=0;i<=n;i++)
        {
        	if(b[i]!=c[i])
         	{
            	cout<<"N"<<endl;
            	flag=1;
            	break;
        	}
		}
        if(flag==0)
        cout<<"Y"<<endl;
    }
    return 0;
}

