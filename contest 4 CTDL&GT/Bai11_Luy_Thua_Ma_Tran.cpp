#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int t;
int n;
long long k;
struct matran{
	long long c[20][20];
	void nhap(){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			  cin>>c[i][j];
		}
	}
	void xuat(){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			 cout<<c[i][j]<<" ";
			cout<<endl;
		}
	}
};
matran operator *(matran a, matran b){
	matran res;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res.c[i][j]=0;
			for(int k=0;k<n;k++){
				res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%mod;
			}
		}
	}
	return res;
}
matran power(matran a, long long k){
	if(k==1) return a;
	if(k%2==0){
		matran p=power(a,k/2);
		return (p*p);
	}
	else{
		matran p=power(a,k-1);
		return (a*p);
	}
}
int main(){
cin>>t;
while(t--){
    matran a;
	cin>>n>>k;
	a.nhap();
	a=power(a,k);
	a.xuat();
	}
}

