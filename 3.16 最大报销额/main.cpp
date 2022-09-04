#include <bits/stdc++.h>
using namespace std;

int main()
{
    double q; int n;
    while(cin>>q>>n&&n!=0)
    {
        vector<double> v;
        double sum = 0.0;
        for(int i=0;i<n;i++)
        {
            double one = 0.0;
            bool flag = 1;
            int m; cin>>m;

            for(int j=0;j<m;j++)
            {
                string putstr; cin>>putstr;
                if(putstr[0]<='C'&&putstr[0]>='A')
                {
                    string str = putstr.substr(2);
                    istringstream is(str);
                    double putnum;
                    is >> putnum;
                    if(putnum<=600.0) one+=putnum;
                    else flag = 0;
                }
                else flag = 0;
            }
            if(one>1000.0) flag = 0;
            if(flag==1)
            {
                sum+=one;
                v.push_back(one);
            }
        }
        if(sum<=q) cout<<fixed<<setprecision(2)<<sum<<endl;
        else
        {
            sort(v.begin(),v.end());
            for(int k=0;k<v.size();k++)
            {
                sum-=v[k];
                if(sum<=q) break;
            }
            for(int k=0;k<v.size();k++)//虽然ac 但是写的还是有问题
            {
                sum+=v[k];
                if(sum>q)
                {
                    sum-=v[k];
                    cout<<fixed<<setprecision(2)<<sum<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}


//网上代码（不一定完全正确）
#include<bits/stdc++.h>
using namespace std;
struct TP{//用于输入每一张发票
    char type;//类型
    char a;//冒号
    double price;//单价
};
int main(){
    while(1){
    double  Q  ;//最大额度
    int N;//发票张数
    cin>>Q>>N;
    if(N==0) break;
    int t=0;//用于计数，计有多少张发票是符合报销要求的
    double legal[N];//满足报销要求的每张发票的总额
    while(N--){
        int count;//这张发票上所开物品的件数
        cin>>count;
        TP tp[count];
        double flag=0,sum1=0;//sum1为每张发票总额
        for(int i=0;i<count;i++){
            cin>>tp[i].type>>tp[i].a>>tp[i].price;
            if((tp[i].price>600)||(tp[i].type!='A'&&tp[i].type!='B'&&tp[i].type!='C')){//允许报销的发票类型为A,B,C,单价不高于600元
                flag=1;
            }
            sum1+=tp[i].price;
        }
        if(sum1<=1000&&flag==0&&sum1<=Q){//每张符合报销的发票的总额不大于1000元，允许报销的发票类型为A,B,C,单价不高于600元，
            legal[t]=sum1;//而且发票总额不能超过报销总额sum,符合条件的发票的总额存入legal数组中
            t++;
        }
    }
    double dp[t];//以i结尾最大报销额
    double max_sum=0.00;
    for(int i=0;i<t;i++){
        dp[i]=legal[i];//最少是报销这一张发票
        for(int j=0;j<i;j++){
            if(dp[j]+legal[i]>=dp[i]&&dp[j]+legal[i]<=Q){//必须满足d[j]+legal[i]<=Q;才可以转移
                dp[i]=dp[j]+legal[i];
            }
        }
        max_sum=max(dp[i],max_sum);
    }
    cout<<fixed<<setprecision(2)<<max_sum<<endl;
    }
    return 0;
}
















