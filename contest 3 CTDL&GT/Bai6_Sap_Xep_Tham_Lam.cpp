#include<bits/stdc++.h>
using namespace std;
int t,n,a[1001];
bool check(int a[],int n){
	int cop[n];
    copy(a,a+n,cop);
	sort(cop,cop+n);
	for(int i=0;i<n;i++){
		if(!(a[i]==cop[i])&&!(a[n-1-i]==cop[i])) return false; 
		
	}
	return true;
}
int main(){
cin>>t;
while(t--){
	cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    if(check(a,n)==false) cout<<"No";
    else cout<<"Yes";
    cout<<endl;
    }
}

