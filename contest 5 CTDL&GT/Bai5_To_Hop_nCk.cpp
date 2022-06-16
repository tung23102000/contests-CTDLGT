#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long dp[1010][1010];
int t;

int main(){
	cin>>t;
	while(t--){
	 int n,k;
	 cin>>n>>k;
	 for(int i=0;i<=1000;i++){
	 	for(int j=0;j<=i;j++){
	 		if(i==j||j==0) dp[i][j]=1;// nCk (to hop chap k cua n) =1 <=> n==k || k=0
	 		else dp[i][j]=dp[i-1][j]+dp[i-1][j-1];//nCk=(n-1)Ck+(n-1)C(k-1)
	 		dp[i][j]%=mod;
		 }
	 }
     cout<<dp[n][k]<<endl;
   }
}

