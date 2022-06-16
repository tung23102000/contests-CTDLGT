//tuc la giua cap ngoac ma ko co +,- *, / hoac co 2 dau ngoac lien tiep se bi thua
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
	   bool ok;
		stack<char> a;
		for(int i=0;i<s.size();i++){
		  if(s[i]==')'){
		   	ok=true;
		   	char top=a.top(); a.pop();
		   	while(top!='('){
		   		if(top=='+'||top=='-'||top=='*'||top=='/')
		   			ok=false;
		   		top=a.top(); a.pop();
			   }
			if(ok) break;
		   }
		  else a.push(s[i]);
		}
    if(ok) cout<<"Yes"; 
	else cout<<"No";
	cout<<endl;
	}
}

