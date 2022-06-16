#include<bits/stdc++.h>
using namespace std;
int process(int n,int m){
	if(n==1) return 1;
	else{
		return (process(n-1,m)+m-1)%n+1;
	}
}
int main(){
	int n,m;
	cin>>n;
	cin>>m;
	cout<<process(n,m);
return 0;
}

