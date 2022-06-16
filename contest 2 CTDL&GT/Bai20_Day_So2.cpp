#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
void process(int a[],int n){
	if(n<1) return;
	int temp[n-1];
	for(int i=0;i<n-1;i++){
		int x=a[i]+a[i+1];
		temp[i]=x;
	}
	process(temp,n-1);
	cout<<"[";
	for(int i=0;i<n;i++){
		if(i==0&&i!=n-1) cout<<a[i]<<" ";
		else{
			if(i==n-1) cout<<a[i]<<"]";
			else cout<<a[i]<<" ";
		}
	}
	cout<<" ";

}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
		  cin>>a[i];
		process(a,n);
		cout<<endl;
	}

}

