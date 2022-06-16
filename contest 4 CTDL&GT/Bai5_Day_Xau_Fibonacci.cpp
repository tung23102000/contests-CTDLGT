#include<bits/stdc++.h>
using namespace std;
int t;
long long n,i;
long long fibo(long long n){
	long long f1=1,f2=1,f;
	if(n==0) return 0;
	if(n==1||n==2) return 1;
	int j=3;
	while(j<=n){
		f=f1+f2;
		f1=f2;
		f2=f;
		j++;
	}
	return f;
}
char fiboword(long long n,long long i){
	if(n==1) return 'A';
	if(n==2) return 'B';
	long long k=fibo(n-2);
	if(i<=k) return fiboword(n-2,i);
	else return fiboword(n-1,i-k);
}
int main(){
cin>>t;
while(t--){
	cin>>n>>i;
    cout<<fiboword(n,i);
    cout<<endl;
	
}
}

