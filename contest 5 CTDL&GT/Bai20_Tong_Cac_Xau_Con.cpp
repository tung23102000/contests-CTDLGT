#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
   cin>>t;
   while(t--){
   	   long long n;
   	   cin>>n;
   	   vector <long long> a;
   	   while(n>0){
   	   	 a.push_back(n%10);
   	   	 n/=10;
	   }
	   reverse(a.begin(),a.end());
	   long long res=0;
	   for(int i=0;i<a.size();i++){
	   	  long long temp=0;
	   	  for(int j=i;j<a.size();j++){
	   	  	 temp=temp*10+a[j];
	   	  	 res+=temp;
		  }
	   }
	   cout<<res<<endl;
	}
}

