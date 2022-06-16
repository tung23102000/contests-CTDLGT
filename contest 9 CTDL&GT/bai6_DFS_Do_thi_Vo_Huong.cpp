#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1005];
vector < vector<int> > ke;
void dfs(int u){
	vis[u]=1;
	cout<<u<<" ";
	for(int i=0;i<ke[u].size();i++){
		if(vis[ke[u][i]]==0){
			dfs(ke[u][i]);
		}
	}
}
int main(){
	int t,u,x,y;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>n>>m>>u;
		ke.resize(n+1);
		for(int i=1;i<=n;i++){
			vis[i]=0;
		}
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(u);
		cout<<endl;
	}
return 0;
}

