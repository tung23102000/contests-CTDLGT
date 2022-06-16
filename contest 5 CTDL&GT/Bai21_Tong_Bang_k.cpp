#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t;
int main(){
   cin>>t;
   while(t--){
   	int n,k;
   	int a[n+10];
   	cin>>n>>k;
   	long long f[k+10]={0};
   	// goi f[i] la so cach de tao ra tong bang i
   	f[0]=1;// co 1 cach duy nhat de tao ra tong bang 0
   	for(int i=0;i<n;i++)
   	   cin>>a[i];
   	for(int i=1;i<=k;i++){// duyet tung tong
   	   for(int j=0;j<n;j++){// duyet trong so cac phuong an trong day
		  	if(i>=a[j]) f[i]=(f[i]+f[i-a[j]])%mod;// f[i-a[j]] la so cach de tao ra cai tong con lai i-a[j]
	}
   }
   cout<<f[k]<<endl;
 }
}

