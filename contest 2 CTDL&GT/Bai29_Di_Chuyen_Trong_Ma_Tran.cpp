#include<bits/stdc++.h>
using namespace std;
int t,m,n,a[100][100];
int count(int m,int n){
	if(m==1||n==1) return 1;
	return count(m-1,n)+count(m,n-1);
}
int main(){
	cin>>t;
	while(t--){
     cin>>m>>n;
	 for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
		  cin>>a[i][j];
	  }
	 cout<<count(m,n)<<endl;
	}
}

