#include<bits/stdc++.h>
using namespace std;
long long d[100005]={0};//tat ca phan tu deu =0
int main(){
	int t;
  cin>>t;
  while(t--){
  	memset(d, 0, sizeof(d));
  	long long n,m,a;
  	cin>>n>>m;
  	for(long long i=0;i<n+m;i++){
	   cin>>a;
	   d[a]++;
    }
    // tim hop 2 mang
  	for(long long i=0;i<=100000;i++){
  		if(d[i]>0) cout<<i<<" ";
	  }
	  cout<<endl;
	  //tim giao cua 2 mang
	 for(long long i=0;i<=100000;i++){
	 	if(d[i]>1) cout<<i<<" ";
	 } 
	 cout<<endl;
  }
}

