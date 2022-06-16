#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t,n;
long long k;
long long power(int n,long long k){
	if(k==0) return 1;
	if(k%2==0){
		long long p=power(n,k/2);
		return (p*p)%mod;
	}
	else{
		long long p=power(n,k-1);
		return (p*n)%mod;
	}	
	
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<power(n,k);
		cout<<endl;
	}
}

