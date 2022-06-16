// bieu dien ds canh sang ds ke dt co huong
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,a,b;
	
	cin>>t;
	while(t--){
		vector<int> ke[1005];
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>a>>b;
			ke[a].push_back(b);
		
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
		    for(int j=0;j<ke[i].size();j++){
		    	cout<<ke[i][j]<<" ";
		    	
			}
			cout<<endl;
		}
	}
	
return 0;
}

