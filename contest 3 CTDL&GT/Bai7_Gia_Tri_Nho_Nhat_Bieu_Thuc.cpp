#include<bits/stdc++.h>
using namespace std;
int t,n;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		long long tong=0;
		for(int i=0;i<n;i++){
			tong+=a[i]*b[n-1-i];
		}
		cout<<tong<<endl;
	}
}

