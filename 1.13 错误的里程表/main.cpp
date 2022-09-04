//已重写
//stringstream类转化8进制到10进制还需继续看

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
        ss.str("");//清空ss
        ss<<putstr;
        ss>>oct>>out;//8进制变成10进制
        cout<<out<<endl;
    }

	//cout<<oct<<10<<endl;
	return 0;
}
