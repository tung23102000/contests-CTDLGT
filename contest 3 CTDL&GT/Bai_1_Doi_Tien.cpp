#include<bits/stdc++.h>
using namespace std;
int t,n;
int coin[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int k=10;
int main(){
	cin>>t;
	while(t--){
		int dem=0;
		cin>>n;
		for(int i=k-1;i>=0;i--){
			dem+=n/coin[i];
			n%=coin[i];
		}
		cout<<dem<<endl;
	}
	return 0;
}

