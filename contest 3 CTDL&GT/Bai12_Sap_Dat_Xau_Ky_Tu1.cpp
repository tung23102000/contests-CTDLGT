#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
cin>>t;
while(t--){
	cin>>s;
	int dem[1000]={0}, max_freq=0;
	for(int i=0;i<s.size();i++){
		dem[s[i]]++;
		if(max_freq<dem[s[i]]) max_freq=dem[s[i]];
	}
	if(max_freq<=s.size()-max_freq && s.size()%2==0) cout<<1;
	else if(max_freq<=(s.size()/2+1) && s.size()%2==1) cout<<1;
	else cout<<-1;
	cout<<endl;
  }
}

