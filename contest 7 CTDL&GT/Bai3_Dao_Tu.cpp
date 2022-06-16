#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 cin.ignore();
 while(t--){
 	string s;
 	getline(cin,s);
 	stack<char> stk;
 	for(long long i=0;i<s.size();i++){
 		while(s[i]!=' ' &&i<s.size()){
 			stk.push(s[i++]);
 			
		 }
		 while(stk.size()>0){
		 	cout<<stk.top();
		 	stk.pop();
		 }
		 if(s[i]==' ') cout<<s[i];
	 }
   cout<<endl;	 
 }
}

