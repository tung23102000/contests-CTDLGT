#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  	long long n;
  	cin>>n;
  	long long a[n];
  	for(long long i=0;i<n;i++){
  		cin>>a[i];
	  }
	  sort(a,a+n);
	  for(long long i=0;i<n;i++)
	    cout<<a[i]<<" ";
	  cout<<endl;
  }
}

