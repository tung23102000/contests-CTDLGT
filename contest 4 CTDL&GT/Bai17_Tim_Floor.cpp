#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
	 long long n,x;
	  cin>>n>>x;
	  vector<long long> a(n);
	  int vt=-1;
	  for(long long i=0;i<n;i++){
	  	cin>>a[i];
	  	if(a[i]<=x){
	  		vt=i+1;
		  }
	  }
	  cout<<vt;
	 cout<<endl;
  } 
}

