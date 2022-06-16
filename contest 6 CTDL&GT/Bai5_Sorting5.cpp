#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		long long n,m,a;
		cin>>n>>m;
		int d[100005]={0};
		for(long long i=0;i<m+n;i++){
			cin>>a;
			d[a]++;
		}
		for(long long i=0;i<=100000;i++){
			if(d[i]>0) cout<<i<<" ";
		}
		cout<<endl;
		for(long long i=0;i<=100000;i++){
			if(d[i]>1) cout<<i<<" ";
		}
		cout<<endl;
	}

}

