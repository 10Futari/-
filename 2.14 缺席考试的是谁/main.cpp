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
			if(p.find(name)!=p.end())//�ҵ�
			//find()���ظ���ֵֵ�ö�λ�������û�ҵ��򷵻�end()��
			 p.erase(name);
			else  p.insert(name);//δ�ҵ�
		}
		set<string>::iterator it=p.begin();
		cout<<*it<<endl;
	 }
}
