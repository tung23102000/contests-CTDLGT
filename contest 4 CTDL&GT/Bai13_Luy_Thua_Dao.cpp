#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t;
long long n;
long long power(long long n, long long r){
	if(r==0) return 1;
	if(r%2==0){
		long long p=power(n,r/2);
		return (p*p)%mod;
	}
	else{
		long long p=power(n,r-1);
		return (p*n)%mod;
	}
}
int main(){
cin>>t;
while(t--){
	cin>>n;
	long long r=0,m=n; 
	while(m>0){
		r=r*10+m%10;
		m/=10;
	}
	cout<<power(n,r);
	cout<<endl;
	}
}

