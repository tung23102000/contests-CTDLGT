#include<bits/stdc++.h>
using namespace std;
vector< vector<int> >ke(1005);
int vis[1005];
int n,m;
void bfs(int u){
	vis[u]=1;
	queue<int> q;
	q.push(u); 
	while(!q.empty()){
		int t=q.front(); q.pop();
		for(int i=0;i<ke[t].size();i++){
			if(vis[ke[t][i]]==0){
				vis[ke[t][i]]==1;
				q.push(ke[t][i]);
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,u;
		ke.clear();
		memset(vis,0,sizeof(vis));
		cin>>x>>y>>u;
		ke.resize(n+1);
		for(int i=1;i<=n;i++){
			vis[i]=0;
		}
		for(int i=1;i<=m;i++){
			cin>>x>>y>>u;
			ke[x].push_back(y);
			
		}
			bfs(u);
	cout<<endl;
	}

return 0;
}

