#include <bits/stdc++.h>

using namespace std;
double jidian(int n)
{
    if(n>=90) return 4.00;
    if(n>=85&&n<=89) return 3.70;
    if(n>=82&&n<=84) return 3.30;
    if(n>=78&&n<=81) return 3.00;
    if(n>=75&&n<=77) return 2.70;
    if(n>=72&&n<=74) return 2.30;
    if(n>=68&&n<=71) return 2.00;
    if(n>=64&&n<=67) return 1.50;
    if(n>=60&&n<=63) return 1.00;
    if(n<60) return 0.0;
}

int main()
{
    int n;cin>>n;
    double xue[n],tol=0.00,tolj=0.00;
    for(int i=0;i<n;i++)
    {
        double xuefen;cin>>xuefen;
        xue[i]=xuefen;
        tol+=xuefen;
    }
    for(int i=0;i<n;i++)
    {
        double chengji;cin>>chengji;
        tolj+=jidian(chengji)*xue[i];
    }
    cout << fixed << setprecision(2) << tolj/tol;
    return 0;
}
