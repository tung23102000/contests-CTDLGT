//sap xep doi cho truc tiep
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int i=0;i<n-1;i++){
		cout<<"Buoc "<<i+1<<": ";
		for(int j=i+1;j<n;j++)
		  swap(a[i],a[j]);
		for(int i=0;i<n;i++)
		  cout<<a[i]<<" ";
		cout<<endl;
	}
return 0;
}

