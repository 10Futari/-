#include<bits/stdc++.h>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);//�˾�ɻ����±��ļ���ͬ������ ��ɵ�ʱ�临�Ӷȹ���
	int n;
	cin>>n;
	cin.get();//������getchar()   cin.getchar()��getchar()ʹ��ʱ��һ���������ﲻ��׸��
	while(n--)
    {
		string str;
		getline(cin,str);
		stringstream  ss;//�ļ���
		//ss.str(str);��str�����ļ���ss��������
		ss<<str;//Ч��һ��
		while(ss>>str)//whileѭ����
		{
			reverse(str.begin(),str.end());//�ַ�����ת����,�ɽ��ַ�����ת
			cout<<str<<' ';
		}
		cout<<endl;
	}
}
