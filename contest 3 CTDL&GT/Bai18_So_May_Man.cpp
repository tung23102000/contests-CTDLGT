#include<bits/stdc++.h>
using namespace std;
int t,n;
void process(){
	bool check=false;
	for(int i=0;i<=n;i+=4){
		if((n-i)%7==0){
			for(int j=1;j<=i/4;j++)
			 cout<<4;
			for(int j=1;j<=(n-i)/7;j++)
			  cout<<7;
			  check=true;
			  break;
		}
	}
	if(!check) cout<<-1;
}
int main(){
cin>>t;
while(t--){
	cin>>n;
	process();
	cout<<endl;
 } 
}

