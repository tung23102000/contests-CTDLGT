#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll reduceto1(ll a){
	if(a==1)
	return 0;
	set<ll> checked;
	checked.insert(a);
	queue<int> q;
	q.push(a);
	int res=0;
	while(!q.empty()){
		res++;
		int size=q.size();
		while(size--){
			ll tmp=q.front(); q.pop();
			ll x=tmp-1;
			if(x==1) return res;
			else{
				if(checked.find(x)==checked.end()){
					q.push(x);
					checked.insert(x);
				}
			}
			for(ll i=2;i*i<=tmp;i++){
				if(tmp%i==0){
					if(checked.find(tmp/i)==checked.end()){
						checked.insert(tmp/i);
						q.push(tmp/i);
					}
				}
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a;
		cin>>a;
		cout<<reduceto1(a)<<endl;
	}
return 0;
}

