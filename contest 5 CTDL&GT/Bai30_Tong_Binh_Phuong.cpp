#include<bits/stdc++.h>
using namespace std;
int t;

int main(){
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	long long f[10005];// goi f[i] la so cach it nhat de phan tich so i thanh tong binh phuong nho hon i
  	for(int i=0;i<=n;i++)
  	  f[i]=i;
  	for(int i=1;i<=n;i++)
  	  for(int j=1;j<=sqrt(i);j++)
  	  	f[i]=min(f[i],f[i-j*j]+1);
	cout<<f[n]<<endl;
  	
  }
  
}

