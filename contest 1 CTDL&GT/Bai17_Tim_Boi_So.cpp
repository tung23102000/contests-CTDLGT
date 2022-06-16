#include<bits/stdc++.h>
using namespace std;
int t,n;
long long binary(long long n){
	if(n==1) return 1;
	if(n%2==0) return 10*binary(n/2);
	else return 10*binary(n/2)+1;
}
int main(){
	cin>>t;
	while(t--){
		long long a=1,b=9;
		cin>>n;
		while(b%n!=0){
			a++;
			b=binary(a);
			b*=9;
		}
		cout<<b<<endl;
	}
}


