#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    while(cin>>n && n!=0)
    {
        int a[n];
        double sum=0.0;
        for(int i=0;i<n;i++)
        {
            double put;
            cin>>put;
            a[i]=put;
            sum+=put;
        }
        double avg=sum/n;
        double f=0.0;
        for(int i=0;i<n;i++)
        {
            f+=((avg-a[i])*(avg-a[i]));
        }
        double avgf = f/n;
        v.push_back(int(avgf));
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
