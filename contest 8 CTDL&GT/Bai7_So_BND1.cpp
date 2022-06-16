#include<bits/stdc++.h>
using namespace std;
int BDN(long long n){
	queue<long long> q;
	int res=0;
	q.push(1);
	while(!q.empty()){
		long long temp=q.front();
		q.pop();
		if(temp<=n){
			res++;
			q.push(temp*10);
			q.push(temp*10+1);
		}
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<BDN(n)<<endl;
	}
return 0;
}

