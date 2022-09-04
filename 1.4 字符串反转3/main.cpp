#include<bits/stdc++.h>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);//此句可缓解下边文件流同步输入 造成的时间复杂度过高
	int n;
	cin>>n;
	cin.get();//不能用getchar()   cin.getchar()与getchar()使用时有一定区别，这里不做赘述
	while(n--)
    {
		string str;
		getline(cin,str);
		stringstream  ss;//文件流
		//ss.str(str);将str读入文件流ss缓冲区中
		ss<<str;//效果一样
		while(ss>>str)//while循环将
		{
			reverse(str.begin(),str.end());//字符串反转函数,可将字符串反转
			cout<<str<<' ';
		}
		cout<<endl;
	}
}
