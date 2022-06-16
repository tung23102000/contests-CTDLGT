#include<bits/stdc++.h>
using namespace std;
int t,n,a[1000];
int main(){
cin>>t;
while(t--){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==0) dem++;
	}
	cout<<dem<<endl;
}
}

