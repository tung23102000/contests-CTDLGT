#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005],vis[1005];
void bfs(int u,int v){
	vis[u]=1;
	queue<int> q;
	q.push(u);
	int f=0;
	while(!q.empty()){
		int t=q.front(); q.pop();
		for(int i=1;i<=n;i++){
			if(a[t][i]==1&&vis[i]==0){
				vis[i]=1;
				if(vis[v]==1){
					f=1;
					break;
				}
				q.push(i);
				
			}
		}
		if(f==1) break;
	}

}
int main(){
	int t,x,y,u,v;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(vis,0,sizeof(vis));
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		int lc;
		cin>>lc;
		while(lc--){
			memset(vis,0,sizeof(vis));
			cin>>x>>y;
			bfs(x,y);
			if(vis[y]==0)
			  cout<<"NO"<<endl;
			else cout<<"YES";
		}
	}
return 0;
}

