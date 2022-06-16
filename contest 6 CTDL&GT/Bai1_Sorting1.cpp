#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vector <int> a(n);
  	for(int i=0;i<n;i++){
  		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int i,j;
	for(i=0,j=a.size()-1;i<j;i++,j--){
		cout<<a[j]<<" "<<a[i]<<" ";
	}
	if(i==j) cout<<a[i]<<" ";
	cout<<endl;
  }

}


