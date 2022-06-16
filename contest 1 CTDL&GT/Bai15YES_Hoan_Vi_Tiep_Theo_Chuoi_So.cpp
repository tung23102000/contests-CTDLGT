#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int t,stt;
void swap(char &a, char &b){
	char temp=a;
	a=b;
	b=temp;
}
string process(string s){
	int j=s.length()-2;
	while(s[j]-'0'>=s[j+1]-'0') j--;
	if(j==-1) 	return "BIGGEST";
	else{
		int k=s.length()-1;
		while(s[j]-'0'>=s[k]-'0') k--;
		swap(s[j],s[k]);
		int r=j+1;
		int m=s.length()-1;
		while(r<=m){
			swap(s[r],s[m]);
			r++;
			m--;
		}
	}
    return s;
}
int main(){
string s;
cin>>t;
while(t--){
	cin>>stt;
	cin.ignore();
	cin>>s;
   cout<<stt<<" "<<process(s)<<endl;
  
 }
}


