#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > ke;
int vis[1005];
int n,m;
int truoc[1005];
void dfs(int u){
	vis[u]=1;
	for(int i=0;i<ke[u].size();i++){
		if(vis[ke[u][i]]==0){
			truoc[ke[u][i]]=u;
			dfs(ke[u][i]);
		}
	}
}
int main(){
	int t,x,y,u,v;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>n>>m>>u>>v;
		ke.resize(n+1);
		for(int i=1;i<=n;i++)
		  vis[i]=0;
		for(int i=1;i<=n;i++)
		  truoc[i]=0;
		truoc[u]=u;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			ke[x].push_back(y);
		}
		dfs(u);
		if(truoc[v]==0){
			cout<<-1<<endl;
		}
		else{
			int tmp[1005],i=0;
			tmp[i++]=v;
			while(truoc[v]!=u){
				tmp[i++]=truoc[v];
				v=truoc[v];
			}
			tmp[i++]=u;
			for(int j=i-1;j>=0;j--){
				cout<<tmp[j]<<" ";
			}
			cout<<endl;
		}
	}
return 0;
}

