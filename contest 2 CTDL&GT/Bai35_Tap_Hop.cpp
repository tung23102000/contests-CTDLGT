#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int dem;
int a[21];
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int tong=0;
			for(int m=1;m<=k;m++){
				tong+=a[m];
			}
			if(tong==s) dem++;
		}
		else Try(i+1);
	}
}
int main(){
while(true){
	cin>>n>>k>>s;
	dem=0;
	for(int i=0;i<20;i++){
		a[i]=0;
	}
	if(n==0&&k==0&&s==0) break;
	Try(1);
	cout<<dem<<endl;
 }
}

