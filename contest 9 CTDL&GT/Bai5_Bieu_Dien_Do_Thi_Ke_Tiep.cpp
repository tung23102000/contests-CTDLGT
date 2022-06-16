#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;

	int t;
	cin>>t;
	while(t--){
			vector<int> ke[1005];
		cin>>n>>m;//m la canh, n la so dinh
		for(int i=1;i<=m;i++){
			cin>>a>>b;
			ke[a].push_back(b);
		}
		for(int i=1;i<=n;i++){
			sort(ke[i].begin(),ke[i].end());
			cout<<i<<": ";
			for(int j=0;j<ke[i].size();j++){
				cout<<ke[i][j]<<" ";
			}
			cout<<endl;
		}
		
	}
return 0;
}

