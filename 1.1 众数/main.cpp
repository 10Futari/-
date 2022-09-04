#include <iostream>

using namespace std;

int maxA(int a[],int n) //数组a已经从小到大排好序
{
    int k,maxk=0,maxval=a[0]; //maxk记录最大出现次数，max记录最大出现次数的值
    for(int i=0;i<n;i++) //遍历数组a中的元素，对当前元素a[i]，让它与它之前的每个元素相比较，计算出现的次数k
    {
        k=0;
        for(int j=0;j<=i;j++)
        {
            if(a[j]==a[i])
            {
                k++;
                if(k>maxk)
                {
                    maxk=k;
                    maxval=a[j];
                }
            }
        }
    }
    return maxval;
}


int main()
{
    int ans[101];
    int i=0;
    for(i;;i++)
    {
        int n;
        cin>>n;
        if (n != 0)
            {
                int a[n];
                for(int j=0;j<n;j++)
                {
                    int x;
                    cin>>x;
                    a[j] = x;
                }
                ans[i]=maxA(a,n);
            }
            else goto a;
    }
    a : for(int s=0;s<i;s++) cout<<ans[s]<<endl;

}
