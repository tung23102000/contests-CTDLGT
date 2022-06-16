#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 cin.ignore();
 while(t--){
 	string s;
 	cin>>s;
 	bool ok=true;
 	stack<char> a;
 	for(int i=0;i<s.size();i++){
 		if(s[i]=='('||s[i]=='['||s[i]=='{'){
 			a.push(s[i]);
		 }
		 else if(s[i]=='}'){
		 	if(a.size()==0) ok=false;
		  else if(a.top()=='{')  a.pop();
		 }
    	 else if(s[i]==')'){
		 	if(a.size()==0) ok=false;
		  else if(a.top()=='(')  a.pop();
		 }
		 else if(s[i]==']'){
		 	if(a.size()==0) ok=false;
		  else if(a.top()=='[')  a.pop();
		 }
	 }
	 if(a.size()>0) ok=false;
	 if(ok) cout<<"YES";
	 else cout<<"NO";
	 cout<<endl;
 }
}

