#include<bits/stdc++.h>
using namespace std;
long long BS(long long a[],long long le, long long r, long long x){
	while(r>=le){
		long long mid=(le+r)/2;
		if(a[mid]==x) return mid;
		if(a[mid]>x) r=mid-1;
		if(a[mid]<x) le=mid+1;
	}
	return -1;
	
}
int main(){
  int t;
  cin>>t;
  while(t--){
  	long long n,x;
  	cin>>n>>x;
  	long long a[n];
  	for(long long i=0;i<n;i++){
  		cin>>a[i];
	  }
	  sort(a,a+n);
	  if(BS(a,0,n-1,x)==-1) cout<<-1;
	  else cout<<1;
	  cout<<endl;
  }
}

