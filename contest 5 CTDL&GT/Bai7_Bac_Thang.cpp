#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t,f[100010];
int solve(int n,int k){
	f[0]=1,f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=0;
		for(int j=1;j<=k&&j<=i;j++){
			f[i]=(f[i]+f[i-j])%mod;
		}
	}
	return f[n-1];
}
int main(){
   cin>>t;
   while(t--){
   	int n,k;
   	cin>>n>>k;
   	cout<<solve(n+1,k)<<endl;
   }
}

