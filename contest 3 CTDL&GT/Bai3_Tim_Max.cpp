#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int n,t;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		long long tong=0;
		for(int i=0;i<n;i++){
			tong+=a[i]*i;
			tong%=mod;
		}
		cout<<tong<<endl;
	}
}

