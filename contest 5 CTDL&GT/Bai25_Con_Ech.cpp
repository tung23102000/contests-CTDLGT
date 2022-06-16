#include<bits/stdc++.h>
using namespace std;
int t;
long long f[55];
long long solve(int n){
	f[1]=1; f[2]=2;f[3]=4;
	for(int i=4;i<=50;i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}
	return f[n];
	
}
int main(){
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	cout<<solve(n)<<endl;
  	
  }
}

