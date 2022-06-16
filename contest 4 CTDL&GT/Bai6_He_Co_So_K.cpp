#include<bits/stdc++.h>
using namespace std;
int k;
string a,b;
int main(){
cin>>k>>a>>b;
while(b.length()>a.length()) a="0"+a;
while(b.length()<a.length()) b="0"+b;
string ans="";
int nho=0;
for(int i=a.length()-1;i>=0;i--){
	int so=int(b[i]-'0')+int(a[i]-'0')+nho;
	ans=char(so%k+'0')+ans;
	nho=so/k;
}
if(nho>0) ans=char(nho+'0')+ans;
cout<<ans;
}

