#include<bits/stdc++.h>
using namespace std;
int t;
long long max(long long a, long long b){
	return a>b?a:b;
}
long long max(long long a, long long b, long long c){
	return max(max(a,b),c);
}
long long maxCrossSum(long long a[],long long l, long long m, long long r){// 1 2 3 4 5
	long long sum=0;
	long long leftSum=LONG_LONG_MIN;// gia tri nho nhat kieu long long
	for(long long i=m;i>=l;i--){
		sum+=a[i];
		if(sum>leftSum) leftSum=sum;
	}
	sum=0;
	long long rightSum=LONG_LONG_MIN;
	for(long long i=m+1;i<=r;i++){
		sum+=a[i];
		if(sum>rightSum) rightSum=sum;
	}
	return max(leftSum+rightSum,leftSum,rightSum);
}
long long maxSubarrSum(long long a[], long long l, long long r){
	if(l==r) return a[l];
	long long m=(l+r)/2;
	return max(maxSubarrSum(a,l,m),maxSubarrSum(a,m+1,r),maxCrossSum(a,l,m,r));
	
}
int main(){
cin>>t;
while(t--){
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	cout<<maxSubarrSum(a,0,n-1);
	cout<<endl;
	
}
	
}

