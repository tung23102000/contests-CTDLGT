#include<bits/stdc++.h>
using namespace std;

int timmax(string s){
	stack<int> q;
	q.push(-1);
	int res=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(')
		  q.push(i);
		else if(s[i]==')'){
			q.pop();
			if(q.empty())
			  q.push(i);
			else res=max(res,i-q.top());

		}
	}
	return res;
}
int main(){
	int t;
    string s;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		cout<<timmax(s)<<endl;
	}

}

