#include <iostream>
#include <set>
using namespace std;
int main(){
	int n;
	while(cin>>n&&n!=0)
	{
		set<string> p;
		p.clear();
		int num=2*n-1;
		while(num--)
		{
			string name;
			cin>>name;
			if(p.find(name)!=p.end())//找到
			//find()返回给定值值得定位器，如果没找到则返回end()。
			 p.erase(name);
			else  p.insert(name);//未找到
		}
		set<string>::iterator it=p.begin();
		cout<<*it<<endl;
	 }
}
