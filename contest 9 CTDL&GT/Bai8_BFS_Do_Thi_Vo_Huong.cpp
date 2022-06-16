#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1005];
vector< vector<int> > ke(1005);
void bfs(int u){
	vis[u]=1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t=q.front(); q.pop();
		cout<<t<<" ";
		for(int i=0;i<ke[t].size();i++){
			if(vis[ke[t][i]]==0){
				vis[ke[t][i]]==1;
				q.push(ke[u][i]);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;

	while(t--){
	 	ke.clear();
	 	memset(vis,0,sizeof(vis));
	 	int x,y,u;
	 	cin>>n>>m>>u;
	 	ke.resize(n+1);
	 	for(int i=1;i<=n;i++)
	 	   vis[i]=0;
	 	for(int i=1;i<=m;i++){
	 		cin>>x>>y;
	 		ke[x].push_back(y);
	 		ke[y].push_back(x);
		 }
		 bfs(u);
		 cout<<endl;
	 	
	}
return 0;
}

