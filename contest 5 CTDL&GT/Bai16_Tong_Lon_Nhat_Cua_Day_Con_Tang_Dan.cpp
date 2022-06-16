#include<bits/stdc++.h>
using namespace std;
int t;
long long f[1010];
int main(){
   cin>>t;
   while(t--){
   	  int n;
	  long long res=0;
   	  cin>>n;
   	  long long a[n+10];
   	  for(int i=0;i<n;i++)
   	     cin>>a[i];
   	  for(int i=0;i<n;i++){
   	    	f[i]=a[i];
   	    	for(int j=0;j<i;j++){
   	    		if(a[j]<a[i])
   	    		   f[i]=max(f[i],f[j]+a[i]);
			   }
			  res=max(res,f[i]);
		   }
	   
	   cout<<res<<endl;  
   }
}

