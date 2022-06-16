#include<bits/stdc++.h>
using namespace std;
int t,m,n,s;
int main(){
cin>>t;
while(t--){
	cin>>n>>s>>m;
	int luongthuc=m*s;
	if(luongthuc>(s-s/7)*n) cout<<-1;
	else{
		for(int i=1;i<=s-s/7;i++){
			if(n*i>=luongthuc){
				cout<<i;
				break;
			}
		}
	}
	cout<<endl;
}
}

