#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
  cin>>t;
  while(t--){
  	long long n,m;
  	cin>>n>>m;
  	vector<long long> a(m+n);
  	for(long long i=0;i<a.size();i++)
  		cin>>a[i];
  	sort(a.begin(),a.end());
  	for(long long i=0;i<a.size();i++)
  	 cout<<a[i]<<" ";
  	 cout<<endl;
	
  }
}

