//��һ����Լ������� ��ʹ�ö�̬�滮��dp����д
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int money=0;
    money+=a;
    string qian,hou;//qianΪǰ��һ���֣�houΪ����һ����
    for(int k=1;k<n;k++)
    {
        bool flag=false;//ͨ��ѭ���ҵ���Ϊ��
        qian=s.substr(0,k);  //substr(0,k)Ϊ s��[0,k)�ַ�

        for(int j=1;j<n;j++)
        {
           hou=s.substr(k,n-j); //hou����Ŀ��������ʼ
           if(qian.find(hou)!=string::npos)  //hou��qian���Ӵ� ���ҵ�
           {
               int len=hou.length();
               if(b<=a*len)
               {
                   money+=b;
                   flag=true;
                   k+=n-j-1;
                   break;
               }
           }
        }
        if(flag==false) money+=a;
    }

    cout<<money<<endl;
    return 0;
}

