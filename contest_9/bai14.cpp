#include<bits/stdc++.h>
using namespace std;
int N,M;
int a[1005][1005],vis[1005];
void bfs(int u,int v)
{
	vis[u]=1;
	queue<int> q;
	q.push(u);
	int f=0;
	while(!q.empty())
	{
		int t=q.front(); q.pop();
		//cout<<t<<" ";
		for(int i=1;i<=N;i++)
		{
			if(a[t][i] && !vis[i])
			{
				vis[i]=1;
				if(vis[v]==1)
				{
					f=1;
					break;
				}
				q.push(i);
			}
		}
		if(f==1)
		break;
	}
	//cout<<endl;
}
bool lienthong()
{
	for(int i=1;i<=N;i++)
	if(vis[i]==0)
	return false;
	return true;
}
int main()
{
	int t,u,x,y,v;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(vis,0,sizeof(vis));
		cin>>N>>M;
		for(int i=1;i<=M;i++)
		{
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		/*bfs(1);
		if(lienthong())
		{
			int q; cin>>q;
			while(q--)
			{
				cin>>x>>y;
				cout<<"YES"<<endl;
			}
		}*/
		//else
		//{
			int q; cin>>q;
			while(q--)
			{
				memset(vis,0,sizeof(vis));
				cin>>x>>y;
				bfs(x,y);
				if(vis[y]==0)
				cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
		//}
	}
	return 0;
}
