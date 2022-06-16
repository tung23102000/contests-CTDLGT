#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,val;
		cin>>n>>x;
		long long idx=0;
		for(long long i=1;i<=n;i++){
			cin>>val;
			if(val==x){
				idx=i;
			}
		
		}
		cout<<idx;
		cout<<endl;
	}

}

