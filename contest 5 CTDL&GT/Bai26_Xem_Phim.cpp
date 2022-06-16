#include<bits/stdc++.h>
using namespace std;
int t;
long long f[101][25001];
//goi f[i][j] la khoi luong lon nhat khi chon den con bo thu i va khoi luong toi da la j
int main(){
	t=1;
	while(t--){
		int w,n;
		cin>>w>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
		  cin>>a[i];
		memset(f,0,sizeof(f));
		for(int i=1;i<=n;i++){
		   for(int j=1;j<=w;j++){
				if(j>=a[i])
					f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]+a[i]);
				else f[i][j]=f[i-1][j];
			}
		}
		cout<<f[n][w]<<endl;
	}

}

