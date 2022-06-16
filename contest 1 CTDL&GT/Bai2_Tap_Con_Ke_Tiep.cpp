#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1000];
void nhap(){
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
}
void Next_Combination(){
int i=k;
while(i>0&&a[i]==n-k+i) i--;//tim phan tu a[i] khac n-k+i
if(i>=1){
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++){
		a[j]=a[i]+j-i;
	}
	for(int i=1;i<=k;i++)
	 cout<<a[i]<<" ";
}
else{
	for(int i=1;i<=k;i++)
	 cout<<i<<" ";
}
}


int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		nhap();
		Next_Combination();
		cout<<endl;
	}
	

	

}

