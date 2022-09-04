#include<bits/stdc++.h>

using namespace std;
bool check(int num,int n)
{
	if(num%n==0) return true;
	else
	{
		stringstream ss;
		string num_str,n_str;
		ss<<num;
		ss>>num_str;
		ss.clear();//转换完后clear进行下一次转换
		ss<<n;
		ss>>n_str;
		if(num_str.find(n_str)!=string::npos)
			return true;
	}
	return false;
}
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=n;i<=m;i++){
		if(check(i,n)) cout<<i<<" ";
	}
	return 0;
}
