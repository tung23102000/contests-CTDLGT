#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
bool subsetsum(int a[],int n,int sum){
	if(sum==0) return true;
	if(n==0&&sum!=0) return false;
	if(a[n-1]>sum) return subsetsum(a,n-1,sum);
	return subsetsum(a,n-1,sum)||subsetsum(a,n-1,sum-a[n-1]);
}
bool check(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%2!=0) return false;
	return subsetsum(a,n,sum/2);
}
int main(){
	cin>>t;
	while(t--){
	  cin>>n;
	  for(int i=0;i<n;i++) 
	     cin>>a[i];
	  if(check(a,n)==true) cout<<"YES";
	  else cout<<"NO";
	  cout<<endl;
	}
}

