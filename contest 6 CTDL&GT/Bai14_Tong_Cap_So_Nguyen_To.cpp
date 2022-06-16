#include<bits/stdc++.h>
using namespace std;
int t;
vector<bool> isPrime(1000006,true); 
void sang(){
	isPrime[0]=isPrime[1]=false;
	for(long long i=2;i<=1000000;i++){
		if(isPrime[i]==true){
			for(long long j=i*i;j<=1000000;j+=i){
				isPrime[j]=false;
			}
		}
	}
}
int main(){
 sang();
 cin>>t;
 while(t--){
 	long long n;
 	cin>>n;
 	bool test=false;//mang danh dau
 	for(long long i=2;i<=n;i++){
 		if(isPrime[i]==true&&isPrime[n-i]==true){
 			cout<<i<<" "<<n-i;
 			test=true;
 			break;
		 }
	 }
	 if(!test) cout<<-1;
	 cout<<endl;
 }
}

