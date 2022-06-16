#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
  cin>>t;
  while(t--){
  	int d[10]={0};
  	long long n,a;
  	cin>>n;
  	for(int i=0;i<n;i++){
	  cin>>a;
	  while(a>0){
	  	d[a%10]=1;
	  	a/=10;
	  }
   }
   for(int i=0;i<10;i++){
   	 if(d[i]==1) cout<<i<<" ";
   }
   cout<<endl;
  }
}

