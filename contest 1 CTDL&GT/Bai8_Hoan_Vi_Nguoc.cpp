#include<bits/stdc++.h>
using namespace std;
int t,n,a[100];
bool OK=true;
void process(){
	int j=n-1;
	while(j>0&&a[j]>a[j+1]) j--;
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
	
	}
	else OK=false;
}
void in(){
	for(int i=1;i<=n;i++){
		cout<<n-a[i]+1;
	}
	cout<<" ";
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
		OK=true;
		while(OK){
			in();
			process();
			
		}
		cout<<endl;
	}

}

