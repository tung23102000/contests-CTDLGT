#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 	long long n,k;
 	cin>>n>>k;
 	long long a[n+5];
 	for(long long i=1;i<=n;i++)
 	  cin>>a[i];
 	sort(a+1,a+n+1);
 	long long res=0;
 	for(long long i=n;i>1;i--){
 		long long temp=upper_bound(a+1,a+n+1,a[i]-k)-a;//upper_bound tro den vi tri dau tien trong pham vi [begin,last) cua phan tu ma > gia tri can xet, upper_bound(a,a+n,a[i]-k)-a tuc la vi tri nho nhat ma >a[i]-k
 		//lower_bound tro den phan tu dau tiên trong pham vi [dau tiên, cuoi cùng) không nho hon (tuc là lon hon hoac bang giá tri)
 		if(a[temp]+k==a[i]) temp++;
 		temp=i-temp;
 		if(temp>0) res+=temp;
 	
	 }
	cout<<res<<endl;
 }
}

