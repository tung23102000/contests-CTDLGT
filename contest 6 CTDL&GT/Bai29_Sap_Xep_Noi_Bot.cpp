#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  t=1;
  while(t--){
  	long long n;
  	cin>>n;
  	long long a[n],b[n];
  	for(long long i=0;i<n;i++){
  		cin>>a[i];
  		b[i]=a[i];
	  }
	  sort(b,b+n);
	  //kiem tra mang a dc sap xep chua
	  for(long long i=0;i<n-2;i++){
	  	bool ok=false;
	  	for(long long j=0;j<n;j++){
	  		if(a[j]!=b[j]){
	  			ok=true;
	  			break;
			  }
		  }
	  if(!ok) break;
	  for(long long j=0;j<n-1;j++){
	  	if(a[j]>a[j+1]) swap(a[j],a[j+1]);
	  }
	  cout<<"Buoc "<<i+1<<": ";
	  for(long long i=0;i<n;i++)
	    cout<<a[i]<<" ";
	  cout<<endl;
     }
  }
}


