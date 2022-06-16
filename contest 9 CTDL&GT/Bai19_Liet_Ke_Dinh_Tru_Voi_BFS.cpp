#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1005];
vector < vector<int> >ke(1005);
void bfs(int u){
	vis[u]=1;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int t=q.front(); q.pop();
		for(int i=0;i<ke[t].size();i++){
			if(vis[ke[t][i]]==0){
				vis[ke[t][i]]=1;
				q.push(ke[t][i]);
			}
		}
	}
}
bool check(){
	for(int i=1;i<=n;i++){
		if(vis[i]==0)
		 return false;
	}
		return true;
}
int main(){
	int t,x,y,u;
	cin>>t;
	while(t--){
		ke.clear();
		cin>>n>>m;
		ke.resize(n+1);
		for(int i=1;i<=n;i++)
		 vis[i]=0;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		vector<int> res;
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof(vis));
			vis[i]=1;
			if(i==1)
			 bfs(2);
			else bfs(1);
			if(!check())//check =false nghia la dinh do chua dc tham thi k lien thong
			  res.push_back(i);
		}
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<" ";
		cout<<endl;
		}
	}
	
return 0;
}

