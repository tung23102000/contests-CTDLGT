#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	int m,n,k;
	while(t--){
      cin>>m>>n>>k;
      vector<int> c(m+n);// khai bao vector c gom m+n
	  for(int i=0;i<m+n;i++){
		cin>>c[i];
	 }
	 sort(c.begin(),c.end());
	 cout<<c[k-1]<<endl;
	}
}
