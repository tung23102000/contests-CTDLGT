#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[100];
int main(){
cin>>t;
while(t--){
	long long sum1=0,sum2=0,res=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	   cin>>a[i];
	sort(a,a+n);
	int j=0;
	while(j<n){
		if(j<k) sum1+=a[j];
		else sum2+=a[j];
		j++;
	}
	res=abs(sum1-sum2);
	j=0;
	sum1=sum2=0;
	while(j<n){
		if(j<n-k) sum1+=a[j];
		else sum2+=a[j];
		j++;
	}
	res=max(res,abs(sum1-sum2));
	cout<<res<<endl;
  }
}

