//����д
//stringstream��ת��8���Ƶ�10���ƻ��������

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    for(int i=0;i<T;i++)
    {
        string putstr; cin>>putstr;
        for(int j=0;j<putstr.length();j++)
        {
            if(putstr[j]>='4'&&putstr[j]<='7') putstr[j]-=1;
            else if(putstr[j]>='9') putstr[j]-=2;
        }
        //cout<<putstr<<endl;
        int out;
        stringstream ss;
        ss.str("");//���ss
        ss<<putstr;
        ss>>oct>>out;//8���Ʊ��10����
        cout<<out<<endl;
    }

	//cout<<oct<<10<<endl;
	return 0;
}
