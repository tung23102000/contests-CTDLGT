#include<bits/stdc++.h>
using namespace std;
int t,n,a[100000];
void nhap(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void Next_Permutation(){
	int j=n-1;
	while(j>0&&a[j]>a[j+1]) j--;// tim chi so j sao cho a[j]<a[j+1]
	if(j>0){
		int k=n;
		while(a[j]>a[k]) k--;
		swap(a[j],a[k]);
		int r=j+1,s=n;
	while(r<=s){
		swap(a[r],a[s]);
		r++;
		s--;
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	}
else{ for(int i=n;i>=1;i--) cout<<a[i]<<" ";
}
}
int main(){
cin>>t;
while(t--){
	cin>>n;
	nhap();
	Next_Permutation();
	cout<<endl;
}
}
