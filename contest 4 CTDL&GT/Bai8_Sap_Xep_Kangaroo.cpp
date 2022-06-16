#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vector<int> a(n);
  	int res=n;// cho bien ket qua = so luong kangaroo
  	for(int i=0;i<n;i++)
  	   cin>>a[i];
  	sort(a.begin(),a.end());// sap xep tu nho den lon
  	for(int i=n/2-1,j=n-1;i>=0 && j>=n/2;){
  		if(a[j]>=2*a[i]){// j la nhung con thuoc loai chieu cao X va i la nhung con thuoc loai chieu cao Y sao cho X>=2*Y
  			res--;
  			i--;
  			j--;
		  }
		else i--;
	  }
	cout<<res;
	cout<<endl;
  }
}

