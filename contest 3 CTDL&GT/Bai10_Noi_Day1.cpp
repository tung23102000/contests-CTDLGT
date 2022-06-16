#include<bits/stdc++.h>
using namespace std;
long long t,n,value;
	
int main(){
	cin>>t;
	while(t--){
		priority_queue <long long ,vector<long long>, greater<long long> >a;

		cin>>n;
		for(int i=0;i<n;i++){
		    cin>>value;
		    a.push(value);
	     }
	     long long cost=0;
	     while(a.size()>1){
	     	long long x=a.top(); a.pop();
	     	long long y=a.top(); a.pop();
	     	a.push(x+y);
	     	cost+=x+y;
		 }
		 cout<<cost<<endl;
	}

}

