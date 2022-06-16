#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
cin>>t;
string s;
int d;
while(t--){
 cin>>d>>s;
 int dem[1000]={0};
 int max_freq=0;
 for(int i=0;i<s.size();i++){
 	dem[s[i]]++;
 	if(max_freq<dem[s[i]]) max_freq=dem[s[i]];
 }
 if((max_freq-1)*(d-1)>s.size()-max_freq) cout<<-1;
 else cout<<1;
 cout<<endl;	
  }
}

