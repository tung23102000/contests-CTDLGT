#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int t;
struct Matran{
	long long c[2][2];
	Matran(){
		c[0][0]=0;                   //   0 1
		c[0][1]=c[1][0]=c[1][1]=1;    //  1 1
	}
	
};
Matran operator *(Matran a, Matran b){
	Matran res;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res.c[i][j]=0;
			for(int k=0;k<2;k++){
				res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%mod;
			}
		}
		    
	}
	return res;
}
Matran power(Matran a, long long n){
	if(n==1) return a;
	if(n%2==0){
		Matran p=power(a,n/2);
		return (p*p);
	}
	else{
		Matran p=power(a,n-1);
		return (a*p);
	}
}
int main(){
cin>>t;
while(t--){
	long long n;
	cin>>n;
	Matran a;
	a=power(a,n);
	cout<<a.c[0][1];
	cout<<endl;
}
}

