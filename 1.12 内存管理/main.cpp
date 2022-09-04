#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 3;
int t, m;
int a[N];
char opt[10];

int main()
{
    int cur = 0;
    cin>>t>>m;
    while(t--)
	{
        cin>>opt;
        if(opt[0] == 'a')
		{
            int n;
            cin>>n;
            int pos = -1;
            for(int l = 1, r; l <= m; l = r + 1)
			{
                r = l;
                for(r; r <= m && r - l + 1 <= n; r++)
                    if(a[r] != 0)
                        break;
                if(r - l == n)
				{
                    pos = l;
                    break;
                }
            }
            if(pos == -1)
			{
                cout<<"NULL"<<endl;
            }
			else
			{
                cur++;
                for(int i = pos; i - pos + 1 <= n; i++)
                    a[i] = cur;
                cout<<cur<<endl;
            }
        }
		else if(opt[0] == 'e')
		{
            int x;
            cin>>x;
            bool flag = false;
            for(int i = 1; i <= m; ++i)
                if(a[i] == x)
				{
                    flag = true;
                    a[i] = 0;
                }
            if(!flag) cout<<"ILLEGAL_ERASE_ARGUMENT"<<endl;
        }
		else
		{
            int cur = 0;
            for(int i = 1; i <= m; ++i)
                if(a[i])
				{
                    a[++cur] = a[i];
                    if(cur < i) a[i] = 0;
                }
        }
    }
    return 0;
}
