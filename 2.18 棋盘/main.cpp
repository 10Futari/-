#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,maxlen=0,maxnum=0;
	bool matrix[n][n];
	bool putnum;
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>putnum;
            matrix[i][j]=putnum;
        }
    }

    for(int i=n;i>0;i--)//从n开始递减
    {
        int posx=0,posy=0;
        for(int j=0;j<pow(n-i+1,2);j++)//1 4 9...种
        {
            for(int x=posx;x<n;x++)
            {
                for(int j=posy;y<n;y++)
                {

                }
            }
        }
    }
	return 0;
}
