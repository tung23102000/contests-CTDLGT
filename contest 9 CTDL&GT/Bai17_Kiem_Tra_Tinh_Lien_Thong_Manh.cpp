#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1005];
int a[1005][1005];
void bfs(int u){
	vis[u]=1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t=q.front(); q.pop();
		for(int i=1;i<=n;i++){
			if(a[t][i]==1&&vis[i]==0){
				vis[i]=1;
				q.push(i);
			}
		}
	}
	
}
bool lienthong(){
	for(int i=1;i<=n;i++){
		if(vis[i]==0)
		 return false;
	}
	return true;
}
int main(){
	int t,u,x,y;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		memset(vis,0,sizeof(vis));
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			a[x][y]=1;
		}
		bfs(1);
		if(lienthong())
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
	
return 0;
}

