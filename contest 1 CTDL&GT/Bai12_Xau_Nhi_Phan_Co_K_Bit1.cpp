#include<bits/stdc++.h>
using namespace std;
int t,k,n,a[100];
bool OK=true;
void in(){
	for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
}
void process(){
	int i=n;
	while(i>0&&a[i]!=0){
	 a[i]=0;
	 i--;
	 }
	if(i>0){
		a[i]=1;
	}
	else OK=false;
	int dem=0;
	for(i=1;i<=n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==k){
		in();
	}
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			a[i]=0;
		}
		OK=true;
    	while(OK){
	     process();
	}
}
}

