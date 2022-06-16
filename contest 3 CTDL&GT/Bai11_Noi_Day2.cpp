#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long n,value;
int main(){
  cin>>n;
  priority_queue< long long, vector<long long>, greater<long long> >a;
  for(long long i=0;i<n;i++){
	cin>>value;
	a.push(value);
  }
  long long cost=0;
   while(a.size()>1){
   	long long x=a.top(); a.pop();
   	long long y=a.top(); a.pop();
   	long long temp=(x+y)%mod;
   	a.push(temp);
   	cost+=temp;
   }
   cost%=mod;
   cout<<cost;
}

