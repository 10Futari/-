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
            for(int k=0;k<v.size();k++)//��Ȼac ����д�Ļ���������
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


//���ϴ��루��һ����ȫ��ȷ��
#include<bits/stdc++.h>
using namespace std;
struct TP{//��������ÿһ�ŷ�Ʊ
    char type;//����
    char a;//ð��
    double price;//����
};
int main(){
    while(1){
    double  Q  ;//�����
    int N;//��Ʊ����
    cin>>Q>>N;
    if(N==0) break;
    int t=0;//���ڼ��������ж����ŷ�Ʊ�Ƿ��ϱ���Ҫ���
    double legal[N];//���㱨��Ҫ���ÿ�ŷ�Ʊ���ܶ�
    while(N--){
        int count;//���ŷ�Ʊ��������Ʒ�ļ���
        cin>>count;
        TP tp[count];
        double flag=0,sum1=0;//sum1Ϊÿ�ŷ�Ʊ�ܶ�
        for(int i=0;i<count;i++){
            cin>>tp[i].type>>tp[i].a>>tp[i].price;
            if((tp[i].price>600)||(tp[i].type!='A'&&tp[i].type!='B'&&tp[i].type!='C')){//�������ķ�Ʊ����ΪA,B,C,���۲�����600Ԫ
                flag=1;
            }
            sum1+=tp[i].price;
        }
        if(sum1<=1000&&flag==0&&sum1<=Q){//ÿ�ŷ��ϱ����ķ�Ʊ���ܶ����1000Ԫ���������ķ�Ʊ����ΪA,B,C,���۲�����600Ԫ��
            legal[t]=sum1;//���ҷ�Ʊ�ܶ�ܳ��������ܶ�sum,���������ķ�Ʊ���ܶ����legal������
            t++;
        }
    }
    double dp[t];//��i��β�������
    double max_sum=0.00;
    for(int i=0;i<t;i++){
        dp[i]=legal[i];//�����Ǳ�����һ�ŷ�Ʊ
        for(int j=0;j<i;j++){
            if(dp[j]+legal[i]>=dp[i]&&dp[j]+legal[i]<=Q){//��������d[j]+legal[i]<=Q;�ſ���ת��
                dp[i]=dp[j]+legal[i];
            }
        }
        max_sum=max(dp[i],max_sum);
    }
    cout<<fixed<<setprecision(2)<<max_sum<<endl;
    }
    return 0;
}
















