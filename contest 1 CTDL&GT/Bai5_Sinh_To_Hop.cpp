#include<bits/stdc++.h>
using namespace std;
int t,n,k;
bool OK=true;
int a[100];
void xuat(){
	for(int i=1;i<=k;i++)
	 cout<<a[i];
	cout<<" ";
}
void process(){
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i>=1){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else OK=false;
}
int main(){
cin>>t;
while(t--){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	OK=true;
	while(OK){
		xuat();
		process();
	}
	cout<<endl;
}
}

