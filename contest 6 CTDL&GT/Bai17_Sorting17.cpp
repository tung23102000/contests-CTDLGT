#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
 cin>>t;
 while(t--){
 	long long n,m;
 	cin>>n>>m;
 	long long a[n],b[m];
 	for(long long i=0;i<n;i++)
 	  cin>>a[i];
 	for(long long i=0;i<m;i++)
 	   cin>>b[i];
 	sort(a,a+n);
 	sort(b,b+m);
 	cout<<a[n-1]*b[0];
 	cout<<endl;
 }
}

