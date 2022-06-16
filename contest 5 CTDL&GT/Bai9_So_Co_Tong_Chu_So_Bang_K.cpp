#include<bits/stdc++.h>
using namespace std;
int t;
int tong(int n){
	int tong=0;
	int a[1000];
	int j=0;
	while(n>0){
		a[j]=n%10;
		n/=10;
		j++;
	}
	for(int i=0;i<j;i++){
		tong+=a[i];
	}
	return tong;
}
int laySo(int n){
	int s=1;
	for(int i=0;i<n;i++)
	 s*=10;
	return s;
}
int main(){
  cin>>t;
  while(t--){
  	int n,k;
  	int dem=0;
  	int s=0;
  	cin>>n>>k;
  	s=laySo(n);
  	for(int i=s/10;i<=s;i++){
  		if(tong(i)==k){
  			dem++;
		  }
	  }
	  cout<<dem<<endl;
  }
}

