#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t;
int main(){
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		if(n>=1&&n<=1000&&k>=1&&k<=1000){
		long long result=1;
		if(k>n) result=0;
		else
		  for(int i=n-k+1;i<=n;i++){
			 result=(result*i)%mod;
		}
		cout<<result<<endl;
		}
	  }
}

