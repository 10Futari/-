//��ֺ�ǰ׺�����Ż�ʱ�临�Ӷ�
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;cin>>n>>m>>k;//���мƻ���Ŀ ��ѯ���� kΪ�ȴ�������������ʱ��
    int t[n],need[n];//tΪ���볡��ʱ�� needΪ��Ҫ����Сʱ����
    for(int i=0;i<n;i++)//n�����мƻ�
    {
        cin>>t[i]>>need[i];
    }

    for(int i=0;i<m;i++)//m����ѯ
    {
        int q; cin>>q;//�������ʱ��
        int cnt=0;
        for(int j=0;j<n;j++)//�������е�t��need
        {
            if(q+k<=t[j]&&t[j]<=q+k+need[j]-1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
