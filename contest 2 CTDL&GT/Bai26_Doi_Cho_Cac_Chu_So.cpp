#include<bits/stdc++.h>
using namespace std;
int t,k;
string s;
void process(string s, int k,string &max){
	if(k==0)
	return;
	for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<s.length();j++)
		  if(s[i]<s[j]){
		  	swap(s[i],s[j]);
		  	if(s.compare(max)>0){
		  		max=s;
			  }
			  process(s,k-1,max);
			 swap(s[i],s[j]);
		  }
	}
}
int main(){
cin>>t;
while(t--){
	cin>>k;
	cin.ignore();
	getline(cin,s);
	string max=s;
	process(s,k,max);
	cout<<max<<endl;
  }
}
