#include<bits/stdc++.h>
using namespace std;
int t,n, val;
int main(){
	cin>>t;
	while(t--){
		vector<int>res;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>val;
			if(val!=0) res.push_back(val);
		}
		sort(res.begin(),res.end());
		long long x=0,y=0;
		for(int i=0;i<res.size();i++){
			if(i%2!=0) x=x*10+res[i];
			else y=y*10+res[i];
		}
		cout<<x+y<<endl;
	}
}

