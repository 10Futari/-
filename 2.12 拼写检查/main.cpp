#include <bits/stdc++.h>
using namespace std;

int main()
{
    string z[100],a;
    int n=0,i;
    string put;
    while(cin>>put && put != "#")
    {
        z[n]=put;
        n++; //ͳ�������ַ�����
    }
    while(cin>>a && a != "#")
    {
        for(i=0;i<n;i++)
        {
            if(z[i]==a)
            {
                cout<<a<<" is correct"<<endl;
                break;
            }
        }//������򵥵���������һ��ֱ����ȷ
        int len=a.length();//�����������ַ����ĳ��Ƚ��бȶԲ鲻�����ʵ�ʱ��ĸ������
        if(i==n) //����Ȼ���ǲ���һ��û����ȷ�𰸵����
        {
            cout<<a<<":";
            for(int j=0;j<n;j++)//n��Ԫ�ض��������
            {
                int t=0;

                if(len==z[j].length())//���ֵ䵥�ʴ��ڳ�����ͬʱ����ƴд�����������ֻ��һ����ͬ��
                {
                    for(int k=0;k<len;k++)
                    {
                        if(a[k]!=z[j][k]) t++;//ͳ�Ʋ�ͬ�ĸ���
                    }
                    if(t==1)
                    {
                        cout<<' '<<z[j];//ֻ��һ����ĸ��ͬ������¾�������ֵ䵥��
                    }
                }

                else if(len+1==z[j].length())//ȱһ��ĸ���
                {
                    int l=0;
                    for(int k=0;k<z[j].length();k++)
                    {
                        if(a[l]!=z[j][k])//��Ӧ���ϵ�ʱ���ȳ��Դ��ֵ䵥����һλ��ʼ��Ӧ
                            t++; 		//��Ӧ���ϣ�ͳ�Ƽ�һ
                        else
                            l++;		//��Ӧ���ˣ�������Ӧ��һλ
                    }
                    if(t==1)
                    {		//ֻȱһλ������¾�������ֵ䵥��
                        cout<<' '<<z[j];
                    }
                }

                else if(len==z[j].length()+1)//��һ��ĸ���
                {
                    int l=0;
                    for(int k=0;k<len;k++)
                    {
                        if(a[k]!=z[j][l])
                            t++;
                        else
                            l++;
                    }//cv�󷨺�
                    if(t==1)
                    {
                        cout<<' '<<z[j];//ֻ��һλ������¾�������ֵ䵥��
                    }
                }
            }
            cout<<endl;
        }
    }
}
