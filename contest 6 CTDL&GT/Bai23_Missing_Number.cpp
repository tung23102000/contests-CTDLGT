#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		long long d[n+5]={0};
		for(long long i=1;i<n;i++){//do chi co n-1 phan tu (de bai)
		   cin>>a[i];
		   d[a[i]]++;
	      }	   
		for(long long i=1;i<=n;i++){
		     if(d[i]==0){
		     	cout<<i;
		     	break;
			 }
		}
		cout<<endl;
	}
}

