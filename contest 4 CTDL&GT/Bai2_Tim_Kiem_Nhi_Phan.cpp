#include<bits/stdc++.h>
using namespace std;
int t;
long long n,k;
long long bs(long long a[],long long l,long long r,long long k){
	while(r>=l){
	long long mid=(l+r)/2;
	if(a[mid]==k) return mid;
     if(k>a[mid]) l=mid+1;
	 if(k<a[mid]) r=mid-1;
	}
	return -1;
}
int main(){
cin>>t;
while(t--){
	cin>>n>>k;
    long long a[n];
	for(long long i=1;i<=n;i++)
	   cin>>a[i];
	sort(a+1,a+n+1);
    if(bs(a,1,n,k)==-1) cout<<"NO" ;
    else cout<<bs(a,1,n,k);
	cout<<endl;
   }
}

