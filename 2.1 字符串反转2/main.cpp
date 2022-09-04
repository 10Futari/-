#include<bits/stdc++.h>
using namespace std;
int main() {
	stack<string>mystack;
	string str1,str2;
	stringstream ss;//stringstream可实现相当于cin的效果
	while(getline(cin,str1)) {
		ss<<str1;
		while(ss>>str2)
			mystack.push(str2);
			ss.clear();
		while(!mystack.empty()) {
            cout<<mystack.top()<<' ';
            mystack.pop();
			if(mystack.empty())
				break;
		}
		cout<<endl;
	}
	return 0;
}
