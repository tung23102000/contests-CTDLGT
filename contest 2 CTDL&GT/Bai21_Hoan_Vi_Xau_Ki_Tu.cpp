#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int t,n;
string s;
bool OK=true;
void process(){
	int j=s.length()-2;
	while(j>=0&&s[j]>s[j+1]) j--;
	if(j>=0){
	  int k=s.length()-1;
	  while(s[j]>s[k]) k--;
	  swap(s[j],s[k]);
	  int r=j+1, m=s.length()-1;
	  while(r<=m){
		swap(s[r],s[m]);
		r++;
		m--;
	}
  }
	else OK=false;
}
void in(){
for(int i=0;i<s.length();i++)
		   cout<<s[i];
cout<<" ";
}
int main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		OK=true;
        while(OK){
		 in();
		 process();
	 }
	 cout<<endl;
 } 
}


