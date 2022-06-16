#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005][1005],vis[1005];
void dfs(int u){
	vis[u]=1;
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		int t=st.top(); st.pop();
		for(int i=1;i<=n;i++){
			if(a[t][i]==1 &&vis[i]==0){
				vis[i]=1;
				st.push(t);
				st.push(i);
				break;
			}
		}
	}
}
int main(){
	int t,i,x,y;
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
		int ans=0;
		for(int i=1;i<=n;i++){
			if(vis[i]==0){
				ans++;
				dfs(i);
			}
		}
		cout<<ans<<endl;
	}
return 0;
}

