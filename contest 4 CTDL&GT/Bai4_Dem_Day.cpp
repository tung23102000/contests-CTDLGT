#include<bits/stdc++.h>
using namespace std;
const long long mod=123456789;
int t;
long long n;
long long power(long long n,long long k){
	if(k==0) return 1;
	if(k%2==0){
		 long long p=power(n,k/2);
		 return (p*p)%mod;
	}
	else{
		return (power(n,k-1)*n) %mod;
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<power(2,n-1);
		cout<<endl;
	}
}

