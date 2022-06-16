#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	stack<char> a;
	int dem=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			a.push(s[i]);
		}
		else{
			if(!a.empty()) a.pop();
			else{
				a.push('(');
				dem++;
			}
		}
	}
	cout<<dem+a.size()/2<<endl;
	
}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
  	string s;
  	getline(cin,s);
  	solve(s);
  }
}

