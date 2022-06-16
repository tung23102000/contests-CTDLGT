//chuyen ds canh sang ds ke
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,a,b;
		cin>>n>>m;// n la so dinh, m la so canh
		vector<int> ke[1005];// dung ngoac vuong
		for(int i=0;i<m;i++){
			cin>>a>>b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int j=0;j<ke[i].size();j++)
			    cout<<ke[i][j]<<" ";
			cout<<endl;
		}
	}
}

