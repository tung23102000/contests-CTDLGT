/* Phuong phap: Thay vi tim truc tiep cac phan tu roi tinh tong va kiem tra xem co chia het cho k hay ko 
	     thi chung ta se chon 1 so toi thieu cac phan tu co tong dong du voi S khi %k va sau do loai bo nhung phan tu nay thi se ra ket qua
		 Note: so ptu toi thieu can loai bo bao h cung nho hon k*/
#include<bits/stdc++.h>
using namespace std;
int t;
int f[1010][60];
int main(){
  cin>>t;
  while(t--){
  	int n,k;
  	cin>>n>>k;
  	int a[1010];
  	int sum=0;
  	for(int i=1;i<=n;i++){
  		cin>>a[i];
  		a[i]=a[i]%k;
  		sum=(sum+a[i])%k;
	  }
	  /* goi f[i][j] la so phan tu toi thieu can chon trong day a [1],a [2]...,a[i] de co tong chia k du j */
	  f[0][0]=0; 
	  /* neu ko co phuong an chon thi ta coi f[0][j]= + vo cung */
	  for(int j=1;j<k;j++){// do j la so du ma so du luon < so chia k
	  	f[0][j]=50000;// coi la + vo cung
	  }
	  for(int i=1;i<=n;i++){
	  	for(int j=1;j<k;j++){
	  		f[i][j]=min(f[i-1][j],f[i-1][(j+k-a[i])%k]+1);
		  }
	  }
	  cout<<n-f[n][sum%k]<<endl;
  }
}

