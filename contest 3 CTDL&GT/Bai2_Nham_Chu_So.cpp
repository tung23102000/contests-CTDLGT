#include<bits/stdc++.h>
using namespace std;
string a,b;
string tong(){
	while(a.size()>b.size()) b="0"+b;
	while(a.size()<b.size()) a="0"+a;
	string ans="";
	int nho=0;
	for(int i=a.size()-1;i>=0;i--){
		int so=int(a[i]-'0')+int(b[i]-'0')+nho;
		ans=char(so%10+'0')+ans;
		nho=so/10;
	}
	if(nho>0) return char(nho+'0')+ans;
	return ans;
}
int main(){
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='6') b[i]='5';
	}
	cout<<tong()<<" ";
	for(int i=0;i<a.size();i++){
		if(a[i]=='5') a[i]='6';
		
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='5') b[i]='6';
	}
	cout<<tong()<<endl;
}

