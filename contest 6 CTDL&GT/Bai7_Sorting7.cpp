#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vector<int> a(n),b(n);
  	for(int i=0;i<n;i++){
  		cin>>a[i];
  		b[i]=a[i];
	  }
	  sort(a.begin(),a.end());
	int l=0,r=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			l=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]!=b[i]){
			r=i;
			break;
		}
	}
	cout<<l+1<<" "<<r+1;
	cout<<endl;
  }
}

