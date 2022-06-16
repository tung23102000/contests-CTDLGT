#include<bits/stdc++.h>
using namespace std;
int t;
unsigned long int catalan(unsigned int n){
	long long f[110];
	f[0]=f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=0;
		for(int j=0;j<i;j++){
			f[i]+=f[j]*f[i-j-1];
		}
	}
	return f[n];
}
int main(){
  cin>>t;
  while(t--){
  	unsigned int n;
  	cin>>n;
  	cout<<catalan(n)<<endl;
  }
}

