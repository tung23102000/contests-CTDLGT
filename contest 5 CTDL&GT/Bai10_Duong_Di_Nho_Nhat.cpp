#include<bits/stdc++.h>
using namespace std;
int t,x,m,n,a[1010][1010];
int main(){
   cin>>t;
   while(t--){
   	cin>>n>>m;
   	for(int i=1;i<=n;i++){
   		for(int j=1;j<=m;j++){
		  cin>>x;
   		  if(i==1&&j==1) a[i][j]=x;
   		  else if(i==1) a[i][j]=a[i][j-1]+x;
   		  else if(j==1) a[i][j]=a[i-1][j]+x;
   		  else a[i][j]=min(min(a[i-1][j-1],a[i-1][j]),a[i][j-1])+x;
	   }
    }
	 cout<<a[n][m]<<endl;  
   }
}

